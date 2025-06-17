// Fill out your copyright notice in the Description page of Project Settings.


#include "Database/DatabaseMinigameGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void ADatabaseMinigameGameMode::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC && DatabaseWidgetClass)
	{
		UUserWidget* Widget = CreateWidget<UUserWidget>(PC, DatabaseWidgetClass);
		if (Widget)
		{
			Widget->AddToViewport();
			PC->SetInputMode(FInputModeUIOnly());
			PC->bShowMouseCursor = true;
		}
	}
}