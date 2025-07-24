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
                UE_LOG(LogTemp, Warning, TEXT("Knappen for scannede dokumenter er synlig."));
            }
        }
        else
        {
            if (Button_SeeScannedDocuments)
            {
                Button_SeeScannedDocuments->SetVisibility(ESlateVisibility::Hidden);
                Button_SeeScannedDocuments->SetIsEnabled(false);
                UE_LOG(LogTemp, Warning, TEXT("Knappen for scannede dokumenter er skjult."));
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
            UE_LOG(LogTemp, Warning, TEXT("ScannedDocument-widget vist."));
        }
    }
}

void UMailWidget::ShowSendButton()
{
    if (Button_Send)
    {
        Button_Send->SetVisibility(ESlateVisibility::Visible);
        UE_LOG(LogTemp, Warning, TEXT("Send-knappen er nå synlig."));
    }
}

void UMailWidget::OnSendButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Send-knapp trykket. Viser gratulasjons-widget."));

    if (CompletionMessageWidgetClass)
    {
        UUserWidget* CompletionMessage = CreateWidget<UUserWidget>(GetWorld(), CompletionMessageWidgetClass);
        if (CompletionMessage)
        {
            CompletionMessage->AddToViewport();
            RemoveFromParent(); // Skjul mail-widget
        }
    }
}
