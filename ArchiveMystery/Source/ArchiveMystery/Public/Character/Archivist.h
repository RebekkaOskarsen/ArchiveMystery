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
class ADocumentItem;

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

	//---------------------Items Pick up--------------------------//
	AItems* EquippedItem = nullptr;
	AOpenBox* EquippedBox = nullptr;

	AOpenBox* GetEquippedBox() const { return EquippedBox; }

	AItems* GetOverlappingItems() const { return OverlappingItems; }

	UPROPERTY(EditAnywhere, Category = "Drop Zone")
	AActor* BoxSnapTarget;

	//---------------------Conditions to play--------------------------//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasPlacedBox = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasFinishedShreddedPaperMinigame = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasFinishedMoldMinigame = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasFoundDocument1 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasFoundDocument2 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Progress")
	bool bHasScannedDocuments = false;

	FORCEINLINE void SetOverlappingItems(AItems* Items) { OverlappingItems = Items; }

	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }

	//----------------Shredded paper minigame---------------------------//

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

	//-----------------Saving location of the player----------------------------//

	UPROPERTY()
	FVector LastSavedLocation;

	//---------------------Interaction with paintings--------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAtPaintingAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
	TArray<FPaintingInfo> Paintings; 

	ATriggerBox* PaintingTriggerBox;

	bool bIsLookingAtPainting = false;

	UFUNCTION()
	void OnPaintingTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void OnPaintingTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	void LookAtPainting(const FInputActionValue& Value);

	bool bIsMovementLocked = false;

	UUserWidget* PaintingWidgetInstance; 

	bool bIsInputLocked = false;  
	float InputLockTime = 0.3f;  
	float CurrentInputTime = 0.0f;

	//----------------Input Pause menu---------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* PauseAction;

	//---------------------Drop Zone for Box--------------------------//

	UPROPERTY(EditAnywhere, Category = "Drop Zone")
	ATriggerBox* DropZone;

	UFUNCTION()
	void OnDropZoneBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void OnDropZoneEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	//---------------------Documents Information widget--------------------------//
	// Widget to show document info
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> DocumentPopupWidgetClass;

	UUserWidget* DocumentPopupWidgetInstance;

	// Widget to show second document info
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> SecondDocumentPopupWidgetClass;

	UUserWidget* SecondDocumentPopupWidgetInstance;

	//---------------------------------------------------------//
	UFUNCTION(BlueprintCallable)
	void RestoreGameplayInput();

	//---------------------Document references--------------------------//
	UPROPERTY()
	ADocumentItem* PickedUpDocument1 = nullptr;

	UPROPERTY()
	ADocumentItem* PickedUpDocument2 = nullptr;

	UFUNCTION(BlueprintCallable)
	void DeliverDocuments();

	//-----References for keycards, marker and customization------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* CustomActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker1Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker2Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker3Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker4Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker5Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Marker6Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* GarageKeycardActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ArchiveKeycardActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* EquipmentKeycardActor;

	bool bIsPaused;
	//----Saving skin color-------------------------------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor11;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* SkinColor14;

	void ApplySkinColor(UMaterialInterface* NewMaterial);

	//----------Saving watch color----------------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Customization")
	UMaterialInterface* WatchColor10;

	void ApplyMaterialToSlot(int32 MaterialSlotIndex, UMaterialInterface* NewMaterial);

protected:
	virtual void BeginPlay() override;

	//---------------------Input actions-------------------------//

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* OpenDoorAction;

	//-----------Character movement-----------------------------//

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	virtual void Jump() override;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float WalkSpeed = 500.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float RunSpeed = 900.0f;

	void StartRunning();
	void StopRunning();

	//---------Character interaction----------------------------------------//

	void PickUp(const FInputActionValue& Value);

	void TryOpenDoor(const FInputActionValue& Value);

	// ------------Main menu-----------------------------------------------------//
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UMainMenuWidget> MainMenuWidgetClass;

	UPROPERTY()
	class UMainMenuWidget* MainMenuWidget;

	//-----------Box placement-----------------------------------------------//

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	AOpenBox* BoxToPlaceBeforeMinigame;

private:

	//------- Camera properties-------------------------------------------------//
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	//--------Overlapping Items -------------------------------------------------//

	UPROPERTY(VisibleInstanceOnly)
	AItems* OverlappingItems;

	//--------Character state-------------------------------------------------//

	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	//----------Menues--------------------------------------------------------//

	UPROPERTY()
	class UPauseMenuWidget* PauseMenuWidget;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UPauseMenuWidget> PauseMenuWidgetClass;

	void TogglePauseMenu();

};
