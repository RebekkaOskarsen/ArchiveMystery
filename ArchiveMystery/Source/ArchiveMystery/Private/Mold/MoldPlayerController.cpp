// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldPlayerController.h"
#include "Mold/Mold.h"
#include "Engine/World.h"
#include "Mold/BrushSelectionWidget.h"
#include "Blueprint/UserWidget.h"

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

    // Load and display the UI widget
    TSubclassOf<UUserWidget> BrushSelectionClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Minigame-Mold/Blueprint/UI/WBP_BrushSelectionWidget.WBP_BrushSelectionWidget_C"));

    if (!BrushSelectionClass)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load WBP_BrushSelection UI Blueprint! Check the path."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("BrushSelectionClass loaded successfully!"));

    // Create the widget
    UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(this, BrushSelectionClass);

    if (!WidgetInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create UI Widget!"));
        return;
    }

    // Add it to the viewport
    WidgetInstance->AddToViewport();
    BrushSelectionUI = Cast<UBrushSelectionWidget>(WidgetInstance);

    if (BrushSelectionUI)
    {
        UE_LOG(LogTemp, Warning, TEXT("BrushSelection UI successfully created and assigned!"));
        UpdateBrushUI(true); // Start with small brush selected
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to cast UI Widget to BrushSelectionWidget!"));
    }
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

void AMoldPlayerController::UpdateBrushUI(bool bIsSmallBrush)
{
    if (BrushSelectionUI)
    {
        BrushSelectionUI->UpdateBrushSelection(bIsSmallBrush);
        UE_LOG(LogTemp, Warning, TEXT("Brush UI Updated - Small Brush: %s"), bIsSmallBrush ? TEXT("Selected") : TEXT("Not Selected"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BrushSelectionUI is null!"));
    }
}

void AMoldPlayerController::UseSmallBrush()
{
    UE_LOG(LogTemp, Warning, TEXT("Switching to Small Brush"));
    SpawnBrush(EBrushSize::Small);
    UpdateBrushUI(true); // Select Small Brush
}

void AMoldPlayerController::UseBigBrush()
{
    UE_LOG(LogTemp, Warning, TEXT("Switching to Big Brush"));
    SpawnBrush(EBrushSize::Big);
    UpdateBrushUI(false); // Select Big Brush
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

