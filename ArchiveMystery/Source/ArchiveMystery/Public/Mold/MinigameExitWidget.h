// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameExitWidget.generated.h"

class UTextBlock;
class UButton;

UCLASS()
class ARCHIVEMYSTERY_API UMinigameExitWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    virtual void NativeConstruct() override;

protected:
    // Bind these to your 5 text blocks in WBP_MinigameExit
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText0;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText1;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText2;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText3;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText4;

    UFUNCTION(BlueprintCallable) 
    void RefreshScores();
    // Helper to format mm:ss
    static FText FormatSecondsMMSS(int32 TotalSeconds);

    UPROPERTY(meta = (BindWidget)) UButton* ViewScoreButton;
};
