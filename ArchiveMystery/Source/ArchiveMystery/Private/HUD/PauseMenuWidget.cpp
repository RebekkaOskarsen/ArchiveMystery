// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PauseMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"



void UPauseMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (BackToMainMenuButton)
    {
        BackToMainMenuButton->OnClicked.AddDynamic(this, &UPauseMenuWidget::OnBackToMainMenuClicked);
    }

    if (ContinueGameButton_2) 
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

            RemoveFromParent();
        }
    }
}


