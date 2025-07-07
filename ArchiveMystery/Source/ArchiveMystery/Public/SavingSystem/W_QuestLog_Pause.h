// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/CheckBox.h"
#include "W_QuestLog_Pause.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UW_QuestLog_Pause : public UUserWidget
{
	GENERATED_BODY()

public:

	//Binds the checkboxes in the UI 
	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_1; 

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_2;

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_3; 

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_4;  

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_5;

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_6; 

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_7;

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_8;


	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_9;

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_10;

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_11;

	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	void SaveCheckBoxState();

	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	void LoadCheckBoxState();
};
