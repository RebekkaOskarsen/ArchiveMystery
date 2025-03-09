// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Bind "OnStartGameClicked" til "Start Game"-knappen
    if (StartGameButton)
    {
        StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);
    }

    // Bind "OnExitGameClicked" til "Exit Game"-knappen
    if (ExitGameButton)
    {
        ExitGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitGameClicked);
    }
}

void UMainMenuWidget::OnStartGameClicked()
{
    // Last "Archive-Mystery"-nivået
    UGameplayStatics::OpenLevel(this, FName("Archive-Mystery"));
}

void UMainMenuWidget::OnExitGameClicked()
{
    // Avslutt spillet
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}