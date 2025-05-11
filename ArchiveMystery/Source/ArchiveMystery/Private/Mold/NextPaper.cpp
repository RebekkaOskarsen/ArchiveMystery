// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/NextPaper.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"

void UNextPaper::OnArrowClicked()
{
    AMoldMinigame* Minigame = Cast<AMoldMinigame>(UGameplayStatics::GetActorOfClass(GetWorld(), AMoldMinigame::StaticClass()));

    if (Minigame)
    {
        Minigame->SwitchToPaper2();
        RemoveFromParent();
    }
}

void UNextPaper::NativeConstruct()
{
    Super::NativeConstruct();

    if (UButton* NextPaperButton = Cast<UButton>(GetWidgetFromName(TEXT("NextPaperButton"))))
    {
        NextPaperButton->OnClicked.AddDynamic(this, &UNextPaper::OnArrowClicked);
    }
}
