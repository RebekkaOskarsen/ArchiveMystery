// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CompletionMessageWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UCompletionMessageWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    class UButton* Button_ReturnToMenu;

    UFUNCTION()
    void OnReturnToMenuClicked();
};
