// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldPlayerController.h"
#include "Mold/Mold.h"
#include "Engine/World.h"
#include "Mold/BrushSelectionWidget.h"
#include "Blueprint/UserWidget.h"

AMoldPlayerController::AMoldPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;
}

void AMoldPlayerController::BeginPlay()
{
    Super::BeginPlay();

    HideBrushUI();
}

void AMoldPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("SelectSmallBrush", IE_Pressed, this, &AMoldPlayerController::UseSmallBrush);
    InputComponent->BindAction("SelectBigBrush", IE_Pressed, this, &AMoldPlayerController::UseBigBrush);
}

void AMoldPlayerController::ShowBrushUI()
{
    if (!BrushSelectionUI)
    {
        TSubclassOf<UUserWidget> BrushSelectionClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Minigame-Mold/Blueprint/UI/WBP_BrushSelectionWidget.WBP_BrushSelectionWidget_C"));

        if (!BrushSelectionClass)
        {
            return;
        }

        UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(this, BrushSelectionClass);
        if (!WidgetInstance)
        {
            return;
        }

        WidgetInstance->AddToViewport();
        BrushSelectionUI = Cast<UBrushSelectionWidget>(WidgetInstance);
    }
}

void AMoldPlayerController::HideBrushUI()
{
    if (BrushSelectionUI)
    {
        BrushSelectionUI->RemoveFromParent();
        BrushSelectionUI = nullptr;
    }
}

void AMoldPlayerController::SpawnBrush(EBrushSize BrushSize)
{
    if (MoldBrush)
    {
        MoldBrush->Destroy();
        MoldBrush = nullptr;
    }

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
    if (!BrushSelectionUI)
    {
        ShowBrushUI();
    }

    SpawnBrush(EBrushSize::Small);

    if (BrushSelectionUI)
    {
        BrushSelectionUI->UpdateBrushSelection(true);
    }
}

void AMoldPlayerController::UseBigBrush()
{
    if (!BrushSelectionUI)
    {
        ShowBrushUI();
    }

    SpawnBrush(EBrushSize::Big);

    if (BrushSelectionUI)
    {
        BrushSelectionUI->UpdateBrushSelection(false);
    }
}

void AMoldPlayerController::BrushMold()
{
    FHitResult Hit;
    bool bHitSuccess = GetHitResultUnderCursor(ECC_Visibility, false, Hit);

    if (bHitSuccess)
    {
        AActor* HitActor = Hit.GetActor();
        if (HitActor)
        {
            AMold* HitMold = Cast<AMold>(HitActor);
            if (HitMold && MoldBrush)
            {
                HitMold->OnBrushed(MoldBrush->GetBrushSize());
            }
        }
    }
}

void AMoldPlayerController::StartBrushCooldown(float Duration)
{
    bCanBrush = false;

    // Delay duration should match your brush sound length
    GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
        {
            FTimerHandle CooldownHandle;
            GetWorld()->GetTimerManager().SetTimer(
                CooldownHandle,
                [this]() { bCanBrush = true; },
                1.5f, // Adjust this to match the brush sound duration
                false
            );
        });
}
