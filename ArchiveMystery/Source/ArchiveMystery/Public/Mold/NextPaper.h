// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoldMinigame.h"
#include "NextPaper.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UNextPaper : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void OnArrowClicked(); //Button click

protected:
	virtual void NativeConstruct() override;
};
