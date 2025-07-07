// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/DatabaseResultWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Character/ArchiveGameInstance.h"

void UDatabaseResultWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Text_PlayerName_Result)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			FString Message = FString::Printf(TEXT("You are logged in as: %s"), *GI->PlayerName);
			Text_PlayerName_Result->SetText(FText::FromString(Message));
		}
	}

	if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
	{
		GI->bDatabaseMinigameComplete = true;
	}
}
