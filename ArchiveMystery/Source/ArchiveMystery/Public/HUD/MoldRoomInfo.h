// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoldRoomInfo.generated.h"

/**
 * 
 */

class UWidgetSwitcher;
class UButton;
class UTextBlock;

UCLASS()
class ARCHIVEMYSTERY_API UMoldRoomInfo : public UUserWidget
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable) void NextPage();
    UFUNCTION(BlueprintCallable) void PrevPage();

protected:
    virtual void NativeConstruct() override;
    virtual FReply NativeOnKeyDown(const FGeometry& Geo, const FKeyEvent& InKeyEvent) override;

    UPROPERTY(meta = (BindWidget)) UWidgetSwitcher* WidgetSwitcher_404;

    // Valgfritt – bind disse hvis du har piltast-knapper i widgeten
    UPROPERTY(meta = (BindWidgetOptional)) UButton* NextButton = nullptr;
    UPROPERTY(meta = (BindWidgetOptional)) UButton* PrevButton = nullptr;
    UPROPERTY(meta = (BindWidgetOptional)) UTextBlock* PageText = nullptr;

private:
    void UpdatePageText() const;
};
