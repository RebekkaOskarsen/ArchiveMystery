// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnLoginClicked();

public:
	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* EditableTextBox_PlayerName;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_ErrorMessage;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Login;

	UPROPERTY(EditDefaultsOnly, Category = "Login")
	TSubclassOf<UUserWidget> NextWidgetClass;

	UFUNCTION()
	void OnNameCommitted(const FText& Text, ETextCommit::Type CommitMethod);

};
