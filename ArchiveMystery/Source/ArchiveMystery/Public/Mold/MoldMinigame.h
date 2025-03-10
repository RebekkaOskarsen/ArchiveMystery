// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
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

private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* MoldCamera;

	// Track number of mold pieces
	int32 MoldCount;

	// Check if the minigame is won
	void CheckWinCondition();
};
