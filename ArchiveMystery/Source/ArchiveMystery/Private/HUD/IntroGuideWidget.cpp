// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/IntroGuideWidget.h"
#include "Kismet/KismetMathLibrary.h"
#include "Character/Archivist.h"

void UIntroGuideWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (PrevButton)
    {
        PrevButton->OnClicked.AddDynamic(this, &UIntroGuideWidget::OnPrevClicked);
    }
    if (NextButton)
    {
        NextButton->OnClicked.AddDynamic(this, &UIntroGuideWidget::OnNextClicked);
    }
    if (CloseButton)
    {
        CloseButton->OnClicked.AddDynamic(this, &UIntroGuideWidget::OnCloseClicked);
    }
}

void UIntroGuideWidget::OnPrevClicked()
{
    if (!IntroSwitcher)
        return;

    int32 CurrentIndex = IntroSwitcher->GetActiveWidgetIndex();
    int32 Num = IntroSwitcher->GetNumWidgets();
    int32 NewIndex = UKismetMathLibrary::Clamp(
        CurrentIndex - 1,
        0,
        FMath::Max(Num - 1, 0)
    );
    IntroSwitcher->SetActiveWidgetIndex(NewIndex);
}

void UIntroGuideWidget::OnNextClicked()
{
    if (!IntroSwitcher)
        return;

    int32 CurrentIndex = IntroSwitcher->GetActiveWidgetIndex();
    int32 Num = IntroSwitcher->GetNumWidgets();
    int32 NewIndex = UKismetMathLibrary::Clamp(
        CurrentIndex + 1,
        0,
        FMath::Max(Num - 1, 0)
    );
    IntroSwitcher->SetActiveWidgetIndex(NewIndex);
}

void UIntroGuideWidget::OnCloseClicked()
{
    RemoveFromParent();

    if (APlayerController* PC = GetOwningPlayer())
    {
        //Hide cursor
        PC->bShowMouseCursor = false;

        //Allow the pawn to receive look/move again
        PC->SetIgnoreLookInput(false);
        PC->SetIgnoreMoveInput(false);

        //Switch back to pure game-only
        PC->SetInputMode(FInputModeGameOnly());
    }
}
