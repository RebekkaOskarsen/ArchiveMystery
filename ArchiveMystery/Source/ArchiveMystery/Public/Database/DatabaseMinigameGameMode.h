// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DatabaseMinigameGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API ADatabaseMinigameGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> DatabaseWidgetClass;
};
