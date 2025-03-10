// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldPlayerController.h"
#include "Mold/Mold.h"
#include "Engine/World.h"

AMoldPlayerController::AMoldPlayerController()
{
    UE_LOG(LogTemp, Warning, TEXT("MoldPlayerController is now active!"));

    bShowMouseCursor = true; // Show mouse cursor
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;
}

void AMoldPlayerController::BeginPlay()
{
    Super::BeginPlay();

}

void AMoldPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("SelectSmallBrush", IE_Pressed, this, &AMoldPlayerController::UseSmallBrush);
    InputComponent->BindAction("SelectBigBrush", IE_Pressed, this, &AMoldPlayerController::UseBigBrush);

    UE_LOG(LogTemp, Warning, TEXT("SetupInputComponent executed successfully!"));
}

void AMoldPlayerController::SpawnBrush(EBrushSize BrushSize)
{
    if (MoldBrush)
    {
        MoldBrush->Destroy();
        MoldBrush = nullptr;
    }

    // Load the brush blueprint
    UClass* BrushBlueprint = LoadClass<AActor>(nullptr, TEXT("/Game/Minigame-Mold/Blueprint/BP_MoldBrush.BP_MoldBrush_C"));
    if (BrushBlueprint)
    {
        MoldBrush = GetWorld()->SpawnActor<AMoldBrush>(BrushBlueprint);
        if (MoldBrush)
        {
            MoldBrush->SetBrushSize(BrushSize);
        }
    }
}

void AMoldPlayerController::UseSmallBrush()
{
    UE_LOG(LogTemp, Warning, TEXT("Switching to Small Brush"));
    SpawnBrush(EBrushSize::Small);
}

void AMoldPlayerController::UseBigBrush()
{
    UE_LOG(LogTemp, Warning, TEXT("Switching to Big Brush"));
    SpawnBrush(EBrushSize::Big);
}

void AMoldPlayerController::BrushMold()
{
    FHitResult Hit;
    bool bHitSuccess = GetHitResultUnderCursor(ECC_Visibility, false, Hit);

    if (bHitSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("BrushMold: Hit something at location: %s"), *Hit.Location.ToString());

        AActor* HitActor = Hit.GetActor();
        if (HitActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("BrushMold: Hit actor: %s"), *HitActor->GetName());

            AMold* HitMold = Cast<AMold>(HitActor);
            if (HitMold && MoldBrush)
            {
                UE_LOG(LogTemp, Warning, TEXT("BrushMold: Hit a mold! Calling OnBrushed."));
                HitMold->OnBrushed(MoldBrush->GetBrushSize());
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("BrushMold: Not a mold actor!"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("BrushMold: Hit nothing!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("BrushMold: No hit detected!"));
    }
}

