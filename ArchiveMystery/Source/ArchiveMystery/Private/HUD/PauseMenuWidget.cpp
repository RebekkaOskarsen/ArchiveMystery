// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PauseMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"



void UPauseMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();


    // Bind "OnBackToMainMenuClicked" til "Back to Main Menu"-knappen
    if (BackToMainMenuButton)
    {
        BackToMainMenuButton->OnClicked.AddDynamic(this, &UPauseMenuWidget::OnBackToMainMenuClicked);
    }

    if (ContinueGameButton_2) // <- Ny binding her
    {
        ContinueGameButton_2->OnClicked.AddDynamic(this, &UPauseMenuWidget::OnCreditsPauseClicked);
    }
  
}


void UPauseMenuWidget::OnBackToMainMenuClicked()
{
    if (ExitMainMenuWidgetClass)
    {
        UUserWidget* ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitMainMenuWidgetClass);
        if (ExitWidget)
        {
            ExitWidget->AddToViewport();

            // Om du ønsker å skjule pausemenyen samtidig:
            RemoveFromParent();
        }
    }
}

void UPauseMenuWidget::OnCreditsPauseClicked()
{
    if (CreditsPauseWidgetClass)
    {
        UUserWidget* CreditsWidget = CreateWidget<UUserWidget>(GetWorld(), CreditsPauseWidgetClass);
        if (CreditsWidget)
        {
            CreditsWidget->AddToViewport();

            // (Valgfritt) Hvis du vil skjule hovedmenyen når Credits vises:
            RemoveFromParent();
        }
    }
}


