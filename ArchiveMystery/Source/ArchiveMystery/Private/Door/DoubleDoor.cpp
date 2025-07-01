// Fill out your copyright notice in the Description page of Project Settings.


#include "Door/DoubleDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Character/Archivist.h"
#include "Character/ArchiveGameInstance.h"

ADoubleDoor::ADoubleDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	SetRootComponent(DoorFrame);

	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(DoorFrame);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(DoorFrame);

	InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
	InteractionBox->SetupAttachment(DoorFrame);
	InteractionBox->SetBoxExtent(FVector(100.f, 100.f, 200.f));
	InteractionBox->SetCollisionProfileName(TEXT("Trigger"));
	InteractionBox->SetGenerateOverlapEvents(true);

	InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &ADoubleDoor::OnBoxBeginOverlap);
	InteractionBox->OnComponentEndOverlap.AddDynamic(this, &ADoubleDoor::OnBoxEndOverlap);

	//Text
	LockedText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LockedText"));
	LockedText->SetupAttachment(RootComponent);
	LockedText->SetHorizontalAlignment(EHTA_Center);
	LockedText->SetVerticalAlignment(EVRTA_TextCenter);
	LockedText->SetTextRenderColor(FColor::Black);
	LockedText->SetText(FText::FromString("Access Denied"));
	LockedText->SetWorldSize(20.0f);
	LockedText->SetRelativeLocation(FVector(0.f, 0.f, 150.f));
	LockedText->SetHiddenInGame(true);
}

void ADoubleDoor::BeginPlay()
{
	Super::BeginPlay();

	InitialLeftRotation = LeftDoor->GetRelativeRotation();
	InitialRightRotation = RightDoor->GetRelativeRotation();
}

// Called every frame
void ADoubleDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bShouldOpen && !bIsOpen)
	{
		LeftDoor->SetRelativeRotation(FMath::RInterpTo(LeftDoor->GetRelativeRotation(), TargetLeftRotation, DeltaTime, OpenSpeed));
		RightDoor->SetRelativeRotation(FMath::RInterpTo(RightDoor->GetRelativeRotation(), TargetRightRotation, DeltaTime, OpenSpeed));

		if (LeftDoor->GetRelativeRotation().Equals(TargetLeftRotation, 1.0f))
		{
			bIsOpen = true;
			OpenTimer = 0.0f;
		}
	}
	else if (bIsOpen)
	{
		OpenTimer += DeltaTime;

		if (OpenTimer >= TimeBeforeClose)
		{
			LeftDoor->SetRelativeRotation(FMath::RInterpTo(LeftDoor->GetRelativeRotation(), InitialLeftRotation, DeltaTime, OpenSpeed));
			RightDoor->SetRelativeRotation(FMath::RInterpTo(RightDoor->GetRelativeRotation(), InitialRightRotation, DeltaTime, OpenSpeed));

			if (LeftDoor->GetRelativeRotation().Equals(InitialLeftRotation, 1.0f))
			{
				bIsOpen = false;
				bShouldOpen = false;
			}
		}
	}

	if (bShouldShowLockedText)
	{
		LockedTextTimer += DeltaTime;

		if (LockedTextTimer >= TextVisibleDuration)
		{
			LockedText->SetHiddenInGame(true);
			bShouldShowLockedText = false;
		}
	}
}

void ADoubleDoor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AArchivist* Player = Cast<AArchivist>(OtherActor))
	{
		InteractingPlayer = Player;

		if (PressEWidgetClass && !PressEWidgetInstance)
		{
			PressEWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PressEWidgetClass);
			if (PressEWidgetInstance)
			{
				PressEWidgetInstance->AddToViewport();
			}
		}
	}
}

void ADoubleDoor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == InteractingPlayer)
	{
		if (PressEWidgetInstance)
		{
			PressEWidgetInstance->RemoveFromParent();
			PressEWidgetInstance = nullptr;
		}

		InteractingPlayer = nullptr;
	}
}

void ADoubleDoor::Interact(AActor* PlayerActor)
{
	AArchivist* Player = Cast<AArchivist>(PlayerActor);
	if (!Player) return;

	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(Player->GetGameInstance());
	if (!GI) return;

	bool bCanOpen = false;
	switch (DoorType)
	{
	case EDoorType::DoubleDoor:
		bCanOpen = GI->bHasKeycard;
		break;
	}

	if (!bCanOpen)
	{
		FText Message;

		switch (DoorType)
		{
		case EDoorType::DoubleDoor:
			Message = DoubleDoorLockedText;
			break;
		default:
			Message = GenericLockedText;
			break;
		}

		LockedText->SetText(Message);
		LockedText->SetHiddenInGame(false);
		bShouldShowLockedText = true;
		LockedTextTimer = 0.0f;

		return;
	}

	FVector DoorToPlayer = Player->GetActorLocation() - GetActorLocation();
	FVector LocalOffset = GetActorTransform().InverseTransformVector(DoorToPlayer);

	int32 DirectionMultiplier = (LocalOffset.Y >= 0) ? 1 : -1;

	TargetLeftRotation = FRotator(0.f, DirectionMultiplier * OpenAngle, 0.f);
	TargetRightRotation = FRotator(0.f, DirectionMultiplier * OpenAngle, 0.f);

	bShouldOpen = true;
	bIsOpen = false;
	OpenTimer = 0.0f;
}
