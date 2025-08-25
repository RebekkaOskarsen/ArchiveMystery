// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Character/ArchiveGameInstance.h"


void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (StartGameButton)
    {
        StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);
    }

    if (ContinueButton)
    {
        ContinueButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnContinueClicked);

        //Disable button if there's no saved level
        UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
        if (GI)
        {
            if (GI->LastLevelName.IsEmpty())
            {
                ContinueButton->SetIsEnabled(false);
            }
        }
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
    if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
    {
        GI->ResetAllProgress();
        GI->SaveQuestLogData();
    }
    Cast<UArchiveGameInstance>(GetGameInstance())->ResetAllProgress();
    UGameplayStatics::OpenLevel(this, FName("StartGame"));
}

void UMainMenuWidget::OnContinueClicked()
{
    UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
    if (GI && !GI->LastLevelName.IsEmpty())
    {

        UGameplayStatics::OpenLevel(this, FName(*GI->LastLevelName));
    }
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
