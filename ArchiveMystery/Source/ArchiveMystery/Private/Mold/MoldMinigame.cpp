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
	CutsceneWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Sequences/Movie_Cutscenes/Cutscene_2_Mold/W_Cutscene_2.W_Cutscene_2_C"));
	WhiteoutWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/Small_Quest_System/W_Whiteout.W_Whiteout_C"));
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

		// Check win only when MoldCount reaches zero
		if (MoldCount <= 0)
		{
			

			CheckWinCondition();
		}
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
		// UI flow
		if (CurrentPaperIndex == 1)
		{
			ShowArrowUI();
		}
		else
		{
			ShowExitUI();
		}

		// Easy unlock
		if (CurrentDifficulty == EMoldDifficulty::Easy)
		{
			if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
			{
				GameInstance->bHasCompletedMoldEasy = true;
				GameInstance->SaveQuestLogData();
			}
		}

		// Hard score handling only when finishing paper 2
		if (CurrentDifficulty == EMoldDifficulty::Hard && CurrentPaperIndex == 2)
		{
			GetWorldTimerManager().ClearTimer(CountdownTickHandle);
			if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
			{
				GameInstance->AddMoldScore(CountdownTime);
				GameInstance->LastMoldScore = CountdownTime;
			}
		}

		// ? Mark completion ONLY when truly finished
		if (AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0)))
		{
			Archivist->bHasFinishedMoldMinigame = true;
		}

		if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			GameInstance->bMoldGameComplete = true;
			GameInstance->SaveQuestLogData();
		}
	}
}

void AMoldMinigame::ShowExitUI()
{
	if (!ExitWidgetClass) return;

	ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
	if (ExitWidget)
	{
		ExitWidget->AddToViewport();

		if (UButton* ExitBtn = Cast<UButton>(ExitWidget->GetWidgetFromName(TEXT("ExitButton"))))
		{
			ExitBtn->OnClicked.AddUniqueDynamic(this, &AMoldMinigame::BeginCutscene);
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

	if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		GI->LastMoldDifficulty = Difficulty;
	}

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
			int32 Minutes = CountdownTime / 60;
			int32 Seconds = CountdownTime % 60;

			FString TimeString = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
			CountdownText->SetText(FText::FromString(TimeString));
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

	bCanBrush = false;

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

	// Reset to paper 1
	CurrentPaperIndex = 1;

	if (Paper1) {
		Paper1->SetActorHiddenInGame(false);
		Paper1->SetActorEnableCollision(true);
	}
	if (Paper2) {
		Paper2->SetActorHiddenInGame(true);
		Paper2->SetActorEnableCollision(false);
	}

	// Hide all mold
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);
	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold)
		{
			Mold->ResetMold();
			Mold->SetActorHiddenInGame(true);
			Mold->SetActorEnableCollision(false);
		}
	}

	// Reset UI and allow brushing
	ShowTutorial();
	EnableBrushing();

	// Now respawn mold for paper 1
	SpawnMoldForCurrentPaper();
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
			// Always reset the mold
			Mold->ResetMold();
			Mold->SetMoldMinigame(this);

			bool bIsCorrectPaper = Mold->PaperIndex == 1; // reset for paper 1
			bool bIsMediumOnly = Mold->ActorHasTag("MediumOnly");

			bool bShouldShow =
				bIsCorrectPaper &&
				(!bIsMediumOnly || (CurrentDifficulty != EMoldDifficulty::Easy));

			if (bShouldShow)
			{
				Mold->SetActorHiddenInGame(false);
				Mold->SetActorEnableCollision(true);
				MoldCount++;
			}
			else
			{
				Mold->SetActorHiddenInGame(true);
				Mold->SetActorEnableCollision(false);
			}
		}
	}

	if (Paper1)
	{
		Paper1->SetActorHiddenInGame(false);
		Paper1->SetActorEnableCollision(true);
	}
	if (Paper2)
	{
		Paper2->SetActorHiddenInGame(true);
		Paper2->SetActorEnableCollision(false);
	}

	// Reset paper index
	CurrentPaperIndex = 1;
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
	if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		// Optional: ensure we do NOT mark completion on manual exit
		GI->bMoldGameComplete = false;

		// If you mirror this on the character too:
		if (AArchivist* Arch = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0)))
		{
			Arch->bHasFinishedMoldMinigame = false;
		}

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

			if (GetWorldTimerManager().IsTimerActive(CountdownTickHandle))
			{
				GetWorldTimerManager().PauseTimer(CountdownTickHandle);
			}
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

	if (GetWorldTimerManager().IsTimerPaused(CountdownTickHandle))
	{
		GetWorldTimerManager().UnPauseTimer(CountdownTickHandle);
	}
}

