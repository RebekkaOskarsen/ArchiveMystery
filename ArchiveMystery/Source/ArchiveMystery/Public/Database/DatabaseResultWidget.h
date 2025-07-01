// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DatabaseResultWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UDatabaseResultWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PlayerName_Result;
};
