// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldMinigame.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

#include "Mold/Mold.h"
#include "Mold/BrushSelectionWidget.h"

#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

#include "Character/ArchiveGameInstance.h"
#include "Character/Archivist.h"

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

		EnableInput(PC);
		InputComponent->BindKey(EKeys::P, IE_Pressed, this, &AMoldMinigame::TogglePause);
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

	//SpawnMoldForCurrentPaper();

	HideBrushUI();

	ShowTutorial();
}

void AMoldMinigame::OnHardModeTimeExpired()
{

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
			bool bIsCorrectPaper = (Mold->PaperIndex == CurrentPaperIndex);
			bool bIsMediumOnly = Mold->ActorHasTag("MediumOnly");

			bool bShouldShow = bIsCorrectPaper && ((CurrentDifficulty == EMoldDifficulty::Medium && bIsMediumOnly) || (!bIsMediumOnly));

			if (bShouldShow)
			{
				Mold->SetActorHiddenInGame(false);
				Mold->SetActorEnableCollision(true);
				Mold->SetMoldMinigame(this);
				MoldCount++;
			}
			else
			{
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
		if (CurrentDifficulty == EMoldDifficulty::Easy)
		{
			if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
			{
				GameInstance->bHasCompletedMoldEasy = true;
				GameInstance->SaveQuestLogData();
			}
		}
	}

	AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Archivist)
	{
		Archivist->bHasFinishedMoldMinigame = true;
	}

	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (GameInstance)
	{
		GameInstance->bMoldGameComplete = true;
		GameInstance->SaveQuestLogData();
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

void AMoldMinigame::StartGame(EMoldDifficulty Difficulty)
{
	CurrentDifficulty = Difficulty;

	if (CurrentDifficulty == EMoldDifficulty::Medium)
	{
		IncreaseMoldForMedium();
	}

	SpawnMoldForCurrentPaper();

	if (CurrentDifficulty == EMoldDifficulty::Hard)
	{
		CountdownTime = HardModeTimeLimit;

		if (CountdownWidgetClass)
		{
			CountdownWidget = CreateWidget<UUserWidget>(GetWorld(), CountdownWidgetClass);
			if (CountdownWidget)
			{
				CountdownWidget->AddToViewport();
			}
		}

		GetWorldTimerManager().SetTimer(CountdownTickHandle, this, &AMoldMinigame::UpdateCountdownTick, 1.0f, true);
	}

	EnableBrushing();
}

void AMoldMinigame::UpdateCountdownTick()
{
	CountdownTime--;

	if (CountdownWidget)
	{
		if (UTextBlock* CountdownText = Cast<UTextBlock>(CountdownWidget->GetWidgetFromName(TEXT("CountdownText"))))
		{
			CountdownText->SetText(FText::FromString(FString::FromInt(CountdownTime)));
		}
	}

	if (CountdownTime <= 0)
	{
		OnCountdownFinished();
	}
}

void AMoldMinigame::OnCountdownFinished()
{
	GetWorldTimerManager().ClearTimer(CountdownTickHandle);

	if (CountdownWidget)
	{
		CountdownWidget->RemoveFromParent();
		CountdownWidget = nullptr;
	}

	if (TryAgainWidgetClass)
	{
		TryAgainWidget = CreateWidget<UUserWidget>(GetWorld(), TryAgainWidgetClass);
		if (TryAgainWidget)
		{
			TryAgainWidget->AddToViewport();

			if (UButton* TryAgainBtn = Cast<UButton>(TryAgainWidget->GetWidgetFromName(TEXT("TryAgainButton"))))
			{
				TryAgainBtn->OnClicked.AddDynamic(this, &AMoldMinigame::OnTryAgainClicked);
			}
		}
	}
}

void AMoldMinigame::IncreaseMoldForMedium()
{
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("MediumOnly"), MoldActors);

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold && Mold->PaperIndex == CurrentPaperIndex)
		{
			Mold->SetActorHiddenInGame(false);
			Mold->SetActorEnableCollision(true);
			Mold->SetMoldMinigame(this);
			MoldCount++;
		}
	}
}

void AMoldMinigame::OnTryAgainClicked()
{
	if (TryAgainWidget)
	{
		TryAgainWidget->RemoveFromParent();
		TryAgainWidget = nullptr;
	}

	ResetMold();

	ShowTutorial();
}

void AMoldMinigame::ResetMold()
{
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);

	MoldCount = 0;

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold)
		{
			bool bIsCorrectPaper = Mold->PaperIndex == CurrentPaperIndex;
			bool bIsMediumOnly = Mold->ActorHasTag("MediumOnly");

			bool bShouldShow = bIsCorrectPaper && (
				!bIsMediumOnly ||
				(CurrentDifficulty == EMoldDifficulty::Medium || CurrentDifficulty == EMoldDifficulty::Hard)
				);

			if (bShouldShow)
			{
				Mold->ResetMold();
				Mold->SetMoldMinigame(this);
				MoldCount++;
			}
			else
			{
				Mold->SetActorHiddenInGame(true);
				Mold->SetActorEnableCollision(false);
			}
		}
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

void AMoldMinigame::TogglePause()
{
	bIsPaused = !bIsPaused;

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;

	if (bIsPaused)
	{
		PC->SetPause(true);

		if (PauseMenuWidgetClass && !PauseMenuWidget)
		{
			PauseMenuWidget = CreateWidget<UUserWidget>(PC, PauseMenuWidgetClass);
			if (PauseMenuWidget)
			{
				PauseMenuWidget->AddToViewport();

				if (UButton* ResumeBtn = Cast<UButton>(
					PauseMenuWidget->GetWidgetFromName(TEXT("ResumeButton"))))
				{
					ResumeBtn->OnClicked.AddDynamic(this, &AMoldMinigame::OnResumeClicked);
				}
				if (UButton* ExitBtn = Cast<UButton>(
					PauseMenuWidget->GetWidgetFromName(TEXT("ExitGameButton"))))
				{
					ExitBtn->OnClicked.AddDynamic(this, &AMoldMinigame::OnExitClicked);
				}
			}
		}

		FInputModeUIOnly UI;
		UI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(UI);
		PC->bShowMouseCursor = true;
	}
	else
	{
		PC->SetPause(false);

		if (PauseMenuWidget)
		{
			PauseMenuWidget->RemoveFromParent();
			PauseMenuWidget = nullptr;
		}

		PC->bShowMouseCursor = true;

		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(InputMode);
	}
}

void AMoldMinigame::OnResumeClicked()
{
	TogglePause();
}

void AMoldMinigame::OnExitClicked()
{
	if (UArchiveGameInstance* GI =
		Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		GI->SaveQuestLogData();
	}

	UGameplayStatics::OpenLevel(this, FName("Archive-Mystery"));
}

void AMoldMinigame::ShowIngameTutorial()
{
	if (IngameTutorialWidgetClass)
	{
		if (IngameTutorialWidget)
		{
			IngameTutorialWidget->RemoveFromParent();
			IngameTutorialWidget = nullptr;
		}

		IngameTutorialWidget = CreateWidget<UUserWidget>(GetWorld(), IngameTutorialWidgetClass);
		if (IngameTutorialWidget)
		{
			IngameTutorialWidget->AddToViewport();
		}
	}
}

void AMoldMinigame::HideIngameTutorial()
{
	if (IngameTutorialWidget)
	{
		IngameTutorialWidget->RemoveFromParent();
		IngameTutorialWidget = nullptr;
	}
}

