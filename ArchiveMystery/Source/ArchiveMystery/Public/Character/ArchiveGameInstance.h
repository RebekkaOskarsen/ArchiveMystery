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
	bool bMoldGameComplete = false;

	UPROPERTY(BlueprintReadWrite)
	bool bBoxWasPlaced = false;

	UPROPERTY(BlueprintReadWrite)
	FVector BoxPlacedLocation;

	UPROPERTY(BlueprintReadWrite)
	FRotator BoxPlacedRotation;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FTransform PlacedBoxTransform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox1Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox2Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox3Checked; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox4Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox5Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox6Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
	bool bIsCheckBox7Checked;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomized;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMarker6;

	//Door
	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasGarageKeycard;

	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasArchiveKeycard;

	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasEquipmentKeycard;
};
