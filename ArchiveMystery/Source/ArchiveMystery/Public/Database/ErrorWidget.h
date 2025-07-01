// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ErrorWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UErrorWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> DatabaseWidgetClass;

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* BackButton;

	UFUNCTION()
	void OnBackClicked();

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* SpeechBubbleText;

	UPROPERTY(meta = (BindWidget))
	class UImage* SpeechBubbleBackground;

	UPROPERTY(meta = (BindWidget))
	class UImage* GhostImage;

	UFUNCTION()
	void ShowSpeechBubble();

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PlayerName_Error;
};
