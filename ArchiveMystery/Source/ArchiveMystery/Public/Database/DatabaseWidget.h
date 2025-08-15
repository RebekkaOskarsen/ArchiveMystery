// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ComboBoxString.h"
#include "DatabaseWidget.generated.h"

/**
 *
 */

class UEditableTextBox;
class UButton;
class UTextBlock;


UCLASS()
class ARCHIVEMYSTERY_API UDatabaseWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(meta = (BindWidget))
	UComboBoxString* SelectComboBox;

	UPROPERTY(meta = (BindWidget))
	UComboBoxString* FromComboBox;

	UPROPERTY(meta = (BindWidget))
	UComboBoxString* WhereComboBox;

	UPROPERTY(meta = (BindWidget))
	UComboBoxString* LikeComboBox;

	UPROPERTY(meta = (BindWidget))
	UComboBoxString* AndComboBox;

	UPROPERTY(meta = (BindWidget))
	UButton* SubmitButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ResultWidgetClass;

	UFUNCTION()
	void OnSubmitClicked();

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnOpenInfoClicked();

	UPROPERTY(meta = (BindWidget))
	UButton* OpenInfoButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> InfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ErrorWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* BackgroundMusic;


public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PlayerName_Database;
};
