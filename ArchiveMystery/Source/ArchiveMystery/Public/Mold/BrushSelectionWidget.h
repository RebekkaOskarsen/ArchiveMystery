// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BrushSelectionWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UBrushSelectionWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void UpdateBrushSelection(bool bIsSmallBrush);
};
