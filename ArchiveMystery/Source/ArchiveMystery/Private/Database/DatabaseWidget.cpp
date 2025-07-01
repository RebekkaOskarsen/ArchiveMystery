// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/DatabaseWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"


FReply UDatabaseWidget::NativeOnPreviewKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{

	const FKey PressedKey = InKeyEvent.GetKey();
	if (PressedKey == EKeys::Tab)
	{
		if (SelectInputBox->HasKeyboardFocus())
		{
			FromInputBox->SetKeyboardFocus();
			return FReply::Handled();
		}
		else if (FromInputBox->HasKeyboardFocus())
		{
			WhereInputBox->SetKeyboardFocus();
			return FReply::Handled();
		}
		else if (WhereInputBox->HasKeyboardFocus())
		{
			LikeInputBox->SetKeyboardFocus();
			return FReply::Handled();
		}
		else if (LikeInputBox->HasKeyboardFocus())
		{
			AndInputBox->SetKeyboardFocus();
			return FReply::Handled();
		}
		else if (AndInputBox->HasKeyboardFocus())
		{
			SubmitButton->SetKeyboardFocus();
			return FReply::Handled();
		}
	}
	return Super::NativeOnPreviewKeyDown(InGeometry, InKeyEvent);
}

void UDatabaseWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (OpenInfoButton)
	{
		OpenInfoButton->OnClicked.AddDynamic(this, &UDatabaseWidget::OnOpenInfoClicked);
	}

	if (SubmitButton)
	{
		SubmitButton->OnClicked.AddDynamic(this, &UDatabaseWidget::OnSubmitClicked);
	}

	if (SelectInputBox)
	{
		SelectInputBox->SetUserFocus(GetOwningPlayer());
	}

	if (Text_PlayerName_Database)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			FString Message = FString::Printf(TEXT("You are logged in as: %s"), *GI->PlayerName);
			Text_PlayerName_Database->SetText(FText::FromString(Message));
		}
	}

	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		if (SelectInputBox) SelectInputBox->SetText(FText::FromString(GameInstance->SavedSelect));
		if (FromInputBox)   FromInputBox->SetText(FText::FromString(GameInstance->SavedFrom));
		if (WhereInputBox)  WhereInputBox->SetText(FText::FromString(GameInstance->SavedWhere));
		if (LikeInputBox)   LikeInputBox->SetText(FText::FromString(GameInstance->SavedLike));
		if (AndInputBox)    AndInputBox->SetText(FText::FromString(GameInstance->SavedAnd));
	}

}

void UDatabaseWidget::OnSubmitClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("OnOpenInfoClicked called"));
	if (!SelectInputBox || !FromInputBox || !WhereInputBox || !LikeInputBox || !AndInputBox)
		return;

	auto CleanText = [](const FString& In)
		{
			FString Out = In.TrimStartAndEnd().ToLower();
			Out = Out.Replace(TEXT(" "), TEXT(""));
			Out = Out.Replace(TEXT("'"), TEXT(""));
			Out = Out.Replace(TEXT("\""), TEXT(""));
			return Out;
		};

	// Hent og rens input
	const FString SelectText = CleanText(SelectInputBox->GetText().ToString());
	const FString FromText = CleanText(FromInputBox->GetText().ToString());
	const FString WhereText = CleanText(WhereInputBox->GetText().ToString());
	const FString LikeText = CleanText(LikeInputBox->GetText().ToString());
	const FString AndText = CleanText(AndInputBox->GetText().ToString());

	// Korrekte svar – også renset for mellomrom
	const FString ExpectedSelect = TEXT("document_name,document_content");
	const FString ExpectedFrom = TEXT("documents");
	const FString ExpectedWhere = TEXT("documentname%buildingspecifications%");
	const FString ExpectedAnd = TEXT("company=treplankenas");

	// Sammenlign
	const bool bSelectOK = (SelectText == ExpectedSelect);
	const bool bFromOK = (FromText == ExpectedFrom);
	const bool bWhereOK = (WhereText == TEXT("documentname"));
	const bool bLikeOK = (LikeText == TEXT("%buildingspecifications%"));
	const bool bAndOK = (AndText == ExpectedAnd);

	if (bSelectOK && bFromOK && bWhereOK && bLikeOK && bAndOK)
	{

		// Eventuelt: vis neste widget
		if (ResultWidgetClass)
		{
			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				UUserWidget* ResultWidget = CreateWidget<UUserWidget>(PC, ResultWidgetClass);
				if (ResultWidget)
				{
					ResultWidget->AddToViewport();
					this->RemoveFromParent();
				}
			}
		}
	}
	else
	{
		UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
		if (GameInstance && SelectInputBox && FromInputBox && WhereInputBox && LikeInputBox && AndInputBox)
		{
			GameInstance->SavedSelect = SelectInputBox->GetText().ToString();
			GameInstance->SavedFrom = FromInputBox->GetText().ToString();
			GameInstance->SavedWhere = WhereInputBox->GetText().ToString();
			GameInstance->SavedLike = LikeInputBox->GetText().ToString();
			GameInstance->SavedAnd = AndInputBox->GetText().ToString();
		}

		if (ErrorWidgetClass)
		{
			
			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC)
			{
				UUserWidget* ErrorWidget = CreateWidget<UUserWidget>(PC, ErrorWidgetClass);
				if (ErrorWidget)
				{
					ErrorWidget->AddToViewport();
					this->RemoveFromParent();
				}
			}
		}
	}
}


void UDatabaseWidget::OnSelectTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	// Når spilleren trykker Enter i Select-feltet, flytt fokus til FROM-feltet
	if (CommitMethod == ETextCommit::OnEnter && FromInputBox)
	{
		FromInputBox->SetKeyboardFocus();
	}
}

void UDatabaseWidget::OnFromTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter && WhereInputBox)
	{
		WhereInputBox->SetKeyboardFocus();
	}
}

void UDatabaseWidget::OnWhereTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter && LikeInputBox)
	{
		LikeInputBox->SetKeyboardFocus();
	}
}

void UDatabaseWidget::OnLikeTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter && AndInputBox)
	{
		AndInputBox->SetKeyboardFocus();
	}
}

void UDatabaseWidget::OnAndTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		OnSubmitClicked(); // Submit spørringen
	}
}

void UDatabaseWidget::OnOpenInfoClicked()
{
	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance && SelectInputBox && FromInputBox && WhereInputBox && LikeInputBox && AndInputBox)
	{
		GameInstance->SavedSelect = SelectInputBox->GetText().ToString();
		GameInstance->SavedFrom = FromInputBox->GetText().ToString();
		GameInstance->SavedWhere = WhereInputBox->GetText().ToString();
		GameInstance->SavedLike = LikeInputBox->GetText().ToString();
		GameInstance->SavedAnd = AndInputBox->GetText().ToString();
	}

	if (InfoWidgetClass)
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			UUserWidget* InfoWidget = CreateWidget<UUserWidget>(PC, InfoWidgetClass);
			if (InfoWidget)
			{
				InfoWidget->AddToViewport();
				this->RemoveFromParent();

			}

		}

	}

}

