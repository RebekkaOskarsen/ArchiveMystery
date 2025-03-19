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

		// White border for selected brush, transparent for unselected
		FLinearColor SelectedColor = FLinearColor::White;
		FLinearColor TransparentColor = FLinearColor(0, 0, 0, 0); // Fully transparent

		Border_SmallBrush->SetBrushColor(bIsSmallBrush ? SelectedColor : TransparentColor);
		Border_BigBrush->SetBrushColor(!bIsSmallBrush ? SelectedColor : TransparentColor);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Border references are NULL in BrushSelectionWidget!"));
	}
}
