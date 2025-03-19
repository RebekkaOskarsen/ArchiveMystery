// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/NextPaper.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"

void UNextPaper::OnArrowClicked()
{
    // Find the MoldMinigame actor in the level
    AMoldMinigame* Minigame = Cast<AMoldMinigame>(UGameplayStatics::GetActorOfClass(GetWorld(), AMoldMinigame::StaticClass()));

    if (Minigame)
    {
        Minigame->SwitchToPaper2();  // Call the function to switch to Paper 2
        RemoveFromParent();  // Hide the Arrow UI
        UE_LOG(LogTemp, Warning, TEXT("Arrow clicked - Switching to Paper 2!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find BP_MoldMinigame!"));
    }
}

void UNextPaper::NativeConstruct()
{
    Super::NativeConstruct();

    // Bind the button click event
    if (UButton* NextPaperButton = Cast<UButton>(GetWidgetFromName(TEXT("NextPaperButton"))))
    {
        NextPaperButton->OnClicked.AddDynamic(this, &UNextPaper::OnArrowClicked);
        UE_LOG(LogTemp, Warning, TEXT("Arrow button found and bound to event!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("NextPaperButton not found in WBP_NextPaperArrow!"));
    }
}
