// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PauseMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UPauseMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Bind "OnContinueGameClicked" til "Continue Game"-knappen
    if (ContinueGameButton)
    {
        ContinueGameButton->OnClicked.AddDynamic(this, &UPauseMenuWidget::OnContinueGameClicked);
    }

    // Bind "OnBackToMainMenuClicked" til "Back to Main Menu"-knappen
    if (BackToMainMenuButton)
    {
        BackToMainMenuButton->OnClicked.AddDynamic(this, &UPauseMenuWidget::OnBackToMainMenuClicked);
    }
}

void UPauseMenuWidget::OnContinueGameClicked()
{
    // Fortsett spillet
    UGameplayStatics::SetGamePaused(this, false);

    // Skjul musepekeren og sett input tilbake til spillmodus
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        PlayerController->bShowMouseCursor = false;
        PlayerController->SetInputMode(FInputModeGameOnly());
    }

    // Fjern pause-menyen fra skjermen
    RemoveFromParent();
}

void UPauseMenuWidget::OnBackToMainMenuClicked()
{
    // Fortsett spillet før vi laster hovedmenyen
    UGameplayStatics::SetGamePaused(this, false);

    // Last inn hovedmenyen
    UGameplayStatics::OpenLevel(this, FName("MainMenuLevel"));
}