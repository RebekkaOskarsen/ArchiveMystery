// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Engine/TriggerBox.h"
#include "UObject/ObjectMacros.h"
#include "PaintingInfo.generated.h"

USTRUCT(BlueprintType)
struct FPaintingInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
    ATriggerBox* PaintingTriggerBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
    TSubclassOf<UUserWidget> PaintingWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Painting")
    TSubclassOf<UUserWidget> PaintingInstructionWidgetClass;

    UPROPERTY()
    UUserWidget* PaintingInstructionWidgetInstance; 

    UPROPERTY()
    UUserWidget* PaintingWidgetInstance;

    bool bIsLookingAtPainting = false;
};
