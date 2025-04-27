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
		if (PlayerController && PlayerController->WasInputKeyJustPressed(EKeys::E))
		{
			if (ScannerWidgetClass && !ScannerWidgetInstance)
			{
				ScannerWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), ScannerWidgetClass);
				if (ScannerWidgetInstance)
				{
					ScannerWidgetInstance->AddToViewport();

					// Pause input and show cursor
					PlayerController->SetInputMode(FInputModeUIOnly());
					PlayerController->bShowMouseCursor = true;

					UE_LOG(LogTemp, Warning, TEXT("Scanner Widget Displayed!"));
				}
			}
		}
	}
}

void ATriggerScanner::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;
	}
}

void ATriggerScanner::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = false;
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

