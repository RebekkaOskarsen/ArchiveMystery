// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnStartGameClicked();

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnContinueClicked();

    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnExitGameClicked();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> CreditsWidgetClass;

    UFUNCTION()
    void OnCreditsClicked();

protected:

    virtual void NativeConstruct() override;
 

private:

    UPROPERTY(meta = (BindWidget))
    class UButton* StartGameButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ContinueButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ExitGameButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* Credits_Button;
};
