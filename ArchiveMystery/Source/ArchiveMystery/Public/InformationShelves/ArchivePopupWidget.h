// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArchivePopupWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UArchivePopupWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    UFUNCTION()
    void CloseWidget();

    UFUNCTION()
    void ShowNextPage();

    UFUNCTION()
    void ShowPreviousPage();

    UPROPERTY(meta = (BindWidget))
    class UButton* CloseButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* NextButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* PrevButton;

    UPROPERTY(meta = (BindWidget))
    class UWidgetSwitcher* PageSwitcher;

private:
    int32 CurrentPageIndex = 0;

protected:
    virtual void NativeConstruct() override;

};
