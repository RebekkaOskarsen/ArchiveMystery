// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "DoubleDoor.generated.h"

UENUM(BlueprintType)
enum class EDoorType : uint8
{
	Garage,
	Archive,
	Equipment
};

UCLASS()
class ARCHIVEMYSTERY_API ADoubleDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoubleDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* LeftDoor;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* RightDoor;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditAnywhere)
	EDoorType DoorType;

	UPROPERTY(EditAnywhere)
	float OpenAngle = 90.0f;

	UPROPERTY(EditAnywhere)
	float OpenSpeed = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Door")
	float TimeBeforeClose = 7.0f;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* InteractionBox;

	bool bIsOpen;
	bool bShouldOpen;

	UPROPERTY()
	AActor* InteractingPlayer;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void Interact(AActor* PlayerActor);

	//Text
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door")
	UTextRenderComponent* LockedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	float TextVisibleDuration = 2.5f;

	//Press E Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UUserWidget* PressEWidgetInstance;

private:
	FRotator TargetLeftRotation;
	FRotator TargetRightRotation;
	FRotator InitialLeftRotation;
	FRotator InitialRightRotation;

	float OpenTimer = 0.0f;

	//Text
	float LockedTextTimer = 0.f;
	bool bShouldShowLockedText = false;
};
