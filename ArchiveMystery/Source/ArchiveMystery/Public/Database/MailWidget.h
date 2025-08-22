// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MailWidget.generated.h"

/**
 * 
 */

class UTextBlock;

UCLASS()
class ARCHIVEMYSTERY_API UMailWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PlayerName_Mail;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_SeeScannedDocuments;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Send;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> CompletionMessageWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> ScannedDocumentWidgetClass;

	UPROPERTY()
	UUserWidget* ScannedDocumentWidgetInstance;

	UFUNCTION()
	void OnSeeScannedDocumentsClicked();

	UFUNCTION()
	void ShowSendButton();

	UFUNCTION()
	void OnSendButtonClicked();
};
