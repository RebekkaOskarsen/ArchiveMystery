// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldMinigame.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/Mold.h"
#include "Mold/BrushSelectionWidget.h"

#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"

AMoldMinigame::AMoldMinigame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MoldCamera"));
	RootComponent = MoldCamera;

	CurrentPaperIndex = 1; //Starting with paper 1
	MoldCount = 0;

	bCanBrush = false;
	BrushSelectionWidget = nullptr;
}

void AMoldMinigame::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->SetViewTarget(this);
	}

	//To count all the mold at the start
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

	TArray<AActor*> PaperActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Paper"), PaperActors);

	for (AActor* PaperActor : PaperActors)
	{
		if (PaperActor->ActorHasTag(TEXT("Paper1")))
		{
			Paper1 = PaperActor;
		}
		else if (PaperActor->ActorHasTag(TEXT("Paper2")))
		{
			Paper2 = PaperActor;
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

	HideBrushUI();

	ShowTutorial();
}

void AMoldMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMoldMinigame::OnMoldDestroyed()
{
	if (MoldCount > 0)
	{
		MoldCount--;
		CheckWinCondition();
	}
}

void AMoldMinigame::SwitchToPaper2()
{
	if (Paper1)
	{
		Paper1->SetActorHiddenInGame(true);
		Paper1->SetActorEnableCollision(false);
	}

	if (Paper2)
	{
		Paper2->SetActorHiddenInGame(false);
		Paper2->SetActorEnableCollision(true);
	}

	CurrentPaperIndex = 2;
	SpawnMoldForCurrentPaper();
}

void AMoldMinigame::EnableBrushing()
{
	bCanBrush = true; //Player can now brush mold
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
			}
			else
			{
				//Hide and disable mold from the other paper
				Mold->SetActorHiddenInGame(true);
				Mold->SetActorEnableCollision(false);
			}
		}
	}
}

void AMoldMinigame::CheckWinCondition()
{
	if (MoldCount <= 0)
	{
		if (CurrentPaperIndex == 1)
		{
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

