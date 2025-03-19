// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MoldBrush.h"
#include "MoldPlayerController.generated.h"

class UBrushSelectionWidget;
/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API AMoldPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
    AMoldPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

private:
    void SpawnBrush(EBrushSize BrushSize);
    void UseSmallBrush();
    void UseBigBrush();
    void BrushMold();

  

    UPROPERTY()
    AMoldBrush* MoldBrush;

    // UI Reference
    UPROPERTY()
    UBrushSelectionWidget* BrushSelectionUI;

    // Update UI when switching brushes
    void UpdateBrushUI(bool bIsSmallBrush);
};
