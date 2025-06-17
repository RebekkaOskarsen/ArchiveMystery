// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/ErrorWidget.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UErrorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UErrorWidget::OnBackClicked);

		// Skjul snakkeboble først
		if (SpeechBubbleBackground)
		{
			SpeechBubbleBackground->SetVisibility(ESlateVisibility::Hidden);
		}

		if (SpeechBubbleText)
		{
			SpeechBubbleText->SetVisibility(ESlateVisibility::Hidden);
		}

		if (GhostImage)
		{
			GhostImage->SetVisibility(ESlateVisibility::Hidden);
		}

		// Vis etter kort tid
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UErrorWidget::ShowSpeechBubble, 0.8f, false);
	}
}

void UErrorWidget::OnBackClicked()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (DatabaseWidgetClass && PC)
	{
		UUserWidget* DBWidget = CreateWidget<UUserWidget>(PC, DatabaseWidgetClass);
		if (DBWidget)
		{
			DBWidget->AddToViewport();
			this->RemoveFromParent();
		}
	}
}

void UErrorWidget::ShowSpeechBubble()
{
	if (SpeechBubbleBackground)
	{
		SpeechBubbleBackground->SetVisibility(ESlateVisibility::Visible);
		SpeechBubbleText->SetVisibility(ESlateVisibility::Visible);
		GhostImage->SetVisibility(ESlateVisibility::Visible);
	}
}
