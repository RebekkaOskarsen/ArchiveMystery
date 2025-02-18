// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Engine/TriggerBox.h"
#include "Blueprint/UserWidget.h"
#include "Archivist.generated.h"

class USpringArmComponent;
class UCameraComponent;

class UInputMappingContext;
class UInputAction;

class AItems;

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
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* CharacterMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* PickUpAction;


	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void PickUp(const FInputActionValue& Value);

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
};
