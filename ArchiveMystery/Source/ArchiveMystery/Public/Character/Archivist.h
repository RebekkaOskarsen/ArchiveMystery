// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PaintingInfo.h"
#include "Engine/TriggerBox.h"
#include "Blueprint/UserWidget.h"
#include "Animation/AnimInstance.h"

#include "Archivist.generated.h"

class USpringArmComponent;
class UCameraComponent;

class UInputMappingContext;
class UInputAction;

class AItems;
class AOpenBox;

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedBox UMETA(DisplayName = "Equipped One-Handed Box")
};

UCLASS()
class ARCHIVEMYSTERY_API AArchivist : public ACharacter
{
	GENERATED_BODY()

public:
	AArchivist();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Camera
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCameraComponent* ViewCamera;

	AItems* EquippedItem = nullptr;
	AOpenBox* EquippedBox = nullptr;

	AOpenBox* GetEquippedBox() const { return EquippedBox; }

	AItems* GetOverlappingItems() const { return OverlappingItems; }

	UPROPERTY(EditAnywhere, Category = "Drop Zone")
	AActor* BoxSnapTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasPlacedBox = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasFinishedShreddedPaperMinigame = false;
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* CharacterMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* RunAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* PickUpAction;


	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	virtual void Jump() override;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float WalkSpeed = 600.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float RunSpeed = 900.0f;

	void StartRunning();
	void StopRunning();

	void PickUp(const FInputActionValue& Value);

	// Referanse til Widget Blueprint-klassen for startmenyen
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UMainMenuWidget> MainMenuWidgetClass;

	UPROPERTY()
	class UMainMenuWidget* MainMenuWidget;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	AOpenBox* BoxToPlaceBeforeMinigame;
private:

	// Camera properties
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;


	UPROPERTY(VisibleInstanceOnly)
	AItems* OverlappingItems;

	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;



	public:
		FORCEINLINE void SetOverlappingItems(AItems* Items) { OverlappingItems = Items; }

		FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }

		void TryEnterMinigame();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		UInputAction* EnterMinigameAction;

		UFUNCTION()
		void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

		UFUNCTION()
		void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);

		UPROPERTY(EditAnywhere, Category = "Minigame")
		ATriggerBox* MinigameTriggerBox;

		UPROPERTY(EditAnywhere, Category = "UI")
		TSubclassOf<UUserWidget> MinigamePromptWidgetClass;

		UUserWidget* MinigamePromptWidget;

		UPROPERTY()
		FVector LastSavedLocation;

		//--------------------------------------------------------------------------------------

		// Legg til en ny InputAction
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		UInputAction* LookAtPaintingAction;

		 // Variabel som holder en liste over malere
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
		TArray<FPaintingInfo> Paintings; // Liste med flere maler

		ATriggerBox* PaintingTriggerBox;

		// Variabel som holder styr på om karakteren ser på maleriet
		bool bIsLookingAtPainting = false;

		UFUNCTION()
		void OnPaintingTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
		UFUNCTION()
		void OnPaintingTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

		void LookAtPainting(const FInputActionValue& Value);


		// Variabel som holder styr på om spilleren er låst i visningen av malerbildet
		bool bIsMovementLocked = false;


		UUserWidget* PaintingWidgetInstance;  // Instans av widgeten som vil bli lagt til på skjermen

		bool bIsInputLocked = false;  // For å hindre gjentatte inputtriggere
		float InputLockTime = 0.3f;   // Tid i sekunder før input kan brukes igjen (juster etter behov)
		float CurrentInputTime = 0.0f;

		// Legg til en ny InputAction
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		UInputAction* PauseAction;

		UPROPERTY(EditAnywhere, Category = "Drop Zone")
		ATriggerBox* DropZone;

		UFUNCTION()
		void OnDropZoneBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

		UFUNCTION()
		void OnDropZoneEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	private:
		// Referanse til pause-menyen
		UPROPERTY()
		class UPauseMenuWidget* PauseMenuWidget;

		// Referanse til Widget Blueprint-klassen for pause-menyen
		UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UPauseMenuWidget> PauseMenuWidgetClass;

		// Funksjon for å håndtere pause-tasten
		void TogglePauseMenu();

		// Sjekk om spillet er pauset
		bool bIsPaused;
};
