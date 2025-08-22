// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/CompletionMessageWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UCompletionMessageWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (Button_ReturnToMenu)
    {
        Button_ReturnToMenu->OnClicked.AddDynamic(this, &UCompletionMessageWidget::OnReturnToMenuClicked);
    }
}

void UCompletionMessageWidget::OnReturnToMenuClicked()
{

    UGameplayStatics::OpenLevel(GetWorld(), FName("Archive-Mystery"));
}