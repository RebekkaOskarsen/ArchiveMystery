// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MinigameExitWidget.h"
#include "Components/TextBlock.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Mold/MoldMinigame.h"

void UMinigameExitWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (ViewScoreButton)
    {
        if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        {
            ViewScoreButton->SetVisibility(
                GI->LastMoldDifficulty == EMoldDifficulty::Hard
                ? ESlateVisibility::Visible
                : ESlateVisibility::Collapsed);
        }
    }

    RefreshScores();
}

void UMinigameExitWidget::RefreshScores()
{
    UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
    const TArray<int32>& Scores = GI ? GI->MoldScoreHistory : TArray<int32>();

    TArray<UTextBlock*> Slots = { ScoreText0, ScoreText1, ScoreText2, ScoreText3, ScoreText4 };
    for (int32 i = 0; i < Slots.Num(); ++i)
    {
        if (!Slots[i]) continue;

        if (Scores.IsValidIndex(i))
        {
            Slots[i]->SetText(FormatSecondsMMSS(Scores[i]));

            // Emphasize the top score
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

FText UMinigameExitWidget::FormatSecondsMMSS(int32 TotalSeconds)
{
    TotalSeconds = FMath::Max(0, TotalSeconds);
    const int32 Minutes = TotalSeconds / 60;
    const int32 Seconds = TotalSeconds % 60;
    return FText::FromString(FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds));
}
