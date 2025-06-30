// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoBookWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UInfoBookWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UWidgetSwitcher* PageSwitcher;

	UPROPERTY(meta = (BindWidget))
	class UButton* NextButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* PrevButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* BackToDatabaseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> DatabaseWidgetClass;

	int32 CurrentPageIndex = 0;

	UFUNCTION()
	void OnNextClicked();

	UFUNCTION()
	void OnPrevClicked();

	UFUNCTION()
	void OnBackToDatabaseClicked();

	void UpdatePage();

	// For å kontrollere UMG-animasjoner
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FlipPageAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* FlipSound;
};
