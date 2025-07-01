// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/MailWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Character/ArchiveGameInstance.h"

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
}
