// Fill out your copyright notice in the Description page of Project Settings.


#include "Scanner/TriggerScanner.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Character/Archivist.h"

// Sets default values
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
			UE_LOG(LogTemp, Warning, TEXT("Scanner Widget displayed!"));

			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				PC->SetInputMode(FInputModeUIOnly());
				PC->bShowMouseCursor = true;
			}
		}
	}
}

// Called every frame
void ATriggerScanner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckForInteraction();
}

void ATriggerScanner::CheckForInteraction()
{
	if (bPlayerIsInside)
	{
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));

		if (PlayerController && Archivist && PlayerController->WasInputKeyJustPressed(EKeys::E))
		{
			// Only allow interaction if ALL 5 conditions are met
			if (Archivist->bHasPlacedBox &&
				Archivist->bHasFinishedShreddedPaperMinigame &&
				Archivist->bHasFinishedMoldMinigame &&
				Archivist->bHasFoundDocument1 &&
				Archivist->bHasFoundDocument2)
			{
				ShowScannerWidget(); // Your function to show scanner UI
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("You must complete all objectives before using the scanner!"));
				// (Optional) Show a 'You can't scan yet' widget/message
			}
		}
	}
}

void ATriggerScanner::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;

		// Show "Press E" Widget
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

		// Hide "Press E" Widget
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

		UE_LOG(LogTemp, Warning, TEXT("Documents Scanned! Scanner widget closed."));
	}
}

