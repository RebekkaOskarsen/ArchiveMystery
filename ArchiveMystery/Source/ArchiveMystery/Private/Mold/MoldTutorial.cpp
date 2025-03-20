// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldTutorial.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/MoldMinigame.h"
#include "Mold/MoldPlayerController.h"

void UMoldTutorial::StartGame()
{
    AMoldMinigame* Minigame = Cast<AMoldMinigame>(UGameplayStatics::GetActorOfClass(GetWorld(), AMoldMinigame::StaticClass()));
    AMoldPlayerController* PlayerController = Cast<AMoldPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

    if (Minigame)
    {
        Minigame->EnableBrushing();
    }

    if (PlayerController)
    {
        PlayerController->ShowBrushUI();
    }

    RemoveFromParent();
}