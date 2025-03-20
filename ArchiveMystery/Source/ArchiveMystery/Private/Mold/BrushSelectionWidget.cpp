// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/BrushSelectionWidget.h"
#include "Components/Border.h"

void UBrushSelectionWidget::UpdateBrushSelection(bool bIsSmallBrush)
{
	if (Border_SmallBrush && Border_BigBrush)
	{
		UE_LOG(LogTemp, Warning, TEXT("Updating Brush Selection: Small: %s, Big: %s"),
			bIsSmallBrush ? TEXT("Selected") : TEXT("Not Selected"),
			bIsSmallBrush ? TEXT("Not Selected") : TEXT("Selected"));

		// Define Colors
		FLinearColor SelectedColor = FLinearColor::White;  // White border when selected
		FLinearColor TransparentColor = FLinearColor(1, 1, 1, 0); // Invisible border when not selected

		// Apply Colors
		Border_SmallBrush->SetBrushColor(bIsSmallBrush ? SelectedColor : TransparentColor);
		Border_BigBrush->SetBrushColor(!bIsSmallBrush ? SelectedColor : TransparentColor);

		// Ensure visibility is always ON
		Border_SmallBrush->SetVisibility(ESlateVisibility::HitTestInvisible);
		Border_BigBrush->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Border references are NULL in BrushSelectionWidget!"));
	}
}
