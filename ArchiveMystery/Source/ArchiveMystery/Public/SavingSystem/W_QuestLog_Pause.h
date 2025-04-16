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

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_1;  // Referanse til checkbox 1

	//UPROPERTY()
	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_2;  // Referanse til checkbox 2

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_3;  // Referanse til checkbox 1

	//UPROPERTY()
	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_4;  // Referanse til checkbox 2

	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_5;  // Referanse til checkbox 1

	//UPROPERTY()
	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_6;  // Referanse til checkbox 2

	//UPROPERTY()
	UPROPERTY(meta = (BindWidget))
	UCheckBox* CheckBox_7;  // Referanse til checkbox 2


	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	// Funksjon for å lagre tilstand til checkbox
	void SaveCheckBoxState();

	UFUNCTION(BlueprintCallable, Category = "Quest Log")
	// Funksjon for å lagre tilstand til checkbox
	void LoadCheckBoxState();
};
