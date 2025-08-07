// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "BrushSelectionWidget.h"
#include "MoldMinigame.generated.h"

UENUM(BlueprintType)
enum class EMoldDifficulty : uint8
{
	Easy	UMETA(DisplayName = "Easy"),
	Medium	UMETA(DisplayName = "Medium"),
	Hard	UMETA(DisplayName = "Hard")
};

UCLASS()
class ARCHIVEMYSTERY_API AMoldMinigame : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoldMinigame();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	EMoldDifficulty CurrentDifficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float HardModeTimeLimit = 210.0f; // seconds

	FTimerHandle HardModeTimerHandle;

	UFUNCTION()
	void OnHardModeTimeExpired();

public:	
	virtual void Tick(float DeltaTime) override;

	void OnMoldDestroyed();

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void SwitchToPaper2();

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void EnableBrushing(); //Allow brushing after the tutorial

	bool bCanBrush;

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void ShowTutorial();

	UFUNCTION(BlueprintCallable)
	void StartGame(EMoldDifficulty Difficulty);

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> CountdownWidgetClass;

	UPROPERTY()
	UUserWidget* CountdownWidget;

	UPROPERTY()
	int32 CountdownTime;

	FTimerHandle CountdownTickHandle;

	void UpdateCountdownTick();
	void OnCountdownFinished();

	//Medium
	void IncreaseMoldForMedium();

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> TryAgainWidgetClass;

	UPROPERTY()
	UUserWidget* TryAgainWidget;

	UFUNCTION()
	void OnTryAgainClicked();

	UFUNCTION()
	void ResetMold();

private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* MoldCamera;

	int32 CurrentPaperIndex;

//----------------References to the Paper 1 and Paper 2---------------------//
	UPROPERTY(EditAnywhere, Category = "Papers")
	AActor* Paper1;

	UPROPERTY(EditAnywhere, Category = "Papers")
	AActor* Paper2;


	//Mold pieces
	int32 MoldCount;

	//Spawn mold for the current paper
	void SpawnMoldForCurrentPaper();

	void CheckWinCondition();

	//-----------------Widgets-----------------//
	//Exit
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ExitWidgetClass;

	UPROPERTY()
	UUserWidget* ExitWidget;

	void ShowExitUI();


	//Next paper
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ArrowWidgetClass;

	UPROPERTY()
	UUserWidget* ArrowWidget;

	void ShowArrowUI();


	//Tutorial
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> MoldTutorialWidgetClass;

	UPROPERTY()
	UUserWidget* MoldTutorialWidget;


	// Brush Selection
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> BrushSelectionWidgetClass;

	UPROPERTY()
	UUserWidget* BrushSelectionWidget;

	void ShowBrushUI();
	void HideBrushUI();

	// Pause Menu
	UPROPERTY(EditAnywhere, Category = "Pause")
	TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	UPROPERTY()
	UUserWidget* PauseMenuWidget = nullptr;

	bool bIsPaused = false;

	void TogglePause();

	UFUNCTION()
	void OnResumeClicked();

	UFUNCTION()
	void OnExitClicked();

	// Ingame Tutorial
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> IngameTutorialWidgetClass;

	UUserWidget* IngameTutorialWidget;

	UFUNCTION(BlueprintCallable)
	void ShowIngameTutorial();

	UFUNCTION(BlueprintCallable)
	void HideIngameTutorial();
};
