// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldGameMode.h"
#include "Mold/MoldPlayerController.h"

AMoldGameMode::AMoldGameMode()
{
	UE_LOG(LogTemp, Warning, TEXT("MoldGameMode Constructor Executed"));
	PlayerControllerClass = AMoldPlayerController::StaticClass();

	DefaultPawnClass = nullptr;
}
