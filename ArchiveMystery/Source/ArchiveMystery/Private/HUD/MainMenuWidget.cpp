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

    if (StartGameButton)
    {
        StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);
    }

    if (ExitGameButton)
    {
        ExitGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitGameClicked);
    }
    if (Credits_Button) 
    {
        Credits_Button->OnClicked.AddDynamic(this, &UMainMenuWidget::OnCreditsClicked);
    }
}

void UMainMenuWidget::OnStartGameClicked()
{
    UGameplayStatics::OpenLevel(this, FName("StartGame"));
}

void UMainMenuWidget::OnExitGameClicked()
{
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}

void UMainMenuWidget::OnCreditsClicked()
{
    if (CreditsWidgetClass)
    {
        UUserWidget* CreditsWidget = CreateWidget<UUserWidget>(GetWorld(), CreditsWidgetClass);
        if (CreditsWidget)
        {
            CreditsWidget->AddToViewport();

            RemoveFromParent();
        }
    }
}
