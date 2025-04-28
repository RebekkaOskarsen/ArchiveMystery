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
    // Bind denne funksjonen til "Start Game"-knappen
    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnStartGameClicked();

    // Bind denne funksjonen til "Exit Game"-knappen
    UFUNCTION(BlueprintCallable, Category = "Menu")
    void OnExitGameClicked();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> CreditsWidgetClass;

    UFUNCTION()
    void OnCreditsClicked();



protected:
    // Kalles når widgeten er opprettet
    virtual void NativeConstruct() override;
 

private:
    // Referanse til "Start Game"-knappen (sett i Blueprint)
    UPROPERTY(meta = (BindWidget))
    class UButton* StartGameButton;

    // Referanse til "Exit Game"-knappen (sett i Blueprint)
    UPROPERTY(meta = (BindWidget))
    class UButton* ExitGameButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* Credits_Button;
};
