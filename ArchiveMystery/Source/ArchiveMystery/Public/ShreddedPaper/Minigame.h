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
#include "Minigame.generated.h"

class UCameraComponent;

UCLASS()
class ARCHIVEMYSTERY_API AMinigame : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMinigame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TMap<FString, TArray<FString>> SnappingRules;

	TSet<FString> SnappedPieces;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	float SnapThreshold = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	AActor* PaperSheet;


	TMap<FString, FString> ParentMap; // Tracks the parent of each paperstrip for Union-Find

	TSet<FString> LockedPaperstrips; // Stores the tags of locked paperstrips

	// Map from group root to the components in that group
	TMap<FString, TArray<UStaticMeshComponent*>> GroupMap;


	// Helper functions for Union-Find
	FString FindParent(const FString& Node);
	void MergeGroups(const FString& NodeA, const FString& NodeB);
	void ValidateGroups();
	void LogParentMap();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
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
	float FadeDuration = 2.0f; // Duration of the fade effect in seconds

	UPROPERTY(VisibleAnywhere, Category = "Fade")
	float CurrentFadeTime = 0.0f; // Tracks the elapsed time during the fade

	UPROPERTY(VisibleAnywhere, Category = "Fade")
	bool bIsFadingIn = false; // Whether the fade-in is in progress

	//--------------------------------------UI---------------------------------------------------------------//

	//Exit button interaction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ExitWidgetClass;

	UUserWidget* ExitWidgetInstance;

	//Shows tutorial and start game interaction 

	UFUNCTION(BlueprintCallable, Category = "Game")
	void StartGame();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> TutorialWidgetClass;

	UUserWidget* TutorialWidgetInstance;

	UButton* StartButton;

	//Shows '?' button and interaction

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> GameMenuWidgetClass;

	UUserWidget* GameMenuWidgetInstance;

	UButton* BackToTutorialButton;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ShowTutorial();

		// Lydkomponent for snap-lyd
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		USoundBase* SnapSound;

		// Funksjon for å spille lyd
		void PlaySnapSound();

};
