// Fill out your copyright notice in the Description page of Project Settings.


#include "Scanner/TriggerScanner.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Character/Archivist.h"

ATriggerScanner::ATriggerScanner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerScanner::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerScanner::OnOverlapEnd);

	bPlayerIsInside = false;
	ScannerWidgetInstance = nullptr;
}

// Called when the game starts or when spawned
void ATriggerScanner::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}
}

void ATriggerScanner::ShowScannerWidget()
{
	if (!ScannerWidgetInstance && ScannerWidgetClass)
	{
		ScannerWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), ScannerWidgetClass);
		if (ScannerWidgetInstance)
		{
			ScannerWidgetInstance->AddToViewport();

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				PC->SetInputMode(FInputModeUIOnly());
				PC->bShowMouseCursor = true;
			}
		}
	}
}

void ATriggerScanner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckForInteraction();
}

void ATriggerScanner::CheckForInteraction()
{
	if (!bPlayerIsInside) return;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));
	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());

	if (!PlayerController || !Archivist || !GI) return;

	if (PlayerController->WasInputKeyJustPressed(EKeys::E))
	{
		if (GI->bReadyToScanFolderDocuments)
		{
			ShowSecondScannerWidget();
			return; 
		}

		if (Archivist->bHasPlacedBox &&
			Archivist->bHasFinishedShreddedPaperMinigame &&
			Archivist->bHasFinishedMoldMinigame &&
			Archivist->bHasFoundDocument1 &&
			Archivist->bHasFoundDocument2)
		{
			ShowScannerWidget();
		}
	}
}

void ATriggerScanner::ShowSecondScannerWidget()
{
	if (!SecondScannerWidgetInstance && SecondScannerWidgetClass)
	{
		SecondScannerWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), SecondScannerWidgetClass);
		if (SecondScannerWidgetInstance)
		{
			SecondScannerWidgetInstance->AddToViewport();

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				PC->SetInputMode(FInputModeGameOnly());
				PC->bShowMouseCursor = false; 
			}
		}
	}
}


void ATriggerScanner::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;

		if (PromptWidgetClass && !PromptWidgetInstance)
		{
			PromptWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PromptWidgetClass);
			if (PromptWidgetInstance)
			{
				PromptWidgetInstance->AddToViewport();
			}
		}
	}
}

void ATriggerScanner::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = false;

		if (PromptWidgetInstance)
		{
			PromptWidgetInstance->RemoveFromParent();
			PromptWidgetInstance = nullptr;
		}
	}
}

void ATriggerScanner::ScanDocuments()
{
	if (ScannerWidgetInstance)
	{
		ScannerWidgetInstance->RemoveFromParent();
		ScannerWidgetInstance = nullptr;

		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			PC->SetInputMode(FInputModeGameOnly());
			PC->bShowMouseCursor = false;
		}
	}
}

