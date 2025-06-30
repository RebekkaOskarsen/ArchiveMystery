// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/InfoBookWidget.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void UInfoBookWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (NextButton) NextButton->OnClicked.AddDynamic(this, &UInfoBookWidget::OnNextClicked);
	if (PrevButton) PrevButton->OnClicked.AddDynamic(this, &UInfoBookWidget::OnPrevClicked);
	if (BackToDatabaseButton) BackToDatabaseButton->OnClicked.AddDynamic(this, &UInfoBookWidget::OnBackToDatabaseClicked);

	UpdatePage();
}

void UInfoBookWidget::OnNextClicked()
{
	if (CurrentPageIndex < PageSwitcher->GetNumWidgets() - 1)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), FlipSound);

		PlayAnimation(FlipPageAnim);

		// Vent til halvveis i animasjonen før vi bytter side
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				CurrentPageIndex++;
				UpdatePage();
			}, 0.2f, false);
	}
}


void UInfoBookWidget::OnPrevClicked()
{
	if (CurrentPageIndex > 0)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), FlipSound);

		PlayAnimation(FlipPageAnim);

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				CurrentPageIndex--;
				UpdatePage();
			}, 0.2f, false);
	}
}

void UInfoBookWidget::OnBackToDatabaseClicked()
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

void UInfoBookWidget::UpdatePage()
{
	if (PageSwitcher)
	{
		PageSwitcher->SetActiveWidgetIndex(CurrentPageIndex);
	}

	// Skjul Forrige/Neste-knapper på første/siste side
	if (PrevButton) PrevButton->SetVisibility(CurrentPageIndex == 0 ? ESlateVisibility::Hidden : ESlateVisibility::Visible);
	if (NextButton) NextButton->SetVisibility(CurrentPageIndex == PageSwitcher->GetNumWidgets() - 1 ? ESlateVisibility::Hidden : ESlateVisibility::Visible);
}