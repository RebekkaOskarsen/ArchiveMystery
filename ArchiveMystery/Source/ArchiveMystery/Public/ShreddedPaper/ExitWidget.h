// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExitWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS()
class ARCHIVEMYSTERY_API UExitWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Scores")
    void RefreshScores();

    UFUNCTION(BlueprintCallable, Category = "Test")
    void TestPing() {}

protected:
    virtual void NativeConstruct() override;

    UFUNCTION() 
    void OnViewScoreClicked();
 
    UPROPERTY(meta = (BindWidget)) UButton* ViewScoreButton;

    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText0;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText1;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText2;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText3;
    UPROPERTY(meta = (BindWidget)) UTextBlock* ScoreText4;

    static FText FormatMMSS(int32 TotalSeconds);
    bool bScoresVisible = false;
};
