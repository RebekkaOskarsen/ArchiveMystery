// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MoldRoomInfo.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Framework/Application/SlateApplication.h"

void UMoldRoomInfo::NativeConstruct()
{
    Super::NativeConstruct();

    if (NextButton) NextButton->OnClicked.AddDynamic(this, &UMoldRoomInfo::NextPage);
    if (PrevButton) PrevButton->OnClicked.AddDynamic(this, &UMoldRoomInfo::PrevPage);

    UpdatePageText();
    SetIsFocusable(true); // gjør at vi kan få tastaturinput
}

void UMoldRoomInfo::NextPage()
{
    if (!WidgetSwitcher_404) return;
    const int32 count = WidgetSwitcher_404->GetNumWidgets();
    if (count == 0) return;

    const int32 cur = WidgetSwitcher_404->GetActiveWidgetIndex();
    WidgetSwitcher_404->SetActiveWidgetIndex((cur + 1) % count);
    UpdatePageText();
}

void UMoldRoomInfo::PrevPage()
{
    if (!WidgetSwitcher_404) return;
    const int32 count = WidgetSwitcher_404->GetNumWidgets();
    if (count == 0) return;

    const int32 cur = WidgetSwitcher_404->GetActiveWidgetIndex();
    WidgetSwitcher_404->SetActiveWidgetIndex((cur - 1 + count) % count);
    UpdatePageText();
}

FReply UMoldRoomInfo::NativeOnKeyDown(const FGeometry& Geo, const FKeyEvent& KeyEvent)
{
    const FKey key = KeyEvent.GetKey();
    if (key == EKeys::Right || key == EKeys::PageDown) { NextPage(); return FReply::Handled(); }
    if (key == EKeys::Left || key == EKeys::PageUp) { PrevPage(); return FReply::Handled(); }
    return Super::NativeOnKeyDown(Geo, KeyEvent);
}

void UMoldRoomInfo::UpdatePageText() const
{
    if (!PageText || !WidgetSwitcher_404) return;
    const int32 cur = WidgetSwitcher_404->GetActiveWidgetIndex();
    const int32 total = WidgetSwitcher_404->GetNumWidgets();
    PageText->SetText(FText::FromString(FString::Printf(TEXT("Page %d/%d"), cur + 1, total)));
}
