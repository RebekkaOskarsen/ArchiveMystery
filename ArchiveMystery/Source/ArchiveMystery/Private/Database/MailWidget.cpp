// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/MailWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Character/ArchiveGameInstance.h"
#include "Database/ScannedDocumentWidget.h"

void UMailWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Text_PlayerName_Mail)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			FString Message = FString::Printf(TEXT("You are logged in as: %s"), *GI->PlayerName);
			Text_PlayerName_Mail->SetText(FText::FromString(Message));
		}
	}

    if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
    {
        if (GI->bReadyToScanFolderDocuments)
        {
            if (Button_SeeScannedDocuments)
            {
                Button_SeeScannedDocuments->SetVisibility(ESlateVisibility::Visible);
                Button_SeeScannedDocuments->SetIsEnabled(true);
            }
        }
        else
        {
            if (Button_SeeScannedDocuments)
            {
                Button_SeeScannedDocuments->SetVisibility(ESlateVisibility::Hidden);
                Button_SeeScannedDocuments->SetIsEnabled(false);
            }
        }
    }

    if (Button_SeeScannedDocuments)
    {
        Button_SeeScannedDocuments->OnClicked.AddDynamic(this, &UMailWidget::OnSeeScannedDocumentsClicked);
    }

    if (Button_Send)
    {
        Button_Send->OnClicked.AddDynamic(this, &UMailWidget::OnSendButtonClicked);
    }
}

void UMailWidget::OnSeeScannedDocumentsClicked()
{
    if (ScannedDocumentWidgetInstance)
    {
        return;
    }

    if (ScannedDocumentWidgetClass)
    {
        UUserWidget* NewWidget = CreateWidget<UUserWidget>(GetWorld(), ScannedDocumentWidgetClass);
        if (NewWidget)
        {
            UScannedDocumentWidget* ScannedWidget = Cast<UScannedDocumentWidget>(NewWidget);
            if (ScannedWidget)
            {
                ScannedWidget->ParentMailWidget = this;
            }

            ScannedDocumentWidgetInstance = NewWidget;
            ScannedDocumentWidgetInstance->AddToViewport();
        }
    }
}

void UMailWidget::ShowSendButton()
{
    if (Button_Send)
    {
        Button_Send->SetVisibility(ESlateVisibility::Visible);
    }
}

void UMailWidget::OnSendButtonClicked()
{

    if (CompletionMessageWidgetClass)
    {
        UUserWidget* CompletionMessage = CreateWidget<UUserWidget>(GetWorld(), CompletionMessageWidgetClass);
        if (CompletionMessage)
        {
            CompletionMessage->AddToViewport();
            RemoveFromParent(); 
        }
    }
}
