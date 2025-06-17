// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/InfoWidget.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void UInfoWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UInfoWidget::OnBackClicked);
	}
}

void UInfoWidget::OnBackClicked()
{
	if (DatabaseWidgetClass)
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			UUserWidget* DBWidget = CreateWidget<UUserWidget>(PC, DatabaseWidgetClass);
			if (DBWidget)
			{
				DBWidget->AddToViewport();
				this->RemoveFromParent();
			}
		}
	}
}
