// Fill out your copyright notice in the Description page of Project Settings.


#include "Door/DoubleDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Character/Archivist.h"
#include "Character/ArchiveGameInstance.h"


// Sets default values
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
}

// Called when the game starts or when spawned
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
}

void ADoubleDoor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AArchivist* Player = Cast<AArchivist>(OtherActor))
	{
		InteractingPlayer = Player;
	}
}

void ADoubleDoor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == InteractingPlayer)
	{
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
	case EDoorType::Garage:
		bCanOpen = GI->bHasGarageKeycard;
		break;
	case EDoorType::Archive:
		bCanOpen = GI->bHasArchiveKeycard;
		break;
	case EDoorType::Equipment:
		bCanOpen = GI->bHasEquipmentKeycard;
		break;
	}

	if (!bCanOpen)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing keycard for %d"), (int32)DoorType);
		return;
	}

	FVector DoorToPlayer = Player->GetActorLocation() - GetActorLocation();
	FVector LocalOffset = GetActorTransform().InverseTransformVector(DoorToPlayer);

	// If the player is on the right side of the door's Y axis, we rotate away in one direction; if left, the other
	int32 DirectionMultiplier = (LocalOffset.Y >= 0) ? 1 : -1;

	TargetLeftRotation = FRotator(0.f, DirectionMultiplier * OpenAngle, 0.f);
	TargetRightRotation = FRotator(0.f, DirectionMultiplier * OpenAngle, 0.f);

	bShouldOpen = true;
	bIsOpen = false;
	OpenTimer = 0.0f;
}