void AMoldMinigame::SetUIOnlyFocus(UUserWidget* Widget)
{
	if (!Widget) return;
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->bShowMouseCursor = true;
		FInputModeUIOnly Mode;
		Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		Mode.SetWidgetToFocus(Widget->TakeWidget());
		PC->SetInputMode(Mode);
	}
}

void AMoldMinigame::BeginCutscene()
{

	if (!GetWorld() || !CutsceneWidgetClass)
	{
		UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
		return;
	}

	if (ExitWidget) { ExitWidget->RemoveFromParent(); ExitWidget = nullptr; }

	if (!IsValid(CutsceneWidgetInstance))
	{
		CutsceneWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), CutsceneWidgetClass);
		if (!CutsceneWidgetInstance)
		{
			UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
			return;
		}
	}
	if (!CutsceneWidgetInstance->IsInViewport())
		CutsceneWidgetInstance->AddToViewport();

	SetUIOnlyFocus(CutsceneWidgetInstance);

	if (UButton* Skip = Cast<UButton>(CutsceneWidgetInstance->GetWidgetFromName(TEXT("SkipButton"))))
	{
		Skip->OnClicked.AddUniqueDynamic(this, &AMoldMinigame::SkipCutscene);
	}

	bCutsceneActive = true;

	if (WhiteoutLength < CutsceneLength)
	{
		GetWorldTimerManager().SetTimer(
			WhiteoutEarlyTimerHandle, this, &AMoldMinigame::StartWhiteoutBeforeEnd,
			CutsceneLength - 1.0f, false
		);
	}

	GetWorldTimerManager().SetTimer(
		CutsceneTimerHandle, this, &AMoldMinigame::OnCutsceneFinished, CutsceneLength, false);
}

void AMoldMinigame::OnCutsceneFinished()
{
	if (!bCutsceneActive) return;
	bCutsceneActive = false;

	if (IsValid(CutsceneWidgetInstance))
	{
		CutsceneWidgetInstance->RemoveFromParent();
		CutsceneWidgetInstance = nullptr;
	}

	GetWorldTimerManager().SetTimer(
		WhiteoutTimerHandle, this, &AMoldMinigame::OnWhiteoutFinished, WhiteoutLength, false);
}



void AMoldMinigame::OnWhiteoutFinished()
{

	WhiteoutWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WhiteoutWidgetClass);
	if (WhiteoutWidgetInstance)
	{
		WhiteoutWidgetInstance->AddToViewport(/*ZOrder=*/10000);

	}

	UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
}

void AMoldMinigame::SkipCutscene()
{
	GetWorldTimerManager().ClearTimer(CutsceneTimerHandle);
	GetWorldTimerManager().ClearTimer(WhiteoutTimerHandle);

	if (IsValid(CutsceneWidgetInstance)) { CutsceneWidgetInstance->RemoveFromParent(); CutsceneWidgetInstance = nullptr; }
	if (IsValid(WhiteoutWidgetInstance)) { WhiteoutWidgetInstance->RemoveFromParent(); WhiteoutWidgetInstance = nullptr; }

	bCutsceneActive = false;

	UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
}

void AMoldMinigame::StartWhiteoutBeforeEnd()
{
	if (!WhiteoutWidgetClass) return;

	WhiteoutWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WhiteoutWidgetClass);
	if (WhiteoutWidgetInstance)
	{
		WhiteoutWidgetInstance->AddToViewport(10000);
	}
}