// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EngineUtils.h"
#include "Containers/Map.h"  
#include "Containers/Array.h" 
#include "Engine/StaticMeshActor.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "NiagaraFunctionLibrary.h"
#include "Minigame.generated.h"

class UCameraComponent;

UCLASS()
class ARCHIVEMYSTERY_API AMinigame : public APawn
{
	GENERATED_BODY()

public:
	AMinigame();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnAllPiecesSnapped();

	//------------------------CAMERA---------------------------------------------------//

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* TopDownCamera;

	//---------------------------INPUT-----------------------------------------------//

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* IMC_DragAndDrop;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Drag;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Release;

	//-----------------------DRAGGING THE PAPER STRIPS----------------------------//

	UPROPERTY()
	bool bIsDragging;

	UPROPERTY()
	UStaticMeshComponent* SelectedMesh;

	UPROPERTY()
	FVector DragOffset;

	void StartDragging();
	void StopDragging();

	//--------------------------FADE IN OF THE PAPER SHEET---------------------------------------------------//

	UPROPERTY(EditAnywhere, Category = "Fade")
	float FadeDuration = 2.0f;

	UPROPERTY(VisibleAnywhere, Category = "Fade")
	float CurrentFadeTime = 0.0f;

	UPROPERTY(VisibleAnywhere, Category = "Fade")
	bool bIsFadingIn = false;

	//--------------------------------------UI & EFFECTS---------------------------------------------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ExitWidgetClass;

	UUserWidget* ExitWidgetInstance;


	UFUNCTION(BlueprintCallable, Category = "Game")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ShowGameMenu();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> TutorialWidgetClass;

	UUserWidget* TutorialWidgetInstance;

	UButton* StartButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> GameMenuWidgetClass;

	UUserWidget* GameMenuWidgetInstance;

	UButton* BackToTutorialButton;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ShowTutorial();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* SnapSound;

	void PlaySnapSound();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* SparkNiagaraEffect;

	void PlaySparkEffect(FVector Location);

	// Difficulty widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> DifficultyWidgetClass;

	UUserWidget* DifficultyWidgetInstance;

	FString SelectedDifficulty; // For evt. logikk senere

	void ShowDifficultyMenu();

	UFUNCTION()
	void OnEasySelected();

	UFUNCTION()
	void OnMediumSelected();

	UFUNCTION()
	void OnHardSelected();

	UFUNCTION()
	void OnTutorialContinue();

	void HideAllPaperStrips();

	void ActivatePaperSetForDifficulty();

	void SetupSnappingRules();

	int32 ExpectedPieceCount = 16; // default for medium

	TArray<FString> ActivePaperTags;

	FTimerHandle HardModeTimerHandle;
	float HardModeTimeLimit = 180.0f; // 3 minutter

	void OnHardModeTimeUp();

	void RestartHardMode();

	void EndPlay(const EEndPlayReason::Type EndPlayReason);

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> TimerWidgetClass;

	UUserWidget* TimerWidgetInstance = nullptr;

	FTimerHandle CountdownUpdateTimer;
	int32 RemainingSeconds = 180; // 3 minutter

	void StartHardModeTimerUI();

	void UpdateTimerDisplay();

	//Ingame Tutorial
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> IngameTutorialWidgetClass;

	UUserWidget* IngameTutorialWidgetInstance = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ShowIngameTutorial();

	UFUNCTION()
	void OnIngameTutorialClose();

	bool bHardCountdownPaused = false;

	float HardModeTimeRemaining = 0.f;
	float CountdownSecondsRemaining = 0.f;

	//Try again Widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> TryAgainWidgetClass;

	UUserWidget* TryAgainWidgetInstance = nullptr;

	UFUNCTION()
	void OnTryAgainClicked();

protected:

	virtual void BeginPlay() override;

	//-----------------------SNAPPING------------------------------------------------------//

	TMap<FString, TArray<FString>> SnappingRules;

	TSet<FString> SnappedPieces;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	float SnapThreshold = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	AActor* PaperSheet;

	TMap<FString, FString> ParentMap;

	TSet<FString> LockedPaperstrips;

	TMap<FString, TArray<UStaticMeshComponent*>> GroupMap;

	FString FindParent(const FString& Node);

	void MergeGroups(const FString& NodeA, const FString& NodeB);

	void ValidateGroups();

	//-----------------------Pause Menu------------------------//
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	/** Instance of the pause menu */
	UUserWidget* PauseMenuWidget;

	/** Are we currently paused? */
	bool bGamePaused = false;

	/** toggles pause state & menu */
	void TogglePauseMenu();

	// callbacks from the pause menu
	UFUNCTION()
	void OnResumeClicked();

	UFUNCTION()
	void OnExitClicked();

};
