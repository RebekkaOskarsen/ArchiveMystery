// Fill out your copyright notice in the Description page of Project Settings.


#include "Scanner/TriggerMailInteraction.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"

ATriggerMailInteraction::ATriggerMailInteraction()
{
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerMailInteraction::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerMailInteraction::OnOverlapEnd);

	bPlayerIsInside = false;
	MailWidgetInstance = nullptr;
}

void ATriggerMailInteraction::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}
}

void ATriggerMailInteraction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckForInteraction();
}

void ATriggerMailInteraction::CheckForInteraction()
{
	if (!bPlayerIsInside) return;

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (PC && Archivist && PC->WasInputKeyJustPressed(EKeys::E))
	{
		if (Archivist->bHasPlacedBox &&
			Archivist->bHasFinishedShreddedPaperMinigame &&
			Archivist->bHasFinishedMoldMinigame &&
			Archivist->bHasFoundDocument1 &&
			Archivist->bHasFoundDocument2 &&
			Archivist->bHasScannedDocuments &&
			Archivist->bHasDeliveredDocuments)
		{
		ShowMailWidget();
		}
	}
	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance && Archivist)
	{
		GameInstance->SavedPlayerLocation = Archivist->GetActorLocation();
	}
}

void ATriggerMailInteraction::ShowMailWidget()
{
	if (!MailWidgetInstance && MailWidgetClass)
	{
		MailWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), MailWidgetClass);
		if (MailWidgetInstance)
		{
			MailWidgetInstance->AddToViewport();

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				PC->SetInputMode(FInputModeUIOnly());
				PC->bShowMouseCursor = true;
			}
		}
	}
}

void ATriggerMailInteraction::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;

		AArchivist* Archivist = Cast<AArchivist>(OtherActor);
		if (Archivist && Archivist->bHasDeliveredDocuments)
		{
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
}


void ATriggerMailInteraction::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = false;

		if (PressEWidgetInstance)
		{
			PressEWidgetInstance->RemoveFromParent();
			PressEWidgetInstance = nullptr;
		}
	}
}


