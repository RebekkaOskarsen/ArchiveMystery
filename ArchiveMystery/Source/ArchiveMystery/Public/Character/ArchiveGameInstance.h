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

	//Saving the order of the tasks in the game

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

	//Checkboxes in the quest system 

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

	//Saving of skin color

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor6;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor7;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor8;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor9;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor10;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor11;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor12;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor13;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedSkinColor14;

	//Watch

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor6;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor7;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor8;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor9;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsCustomizedWatchColor10;

	//Markers 

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

	//Keycards 
	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasGarageKeycard;

	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasArchiveKeycard;

	UPROPERTY(BlueprintReadWrite, Category = "Keycards")
	bool bHasEquipmentKeycard;
};
