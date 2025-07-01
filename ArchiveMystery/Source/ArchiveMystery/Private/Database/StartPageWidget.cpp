// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/StartPageWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Character/ArchiveGameInstance.h"

void UStartPageWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Text_PlayerName)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			FString Message = FString::Printf(TEXT("You are logged in as: %s"), *GI->PlayerName);
			Text_PlayerName->SetText(FText::FromString(Message));
		}
	}
}
