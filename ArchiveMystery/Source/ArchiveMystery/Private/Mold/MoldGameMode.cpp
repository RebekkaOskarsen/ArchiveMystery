// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldGameMode.h"
#include "Mold/MoldPlayerController.h"

AMoldGameMode::AMoldGameMode()
{
	PlayerControllerClass = AMoldPlayerController::StaticClass();

	DefaultPawnClass = nullptr;
}
