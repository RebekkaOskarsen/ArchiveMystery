// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/LoginWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"
#include "Character/ArchiveGameInstance.h"
#include "Components/TextBlock.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Button_Login)
	{
		Button_Login->OnClicked.AddDynamic(this, &ULoginWidget::OnLoginClicked);
	}
}

void ULoginWidget::OnLoginClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Login button clicked!"));

	if (!EditableTextBox_PlayerName || !Text_ErrorMessage) return;

	FString PlayerName = EditableTextBox_PlayerName->GetText().ToString().TrimStartAndEnd();
	UE_LOG(LogTemp, Warning, TEXT("PlayerName: '%s'"), *PlayerName);
	if (PlayerName.IsEmpty())
	{
		// Vis feilmelding
		Text_ErrorMessage->SetVisibility(ESlateVisibility::Visible);
		return;
	}

	// Skjul eventuell tidligere feilmelding
	Text_ErrorMessage->SetVisibility(ESlateVisibility::Hidden);

	if (NextWidgetClass)
	{
		if (UUserWidget* Next = CreateWidget<UUserWidget>(GetWorld(), NextWidgetClass))
		{
			Next->AddToViewport();
		}
	}
	RemoveFromParent();
}

