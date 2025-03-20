// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoldMinigame.h"
#include "MoldTutorial.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UMoldTutorial : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void StartGame();
};
