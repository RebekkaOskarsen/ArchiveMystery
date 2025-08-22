// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"

#include "Components/WidgetSwitcher.h"
#include "GuideWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UGuideWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UWidgetSwitcher* IntroSwitcher;

    UPROPERTY(meta = (BindWidget))
    UButton* PrevButton;

    UPROPERTY(meta = (BindWidget))
    UButton* NextButton;

private:
    UFUNCTION()
    void OnPrevClicked();

    UFUNCTION()
    void OnNextClicked();

};
