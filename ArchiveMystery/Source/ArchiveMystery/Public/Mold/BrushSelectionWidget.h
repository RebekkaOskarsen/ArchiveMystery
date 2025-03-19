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
	// Border for Small Brush
	UPROPERTY(meta = (BindWidget))
	class UBorder* Border_SmallBrush;

	// Border for Big Brush
	UPROPERTY(meta = (BindWidget))
	class UBorder* Border_BigBrush;

	// Function to update UI selection
	void UpdateBrushSelection(bool bIsSmallBrush);
};
