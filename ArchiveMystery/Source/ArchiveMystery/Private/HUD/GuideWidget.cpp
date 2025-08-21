// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/GuideWidget.h"

#include "Kismet/KismetMathLibrary.h"

void UGuideWidget::NativeConstruct()
{
    Super::NativeConstruct();
    if (PrevButton)
    {
        PrevButton->OnClicked.AddDynamic(this, &UGuideWidget::OnPrevClicked);
    }
    if (NextButton)
    {
        NextButton->OnClicked.AddDynamic(this, &UGuideWidget::OnNextClicked);
    }
}

void UGuideWidget::OnPrevClicked()
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

void UGuideWidget::OnNextClicked()
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
