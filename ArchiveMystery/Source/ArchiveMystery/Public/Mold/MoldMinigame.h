// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "BrushSelectionWidget.h"
#include "MoldMinigame.generated.h"


UCLASS()
class ARCHIVEMYSTERY_API AMoldMinigame : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoldMinigame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnMoldDestroyed();

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void SwitchToPaper2();

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void EnableBrushing(); // Function to allow brushing after the tutorial

	bool bCanBrush; // Tracks if the player can brush mold

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void ShowTutorial();

private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* MoldCamera;

	// Track which paper is active
	int32 CurrentPaperIndex;

	// References to the papers
	UPROPERTY(EditAnywhere, Category = "Papers")
	AActor* Paper1;

	UPROPERTY(EditAnywhere, Category = "Papers")
	AActor* Paper2;

	// Track number of mold pieces
	int32 MoldCount;

	// Spawn mold for the current paper
	void SpawnMoldForCurrentPaper();

	// Check if the minigame is won
	void CheckWinCondition();

	//// Widget
	//Exit
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ExitWidgetClass;

	UPROPERTY()
	UUserWidget* ExitWidget;

	void ShowExitUI();


	// Next paper

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ArrowWidgetClass;

	UPROPERTY()
	UUserWidget* ArrowWidget;

	void ShowArrowUI();


	// Tutorial

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
};
