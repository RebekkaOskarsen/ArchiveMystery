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

	if (EditableTextBox_PlayerName)
	{
		EditableTextBox_PlayerName->OnTextCommitted.AddDynamic(this, &ULoginWidget::OnNameCommitted);
	}

	if (EditableTextBox_PlayerName)
	{
		EditableTextBox_PlayerName->SetUserFocus(GetOwningPlayer());
	}
}

void ULoginWidget::OnLoginClicked()
{
	FString PlayerName = EditableTextBox_PlayerName->GetText().ToString().TrimStartAndEnd();
	UE_LOG(LogTemp, Warning, TEXT("PlayerName: '%s'"), *PlayerName);

	if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		GI->PlayerName = PlayerName;
	}

	if (!EditableTextBox_PlayerName || !Text_ErrorMessage) return;

	if (PlayerName.IsEmpty())
	{
		Text_ErrorMessage->SetVisibility(ESlateVisibility::Visible);
		return;
	}

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

void ULoginWidget::OnNameCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		OnLoginClicked();
	}
}


