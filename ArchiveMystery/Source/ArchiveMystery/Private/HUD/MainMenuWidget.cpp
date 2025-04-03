// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"




void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Sett input-modus
    if (GetWorld())
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            PC->SetInputMode(FInputModeUIOnly());
            PC->bShowMouseCursor = true;
        }
    }

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
    // Gjør musepekeren usynlig når spillet starter
    if (GetWorld())
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            PC->SetInputMode(FInputModeGameOnly());
            PC->bShowMouseCursor = false;
        }
    }

    // Last "Archive-Mystery"-nivået
    UGameplayStatics::OpenLevel(this, FName("StartGame"));
}

void UMainMenuWidget::OnExitGameClicked()
{
    // Avslutt spillet
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}