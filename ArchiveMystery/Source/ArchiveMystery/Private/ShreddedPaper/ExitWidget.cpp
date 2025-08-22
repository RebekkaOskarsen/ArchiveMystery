// Fill out your copyright notice in the Description page of Project Settings.


#include "ShreddedPaper/ExitWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UExitWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (ViewScoreButton)
        ViewScoreButton->OnClicked.AddDynamic(this, &UExitWidget::OnViewScoreClicked);


    // Show/hide ViewScore depending on last played mode
    if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
    {
        if (ViewScoreButton)
            ViewScoreButton->SetVisibility(GI->bLastShreddedWasHard ? ESlateVisibility::Visible
                : ESlateVisibility::Collapsed);
    }

    RefreshScores();
}

void UExitWidget::OnViewScoreClicked()
{
    if (bScoresVisible)
        RefreshScores();
}

void UExitWidget::RefreshScores()
{
    UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
    const TArray<int32>& Scores = GI ? GI->ShreddedScoreHistory : TArray<int32>();

    TArray<UTextBlock*> Slots = { ScoreText0, ScoreText1, ScoreText2, ScoreText3, ScoreText4 };
    for (int32 i = 0; i < Slots.Num(); ++i)
    {
        if (!Slots[i]) continue;

        if (Scores.IsValidIndex(i))
        {
            Slots[i]->SetText(FormatMMSS(Scores[i]));

            if (i == 0)
                Slots[i]->SetColorAndOpacity(FSlateColor(FLinearColor(0.2f, 0.8f, 0.2f, 1.f)));
            else
                Slots[i]->SetColorAndOpacity(FSlateColor(FLinearColor::Black));
        }
        else
        {
            Slots[i]->SetText(FText::FromString(TEXT("-:--")));
            Slots[i]->SetColorAndOpacity(FSlateColor(FLinearColor::White));
        }
    }
}

FText UExitWidget::FormatMMSS(int32 TotalSeconds)
{
    if (TotalSeconds < 0) TotalSeconds = 0;
    const int32 Minutes = TotalSeconds / 60;
    const int32 Seconds = TotalSeconds % 60;
    return FText::FromString(FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds));
}
