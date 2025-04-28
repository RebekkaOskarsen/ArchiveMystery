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
    // Bind denne funksjonen til "Continue Game"-knappen
    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnContinueGameClicked();

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnBackToMainMenuClicked();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> ExitMainMenuWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> CreditsPauseWidgetClass;

    UFUNCTION()
    void OnCreditsPauseClicked();
  


protected:
    // Kalles når widgeten er opprettet
    virtual void NativeConstruct() override;

private:
    // Referanse til "Continue Game"-knappen (sett i Blueprint)
    UPROPERTY(meta = (BindWidget))
    class UButton* ContinueGameButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* BackToMainMenuButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ContinueGameButton_2;
	
};
