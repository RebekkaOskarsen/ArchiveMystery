// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldMinigame.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/Mold.h"
#include "Mold/BrushSelectionWidget.h"

#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"

// Sets default values
AMoldMinigame::AMoldMinigame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Static Camera
	MoldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MoldCamera"));
	RootComponent = MoldCamera;

	CurrentPaperIndex = 1; // Start with Paper 1
	MoldCount = 0;

	bCanBrush = false;
	BrushSelectionWidget = nullptr;
}

// Called when the game starts or when spawned
void AMoldMinigame::BeginPlay()
{
	Super::BeginPlay();

	// Set the player's camera to this one
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->SetViewTarget(this);
		//PC->bShowMouseCursor = false;
	}

	// Count all mold instances at the start
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold)
		{
			Mold->SetMoldMinigame(this);
		}
	}
	MoldCount = MoldActors.Num();

	UE_LOG(LogTemp, Warning, TEXT("MoldMinigame: Total mold count = %d"), MoldCount);

	// Find all actors tagged as "Paper"
	TArray<AActor*> PaperActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Paper"), PaperActors);

	for (AActor* PaperActor : PaperActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found Paper Actor: %s"), *PaperActor->GetName());

		if (PaperActor->ActorHasTag(TEXT("Paper1")))
		{
			Paper1 = PaperActor;
			UE_LOG(LogTemp, Warning, TEXT("Paper1 found: %s"), *Paper1->GetName());
		}
		else if (PaperActor->ActorHasTag(TEXT("Paper2")))
		{
			Paper2 = PaperActor;
			UE_LOG(LogTemp, Warning, TEXT("Paper2 found: %s"), *Paper2->GetName());
		}
	}

	if (Paper1)
	{
		Paper1->SetActorHiddenInGame(false);
	}

	if (Paper2)
	{
		Paper2->SetActorHiddenInGame(true);
	}

	SpawnMoldForCurrentPaper();
	UE_LOG(LogTemp, Warning, TEXT("Spawned mold for Paper %d. Total: %d"), CurrentPaperIndex, MoldCount);

	HideBrushUI();

	ShowTutorial();


}

// Called every frame
void AMoldMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMoldMinigame::OnMoldDestroyed()
{
	if (MoldCount > 0)
	{
		MoldCount--;
		UE_LOG(LogTemp, Warning, TEXT("Mold destroyed. Current MoldCount: %d"), MoldCount);
		CheckWinCondition();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MoldCount already zero or negative! Ignoring extra OnMoldDestroyed()."));
	}
}

void AMoldMinigame::SwitchToPaper2()
{
	UE_LOG(LogTemp, Warning, TEXT("Switching to Paper 2!"));

	if (Paper1)
	{
		Paper1->SetActorHiddenInGame(true);
		Paper1->SetActorEnableCollision(false);
		UE_LOG(LogTemp, Warning, TEXT("Paper 1 is now HIDDEN and COLLISION DISABLED."));
	}

	if (Paper2)
	{
		Paper2->SetActorHiddenInGame(false);
		Paper2->SetActorEnableCollision(true);
		UE_LOG(LogTemp, Warning, TEXT("Paper 2 is now VISIBLE and COLLISION ENABLED."));
	}

	CurrentPaperIndex = 2;
	SpawnMoldForCurrentPaper();
}

void AMoldMinigame::EnableBrushing()
{
	bCanBrush = true; // Player can now brush mold
	ShowBrushUI();
}

void AMoldMinigame::SpawnMoldForCurrentPaper()
{
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);

	MoldCount = 0;

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold)
		{
			if (Mold->PaperIndex == CurrentPaperIndex)
			{
				Mold->SetActorHiddenInGame(false);
				Mold->SetActorEnableCollision(true);
				Mold->SetMoldMinigame(this);
				MoldCount++;

				UE_LOG(LogTemp, Warning, TEXT("Registering mold for Paper %d: %s"), CurrentPaperIndex, *Mold->GetName());
			}
			else
			{
				// Hide and disable mold from the other paper
				Mold->SetActorHiddenInGame(true);
				Mold->SetActorEnableCollision(false);
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Spawned mold for Paper %d. Total: %d"), CurrentPaperIndex, MoldCount);

}

void AMoldMinigame::CheckWinCondition()
{
	UE_LOG(LogTemp, Warning, TEXT("CheckWinCondition called. Remaining mold: %d"), MoldCount);

	if (MoldCount <= 0)
	{
		if (CurrentPaperIndex == 1)
		{
			// Show arrow UI instead of switching immediately
			ShowArrowUI();
		}
		else
		{
			ShowExitUI();
		}
	}
}

void AMoldMinigame::ShowExitUI()
{
	if (ExitWidgetClass)
	{
		ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
		if (ExitWidget)
		{
			ExitWidget->AddToViewport();
		}
	}


}

void AMoldMinigame::ShowArrowUI()
{
	if (!ArrowWidgetClass)
	{
		return;
	}

	ArrowWidget = CreateWidget<UUserWidget>(GetWorld(), ArrowWidgetClass);
	if (ArrowWidget)
	{
		ArrowWidget->AddToViewport();
	}
}

void AMoldMinigame::ShowTutorial()
{
	if (!MoldTutorialWidgetClass)
	{
		return;
	}

	MoldTutorialWidget = CreateWidget<UUserWidget>(GetWorld(), MoldTutorialWidgetClass);
	if (MoldTutorialWidget)
	{
		MoldTutorialWidget->AddToViewport();
	}
}

void AMoldMinigame::ShowBrushUI()
{
	if (!BrushSelectionWidget && BrushSelectionWidgetClass)
	{
		BrushSelectionWidget = CreateWidget<UUserWidget>(GetWorld(), BrushSelectionWidgetClass);
		if (BrushSelectionWidget)
		{
			BrushSelectionWidget->AddToViewport();
		}
	}
}

void AMoldMinigame::HideBrushUI()
{
	if (BrushSelectionWidget)
	{
		BrushSelectionWidget->RemoveFromParent();
		BrushSelectionWidget = nullptr;
	}
}

