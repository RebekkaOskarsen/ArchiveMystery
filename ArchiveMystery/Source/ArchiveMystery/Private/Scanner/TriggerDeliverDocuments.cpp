// Fill out your copyright notice in the Description page of Project Settings.


#include "Scanner/TriggerDeliverDocuments.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Character/Archivist.h"


ATriggerDeliverDocuments::ATriggerDeliverDocuments()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerDeliverDocuments::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerDeliverDocuments::OnOverlapEnd);

	bPlayerIsInside = false;
	DeliverDocumentsWidgetInstance = nullptr;
}

void ATriggerDeliverDocuments::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}
}

void ATriggerDeliverDocuments::ShowDeliverDocumentsWidget()
{
	if (!DeliverDocumentsWidgetInstance && DeliverDocumentsWidgetClass)
	{
		DeliverDocumentsWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), DeliverDocumentsWidgetClass);
		if (DeliverDocumentsWidgetInstance)
		{
			DeliverDocumentsWidgetInstance->AddToViewport();

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				PC->SetInputMode(FInputModeUIOnly());
				PC->bShowMouseCursor = true;
			}
		}
	}
}

void ATriggerDeliverDocuments::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckForInteraction();
}

void ATriggerDeliverDocuments::CheckForInteraction()
{
	if (bPlayerIsInside)
	{
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));

		if (PlayerController && Archivist && PlayerController->WasInputKeyJustPressed(EKeys::E))
		{
			if (Archivist->bHasPlacedBox &&
				Archivist->bHasFinishedShreddedPaperMinigame &&
				Archivist->bHasFinishedMoldMinigame &&
				Archivist->bHasFoundDocument1 &&
				Archivist->bHasFoundDocument2 &&
				Archivist->bHasScannedDocuments)
			{
				ShowDeliverDocumentsWidget();
			}
		}
	}
}

void ATriggerDeliverDocuments::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;

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

void ATriggerDeliverDocuments::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
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