// Fill out your copyright notice in the Description page of Project Settings.


#include "InformationShelves/ArchivePopupWidget.h"

#include "EngineUtils.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "InformationShelves/ArchivePopupTrigger.h"
#include "Kismet/GameplayStatics.h"

void UArchivePopupWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UArchivePopupWidget::CloseWidget);
    }

    if (NextButton)
    {
        NextButton->OnClicked.AddDynamic(this, &UArchivePopupWidget::ShowNextPage);
    }

    if (PrevButton)
    {
        PrevButton->OnClicked.AddDynamic(this, &UArchivePopupWidget::ShowPreviousPage);
    }
}

void UArchivePopupWidget::CloseWidget()
{
    RemoveFromParent();

    UGameplayStatics::SetGamePaused(this, false);

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC)
    {
        PC->SetInputMode(FInputModeGameOnly());
        PC->bShowMouseCursor = false;

        // Finn triggeren og start cooldown
        for (TActorIterator<AArchivePopupTrigger> It(GetWorld()); It; ++It)
        {
            AArchivePopupTrigger* Trigger = *It;
            if (Trigger)
            {
                // Start timeren for å reaktivere trigger
                GetWorld()->GetTimerManager().SetTimer(Trigger->TriggerCooldownTimer, Trigger, &AArchivePopupTrigger::ResetTrigger, Trigger->CooldownTime, false);
            }
        }
    }
}

void UArchivePopupWidget::ShowNextPage()
{
    if (!PageSwitcher) return;

    int32 NumPages = PageSwitcher->GetNumWidgets();
    if (NumPages == 0) return;

    CurrentPageIndex = (CurrentPageIndex + 1) % NumPages;
    PageSwitcher->SetActiveWidgetIndex(CurrentPageIndex);
}

void UArchivePopupWidget::ShowPreviousPage()
{
    if (!PageSwitcher) return;

    int32 NumPages = PageSwitcher->GetNumWidgets();
    if (NumPages == 0) return;

    CurrentPageIndex = (CurrentPageIndex - 1 + NumPages) % NumPages;
    PageSwitcher->SetActiveWidgetIndex(CurrentPageIndex);
}


