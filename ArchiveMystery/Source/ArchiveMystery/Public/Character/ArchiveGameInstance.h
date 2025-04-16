// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SavingSystem/QuestLogData.h"
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

	UArchiveGameInstance();

	// Quest logg data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	UQuestLogData* QuestLogData;

	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	void SaveQuestLogData();

	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	void LoadQuestLogData();

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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox1Checked; // For checkbox 1

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox2Checked; // For checkbox 2

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox3Checked; // For checkbox 3

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox4Checked; // For checkbox4

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox5Checked; // For checkbox 5

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox6Checked; // For checkbox 6

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox7Checked; // For checkbox 7

};
