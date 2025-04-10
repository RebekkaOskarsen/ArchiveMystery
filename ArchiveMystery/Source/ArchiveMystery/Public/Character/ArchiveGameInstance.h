// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ArchiveGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UArchiveGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	FVector SavedPlayerLocation;

	UPROPERTY(BlueprintReadWrite)
	bool bBoxPlacedBeforeMoldGame = false;

	UPROPERTY(BlueprintReadWrite)
	bool bShreddedGameComplete = false;

	UPROPERTY(BlueprintReadWrite)
	bool bBoxWasPlaced = false;

	UPROPERTY(BlueprintReadWrite)
	FVector BoxPlacedLocation;

	UPROPERTY(BlueprintReadWrite)
	FRotator BoxPlacedRotation;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FTransform PlacedBoxTransform;
};
