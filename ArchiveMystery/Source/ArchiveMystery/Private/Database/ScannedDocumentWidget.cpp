// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/ScannedDocumentWidget.h"

#include "Components/Button.h"
#include "Database/MailWidget.h"

void UScannedDocumentWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (Button_BackToMail)
    {
        Button_BackToMail->OnClicked.AddDynamic(this, &UScannedDocumentWidget::OnBackToMailClicked);
    }
}

void UScannedDocumentWidget::OnBackToMailClicked()
{
    RemoveFromParent();

    if (ParentMailWidget)
    {
        ParentMailWidget->ShowSendButton();
    }
}
