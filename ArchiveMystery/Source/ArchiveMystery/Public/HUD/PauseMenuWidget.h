// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UPauseMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnBackToMainMenuClicked();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> ExitMainMenuWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> CreditsPauseWidgetClass;

    UFUNCTION()
    void OnCreditsPauseClicked();

protected:
    virtual void NativeConstruct() override;

private:

    UPROPERTY(meta = (BindWidget))
    class UButton* BackToMainMenuButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ContinueGameButton_2;
	
};
