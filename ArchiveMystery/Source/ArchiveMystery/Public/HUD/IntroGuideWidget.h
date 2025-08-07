// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"
#include "IntroGuideWidget.generated.h"

/**
 * 
 */

UCLASS(BlueprintType, Blueprintable)
class ARCHIVEMYSTERY_API UIntroGuideWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
    virtual void NativeConstruct() override;

    // Bind these names to your Blueprint buttons & switcher
    UPROPERTY(meta = (BindWidget))
    UWidgetSwitcher* IntroSwitcher;

    UPROPERTY(meta = (BindWidget))
    UButton* PrevButton;

    UPROPERTY(meta = (BindWidget))
    UButton* NextButton;

    UPROPERTY(meta = (BindWidget))
    UButton* CloseButton;

private:
    UFUNCTION()
    void OnPrevClicked();

    UFUNCTION()
    void OnNextClicked();

    UFUNCTION()
    void OnCloseClicked();
};
