// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EngineUtils.h"
#include "Containers/Map.h"  // For TMap
#include "Containers/Array.h" // For TArray
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

protected:
	virtual void BeginPlay() override;

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
	void LogParentMap();



public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnAllPiecesSnapped();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* TopDownCamera;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* IMC_DragAndDrop;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Drag;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Release;

	UPROPERTY()
	bool bIsDragging;

	UPROPERTY()
	UStaticMeshComponent* SelectedMesh;

	UPROPERTY()
	FVector DragOffset;

	void StartDragging();
	void StopDragging();

	UPROPERTY(EditAnywhere, Category = "Fade")
	float FadeDuration = 2.0f; 

	UPROPERTY(VisibleAnywhere, Category = "Fade")
	float CurrentFadeTime = 0.0f; 
	UPROPERTY(VisibleAnywhere, Category = "Fade")
	bool bIsFadingIn = false;

	//--------------------------------------UI---------------------------------------------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ExitWidgetClass;

	UUserWidget* ExitWidgetInstance;


	UFUNCTION(BlueprintCallable, Category = "Game")
	void StartGame();

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

};
