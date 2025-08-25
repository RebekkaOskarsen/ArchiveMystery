// Fill out your copyright notice in the Description page of Project Settings.

#include "ShreddedPaper/Minigame.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"
#include <Character/ArchiveGameInstance.h>

#include "Blueprint/WidgetTree.h"


AMinigame::AMinigame()
{
    PrimaryActorTick.bCanEverTick = true;

    TopDownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    TopDownCamera->SetupAttachment(RootComponent);

    TopDownCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));
    TopDownCamera->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));

    bIsDragging = false;
    SelectedMesh = nullptr;

    DifficultyWidgetClass = LoadObject<UClass>(nullptr, TEXT("/Game/ShreddedPaper_minigame/Blueprints/WBP_DifficultySelect.WBP_DifficultySelect_C"));

    GameMenuWidgetClass = LoadObject<UClass>(nullptr, TEXT("/Game/ShreddedPaper_minigame/Blueprints/GameMenuWidget.GameMenuWidget_C"));

    PauseMenuWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/PauseMenu/WBP_PauseMenuMinigame.WBP_PauseMenuMinigame_C"));

    TimerWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/ShreddedPaper_minigame/Blueprints/WBP_Timer.WBP_Timer_C"));

    CutsceneWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Sequences/Movie_Cutscenes/Cutscene_1_Paper/W_Cutscene_1.W_Cutscene_1_C"));

    WhiteoutWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/Small_Quest_System/W_Whiteout.W_Whiteout_C"));

}

void AMinigame::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        PlayerController->Possess(this);
        EnableInput(PlayerController);

        InputComponent->BindKey(EKeys::Escape, IE_Pressed, this, &AMinigame::TogglePauseMenu);
    }


    SetActorLocation(FVector(0.0f, 0.0f, 150.0f));
    SetActorRotation(FRotator(-90.0f, 0.0f, 0.0f));

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->bShowMouseCursor = true;
        PC->bEnableClickEvents = true;
        PC->bEnableMouseOverEvents = true;
    }

    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(true);
        PaperSheetInitialTransform = PaperSheet->GetActorTransform();
    }

    CacheInitialTransforms();
    ShowTutorial();
    HideAllPaperStrips();


}

//Starts the game by removing the tutorial 
void AMinigame::StartGame()
{
    if (TutorialWidgetInstance)
    {
        TutorialWidgetInstance->RemoveFromViewport();
        TutorialWidgetInstance = nullptr;
    }

    ShowGameMenu();

    if (GameMenuWidgetInstance)
    {
        if (UButton* BackButton = Cast<UButton>(
            GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton"))))
        {
            BackButton->OnClicked.RemoveAll(this);
            BackButton->OnClicked.AddDynamic(this, &AMinigame::ShowIngameTutorial);
        }
    }

    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
    {
        PC->bShowMouseCursor = true;
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
    }
}

void AMinigame::ShowGameMenu()
{
    if (!GameMenuWidgetInstance && GameMenuWidgetClass)
    {
        GameMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), GameMenuWidgetClass);
        if (GameMenuWidgetInstance)
        {
            GameMenuWidgetInstance->AddToViewport();
        }
    }

    if (GameMenuWidgetInstance)
    {
        if (UButton* BackBtn = Cast<UButton>(GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton"))))
        {
            BackBtn->OnClicked.RemoveAll(this);            // ensure no stale binding
            BackBtn->OnClicked.AddDynamic(this, &AMinigame::ShowIngameTutorial);
        }

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
        {
            PC->bShowMouseCursor = true;
            FInputModeGameAndUI InputMode;
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            InputMode.SetWidgetToFocus(GameMenuWidgetInstance->TakeWidget());
            InputMode.SetHideCursorDuringCapture(false);
            PC->SetInputMode(InputMode);
        }
    }
}

// Shows the tutorial when the button is clicked 
void AMinigame::ShowTutorial()
{
    // Fjern GameMenu hvis den vises
    if (IsValid(GameMenuWidgetInstance))
    {
        GameMenuWidgetInstance->RemoveFromParent();
        GameMenuWidgetInstance = nullptr;
    }

    // Fjern forrige tutorial om den finnes
    if (IsValid(TutorialWidgetInstance))
    {
        TutorialWidgetInstance->RemoveFromParent();
        TutorialWidgetInstance = nullptr;
    }

    // Lag og vis en ny tutorial-widget
    if (TutorialWidgetClass && GetWorld())
    {
        TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
        if (TutorialWidgetInstance)
        {
            TutorialWidgetInstance->AddToViewport();

            // Sjekk om knappen finnes før binding
            if (UButton* StartBtn = Cast<UButton>(TutorialWidgetInstance->GetWidgetFromName(TEXT("StartGameButton"))))
            {
                StartBtn->OnClicked.AddUniqueDynamic(this, &AMinigame::OnTutorialContinue); // Bruk AddUniqueDynamic!
            }
        }
    }

    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
    {
        PC->bShowMouseCursor = true;
        FInputModeUIOnly InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        PC->SetInputMode(InputMode);
    }
}

// Recursively finds and returns the root parent of a paperstrip
FString AMinigame::FindParent(const FString& Node)
{
    if (!ParentMap.Contains(Node))
    {
        ParentMap.Add(Node, Node);
    }

    if (ParentMap[Node] != Node)
    {
        ParentMap[Node] = FindParent(ParentMap[Node]);
    }

    return ParentMap[Node];
}

//Merges two paperstrip groups by updateing the parent map 
void AMinigame::MergeGroups(const FString& NodeA, const FString& NodeB)
{
    FString RootA = FindParent(NodeA);
    FString RootB = FindParent(NodeB);

    if (RootA == RootB)
    {
        return;
    }

    ParentMap[RootB] = RootA;
}

//Checks if two paperstrips are correctly snapped together 
void AMinigame::ValidateGroups()
{
    TMap<FString, int32> GroupCounts;

    // Gå bare gjennom aktive biter
    for (const FString& Tag : ActivePaperTags)
    {
        FString Root = FindParent(Tag);
        GroupCounts.FindOrAdd(Root)++;
    }

    for (const TPair<FString, int32>& Pair : GroupCounts)
    {
        UE_LOG(LogTemp, Warning, TEXT("Group %s has %d pieces"), *Pair.Key, Pair.Value);
    }

    if (GroupCounts.Num() == 1 && GroupCounts.begin()->Value == ExpectedPieceCount)
    {
        OnAllPiecesSnapped();
    }
}

void AMinigame::TogglePauseMenu()
{
    auto* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (!PC) return;

    bGamePaused = !bGamePaused;
    PC->SetPause(bGamePaused);

    if (bGamePaused)
    {
        if (!PauseMenuWidget && PauseMenuWidgetClass)
        {
            PauseMenuWidget = CreateWidget<UUserWidget>(PC, PauseMenuWidgetClass);
            PauseMenuWidget->AddToViewport();
            if (auto* Btn = Cast<UButton>(PauseMenuWidget->GetWidgetFromName(TEXT("ResumeButton"))))
                Btn->OnClicked.AddDynamic(this, &AMinigame::OnResumeClicked);
            if (auto* Btn = Cast<UButton>(PauseMenuWidget->GetWidgetFromName(TEXT("ExitGameButton"))))
                Btn->OnClicked.AddDynamic(this, &AMinigame::OnExitClicked);
        }

        PC->bShowMouseCursor = true;
        FInputModeUIOnly UI;
        UI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        UI.SetWidgetToFocus(PauseMenuWidget->TakeWidget());
        PC->SetInputMode(UI);
    }
    else
    {
        if (PauseMenuWidget) PauseMenuWidget->RemoveFromParent(), PauseMenuWidget = nullptr;

        PC->bShowMouseCursor = true;
        PC->bEnableClickEvents = true;
        PC->bEnableMouseOverEvents = true;

        FInputModeGameOnly GameInput;
        GameInput.SetConsumeCaptureMouseDown(false);
        PC->SetInputMode(GameInput);

        PC->FlushPressedKeys();
    }
}

void AMinigame::OnResumeClicked()
{
    TogglePauseMenu();
}

void AMinigame::OnExitClicked()
{
    if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(
        UGameplayStatics::GetGameInstance(this)))
    {
        GI->SaveQuestLogData();
    }
    UGameplayStatics::OpenLevel(this, FName("Archive-Mystery"));
}

void AMinigame::CacheInitialTransforms()
{
    InitialTransforms.Empty();

    for (TActorIterator<AActor> It(GetWorld()); It; ++It)
    {
        AActor* A = *It;

        if (A->ActorHasTag("Draggable") ||
            (A->Tags.Num() > 0 && A->Tags[0].ToString().StartsWith("paperstrip")))
        {
            if (A->Tags.Num() > 0)
            {
                const FString Key = A->Tags[0].ToString();
                InitialTransforms.FindOrAdd(Key) = A->GetActorTransform();
            }
        }
    }
}

void AMinigame::ResetAllPaperStripsToInitial()
{
    for (const TPair<FString, FTransform>& Pair : InitialTransforms)
    {
        const FString& TagStr = Pair.Key;
        const FTransform& T = Pair.Value;

        for (TActorIterator<AActor> It(GetWorld()); It; ++It)
        {
            AActor* A = *It;
            if (A->ActorHasTag(*TagStr))
            {
                A->SetActorTransform(T, false, nullptr, ETeleportType::TeleportPhysics);

                // zero any physics drift (if used)
                if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(A->GetRootComponent()))
                {
                    Prim->SetPhysicsLinearVelocity(FVector::ZeroVector);
                    Prim->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
                }

                // keep them hidden until ActivatePaperSetForDifficulty() runs
                A->SetActorHiddenInGame(true);
                A->SetActorEnableCollision(false);
                break;
            }
        }
    }

    // reset sheet + fade
    if (PaperSheet)
    {
        PaperSheet->SetActorTransform(PaperSheetInitialTransform);
        PaperSheet->SetActorHiddenInGame(true);
        PaperSheet->SetActorEnableCollision(false);
    }
    bIsFadingIn = false;
    CurrentFadeTime = 0.f;
}

void AMinigame::ResetMinigameState()
{
    bIsDragging = false;
    SelectedMesh = nullptr;

    // clear snapping / union-find state
    ParentMap.Empty();
    SnappedPieces.Empty();
    GroupMap.Empty();
    LockedPaperstrips.Empty();

    // active tags will be repopulated by ActivatePaperSetForDifficulty()
    ActivePaperTags.Empty();
}

//Is handling the dragging of the paperstrips and the snapping logic during eacg frame 
void AMinigame::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsDragging && SelectedMesh)
    {
        FVector MousePosition, MouseDirection;
        if (GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(MousePosition, MouseDirection))
        {
            float Sensitivity = 15.5f;
            FVector AdjustedMousePosition = MousePosition * Sensitivity;

            FVector NewLocation = AdjustedMousePosition + DragOffset;

            NewLocation.Z = SelectedMesh->GetComponentLocation().Z;

            FString RootTag = FindParent(SelectedMesh->GetOwner()->Tags[0].ToString());
            FVector GroupOffset = NewLocation - SelectedMesh->GetComponentLocation();

            for (const TPair<FString, FString>& Pair : ParentMap)
            {
                if (FindParent(Pair.Key) == RootTag)
                {
                    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
                    {
                        if (ActorItr->ActorHasTag(*Pair.Key))
                        {
                            if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(ActorItr->FindComponentByClass<UStaticMeshComponent>()))
                            {
                                FVector CurrentLocation = Mesh->GetComponentLocation();
                                Mesh->SetWorldLocation(CurrentLocation + GroupOffset);
                            }
                        }
                    }
                }
            }
        }

        AActor* ParentActor = SelectedMesh->GetOwner();
        if (ParentActor)
        {
            FString SelectedTag;
            if (ParentActor->Tags.Num() > 0)
            {
                SelectedTag = ParentActor->Tags[0].ToString();
            }

            FString SelectedGroupRoot = FindParent(SelectedTag);

            for (TActorIterator<AActor> TargetActorItr(GetWorld()); TargetActorItr; ++TargetActorItr)
            {
                if (TargetActorItr->Tags.Num() > 0)
                {
                    FString TargetTag = TargetActorItr->Tags[0].ToString();
                    FString TargetGroupRoot = FindParent(TargetTag);

                    if (SelectedGroupRoot == TargetGroupRoot)
                    {
                        continue;
                    }

                    bool ShouldSnap = false;
                    FVector SnapOffset = FVector::ZeroVector;

                    for (const TPair<FString, FString>& Pair : ParentMap)
                    {
                        if (FindParent(Pair.Key) == SelectedGroupRoot)
                        {
                            for (const TPair<FString, FString>& TargetPair : ParentMap)
                            {
                                if (FindParent(TargetPair.Key) == TargetGroupRoot)
                                {
                                    if (SnappingRules.Contains(Pair.Key) && SnappingRules[Pair.Key].Contains(TargetPair.Key))
                                    {
                                        for (TActorIterator<AActor> SelectedActorItr(GetWorld()); SelectedActorItr; ++SelectedActorItr)
                                        {
                                            if (SelectedActorItr->ActorHasTag(*Pair.Key))
                                            {
                                                for (TActorIterator<AActor> TargetActor(GetWorld()); TargetActor; ++TargetActor)
                                                {
                                                    if (TargetActor->ActorHasTag(*TargetPair.Key))
                                                    {
                                                        FVector SelectedLocation = SelectedActorItr->GetActorLocation();
                                                        FVector TargetLocation = TargetActor->GetActorLocation();
                                                        float Distance = FVector::Dist(SelectedLocation, TargetLocation);

                                                        if (Distance <= SnapThreshold)
                                                        {

                                                            ShouldSnap = true;
                                                            SnapOffset = TargetLocation - SelectedLocation;
                                                            break;
                                                        }
                                                    }
                                                }
                                                if (ShouldSnap) break;
                                            }
                                        }
                                        if (ShouldSnap) break;
                                    }
                                }
                            }
                            if (ShouldSnap) break;
                        }
                    }

                    if (ShouldSnap)
                    {
                        PlaySnapSound();
                        PlaySparkEffect(SelectedMesh->GetComponentLocation());
                        for (const TPair<FString, FString>& Pair : ParentMap)
                        {
                            if (FindParent(Pair.Key) == SelectedGroupRoot)
                            {
                                for (TActorIterator<AActor> GroupItr(GetWorld()); GroupItr; ++GroupItr)
                                {
                                    if (GroupItr->ActorHasTag(*Pair.Key))
                                    {
                                        UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(GroupItr->FindComponentByClass<UStaticMeshComponent>());
                                        if (Mesh)
                                        {
                                            FVector CurrentLocation = Mesh->GetComponentLocation();
                                            Mesh->SetWorldLocation(CurrentLocation + SnapOffset);
                                        }
                                    }
                                }
                            }
                        }

                        MergeGroups(SelectedTag, TargetTag);

                        ValidateGroups();

                        return;
                    }
                }
            }
        }
    }

    if (bIsFadingIn && PaperSheet)
    {
        CurrentFadeTime += DeltaTime;

        float Alpha = FMath::Clamp(CurrentFadeTime / FadeDuration, 0.0f, 1.0f);

        for (UActorComponent* Component : PaperSheet->GetComponents())
        {
            if (UMeshComponent* MeshComponent = Cast<UMeshComponent>(Component))
            {
                UMaterialInstanceDynamic* DynamicMaterial = MeshComponent->CreateAndSetMaterialInstanceDynamic(0);
                if (DynamicMaterial)
                {
                    DynamicMaterial->SetScalarParameterValue("Opacity", Alpha);
                }
            }
        }

        if (CurrentFadeTime >= FadeDuration)
        {
            bIsFadingIn = false;
        }
    }
}

//When all the paperstrips are snapped together, the paperstrips actors are destroyed and the paper sheet is shown 
void AMinigame::OnAllPiecesSnapped()
{
    if (SelectedDifficulty == "Hard" && GetWorldTimerManager().IsTimerActive(HardModeTimerHandle))
    {
        GetWorldTimerManager().ClearTimer(HardModeTimerHandle);
    }

    if (GetWorldTimerManager().IsTimerActive(CountdownUpdateTimer))
    {
        GetWorldTimerManager().ClearTimer(CountdownUpdateTimer);
    }

    if (TimerWidgetInstance)
    {
        TimerWidgetInstance->RemoveFromParent();
        TimerWidgetInstance = nullptr;
    }

    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        for (const FString& Tag : ActivePaperTags)
        {
            if (ActorItr->ActorHasTag(*Tag))
            {
                ActorItr->Destroy();
                break; 
            }
        }
    }

    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(false);
        PaperSheet->SetActorEnableCollision(true);

        FVector DesiredPosition(0.0f, 0.0f, 17.0f);
        PaperSheet->SetActorLocation(DesiredPosition);
        CurrentFadeTime = 0.0f;
        bIsFadingIn = true;

    }

    AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));
    if (Archivist)
    {
        Archivist->bHasFinishedShreddedPaperMinigame = true;
    }

    UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
    if (GameInstance)
    {
        GameInstance->bShreddedGameComplete = true;
        GameInstance->SaveQuestLogData();
    }

    if (ExitWidgetClass)
    {
        ExitWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
        if (ExitWidgetInstance)
        {
            ExitWidgetInstance->AddToViewport();

            if (UButton* ExitBtn = Cast<UButton>(ExitWidgetInstance->GetWidgetFromName(TEXT("ExitButton"))))
            {
                ExitBtn->OnClicked.AddUniqueDynamic(this, &AMinigame::OnExitButtonClicked);
            }
            else if (UButton* ExitAlt = Cast<UButton>(ExitWidgetInstance->GetWidgetFromName(TEXT("ExitWidget"))))
            {
                ExitAlt->OnClicked.AddUniqueDynamic(this, &AMinigame::OnExitButtonClicked);
            }
        }
    }

    if (SelectedDifficulty == "Hard")
    {
        // RemainingSeconds is the time left
        if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        {
            GI->bLastShreddedWasHard = true;

            GI->ShreddedScoreHistory.Add(RemainingSeconds);
            GI->ShreddedScoreHistory.Sort([](int32 A, int32 B) { return A > B; });
            if (GI->ShreddedScoreHistory.Num() > 5)
            {
                GI->ShreddedScoreHistory.SetNum(5);
            }
        }
    }
    else
    {
        if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        {
            GI->bLastShreddedWasHard = false;
        }
    }
}

//Binds the input for dragging and releasing the paperstrips 
void AMinigame::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindKey(EKeys::LeftMouseButton, IE_Pressed, this, &AMinigame::StartDragging);
    PlayerInputComponent->BindKey(EKeys::LeftMouseButton, IE_Released, this, &AMinigame::StopDragging);
}

//The paperstrips can be dragged with left mouse click 
void AMinigame::StartDragging()
{
    FHitResult HitResult;
    FVector MousePosition, MouseDirection;

    if (GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(MousePosition, MouseDirection))
    {
        FVector Start = MousePosition;
        FVector End = Start + (MouseDirection * 1000.0f);

        if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility))
        {
            if (UStaticMeshComponent* HitMesh = Cast<UStaticMeshComponent>(HitResult.GetComponent()))
            {
                AActor* ParentActor = HitMesh->GetOwner();

                if (ParentActor && ParentActor->ActorHasTag("Draggable"))
                {
                    SelectedMesh = HitMesh;
                    bIsDragging = true;

                    FVector MeshPosition = SelectedMesh->GetComponentLocation();
                    DragOffset = MeshPosition - HitResult.ImpactPoint;
                }
            }
        }
    }
}

//Stops dragging the paperstrips ans resets the selected paperstrip so another one can be dragged 
void AMinigame::StopDragging()
{
    bIsDragging = false;
    SelectedMesh = nullptr;
}

//Plays a clicking sound when two paperstrips are snapped together 
void AMinigame::PlaySnapSound()
{
    if (SnapSound)
    {
        UGameplayStatics::PlaySound2D(this, SnapSound);
    }
}

//Spawns a glitter spark when two paperstrips are snapped together 
void AMinigame::PlaySparkEffect(FVector Location)
{
    if (SparkNiagaraEffect)
    {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(
            this,
            SparkNiagaraEffect,
            Location,
            FRotator::ZeroRotator,
            FVector(1.0f),
            true,
            true,
            ENCPoolMethod::AutoRelease
        );
    }
}

void AMinigame::ShowDifficultyMenu()
{
    if (DifficultyWidgetClass)
    {
        DifficultyWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), DifficultyWidgetClass);
        if (DifficultyWidgetInstance)
        {
            DifficultyWidgetInstance->AddToViewport();

            if (UButton* EasyBtn = Cast<UButton>(DifficultyWidgetInstance->GetWidgetFromName(TEXT("EasyButton"))))
            {
                EasyBtn->OnClicked.AddDynamic(this, &AMinigame::OnEasySelected);
            }

            if (UButton* MediumBtn = Cast<UButton>(DifficultyWidgetInstance->GetWidgetFromName(TEXT("MediumButton"))))
            {
                MediumBtn->OnClicked.AddDynamic(this, &AMinigame::OnMediumSelected);
            }

            if (UButton* HardBtn = Cast<UButton>(DifficultyWidgetInstance->GetWidgetFromName(TEXT("HardButton"))))
            {
                HardBtn->OnClicked.AddDynamic(this, &AMinigame::OnHardSelected);
            }
        }

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
        {
            PC->bShowMouseCursor = true;
            FInputModeUIOnly InputMode;
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            PC->SetInputMode(InputMode);
        }
    }
}

void AMinigame::OnEasySelected()
{
    SelectedDifficulty = "Easy";
    if (auto GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        GI->bLastShreddedWasHard = false;

    if (DifficultyWidgetInstance)
    {
        DifficultyWidgetInstance->RemoveFromParent();
        DifficultyWidgetInstance = nullptr;
    }

    ExpectedPieceCount = 14;
    SnapThreshold = 4.0f;

    ActivatePaperSetForDifficulty();
    SetupSnappingRules();

    StartGame();
}

void AMinigame::OnMediumSelected()
{
    SelectedDifficulty = "Medium";
    if (auto GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        GI->bLastShreddedWasHard = false;

    if (DifficultyWidgetInstance)
    {
        DifficultyWidgetInstance->RemoveFromParent();
        DifficultyWidgetInstance = nullptr;
    }

    ExpectedPieceCount = 16;
    SnapThreshold = 5.0f;

    ActivatePaperSetForDifficulty();
    SetupSnappingRules();
    StartGame();

}

void AMinigame::OnHardSelected()
{
    SelectedDifficulty = "Hard";
    if (auto GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
        GI->bLastShreddedWasHard = true;

    if (DifficultyWidgetInstance)
    {
        DifficultyWidgetInstance->RemoveFromParent();
        DifficultyWidgetInstance = nullptr;
    }

    ExpectedPieceCount = 22;
    SnapThreshold = 3.0f;

    ResetAllPaperStripsToInitial(); // ensure fresh layout
    ResetMinigameState();

    StartHardModeTimerUI();
    GetWorldTimerManager().SetTimer(HardModeTimerHandle, this, &AMinigame::OnHardModeTimeUp, HardModeTimeLimit, false);

    ActivatePaperSetForDifficulty();
    SetupSnappingRules();
    StartGame();

}

void AMinigame::OnTutorialContinue()
{
    if (IsValid(TutorialWidgetInstance))
    {
        TutorialWidgetInstance->RemoveFromParent();
        TutorialWidgetInstance = nullptr;
    }
    ShowDifficultyMenu();
}

void AMinigame::HideAllPaperStrips()
{
    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        if (ActorItr->ActorHasTag("Draggable") ||
            ActorItr->Tags.Num() > 0 && ActorItr->Tags[0].ToString().StartsWith("paperstrip"))
        {
            ActorItr->SetActorHiddenInGame(true);
            ActorItr->SetActorEnableCollision(false);
        }
    }

    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(true);
        PaperSheet->SetActorEnableCollision(false);
    }
}

void AMinigame::ActivatePaperSetForDifficulty()
{
    TArray<FString> PaperTags;

    if (SelectedDifficulty == "Easy")
    {
        for (int i = 1; i <= 14; ++i)
        {
            PaperTags.Add(FString::Printf(TEXT("paperstrip_easy%02d"), i));
        }
    }
    else if (SelectedDifficulty == "Medium")
    {
        for (int i = 1; i <= 16; ++i)
        {
            PaperTags.Add(FString::Printf(TEXT("paperstrip%02d"), i));
        }
    }
    else if (SelectedDifficulty == "Hard")
    {
        for (int i = 1; i <= 22; ++i)
        {
            PaperTags.Add(FString::Printf(TEXT("paperstrip_hard%02d"), i));
        }
    }

    for (const FString& Tag : PaperTags)
    {
        for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
        {
            if (ActorItr->ActorHasTag(*Tag))
            {
                ActorItr->SetActorHiddenInGame(false);
                ActorItr->SetActorEnableCollision(true);
            }
        }
    }

    ActivePaperTags = PaperTags; 

}

void AMinigame::SetupSnappingRules()
{
    SnappingRules.Empty();
    ParentMap.Empty();

    if (SelectedDifficulty == "Easy")
    {
        SnappingRules.Add("paperstrip_easy01", { "paperstrip_easy11", "paperstrip_easy10", "paperstrip_easy14" });
        SnappingRules.Add("paperstrip_easy02", { "paperstrip_easy04", "paperstrip_easy07", "paperstrip_easy08", "paperstrip_easy12" });
        SnappingRules.Add("paperstrip_easy03", { "paperstrip_easy06", "paperstrip_easy06", "paperstrip_easy08" });
        SnappingRules.Add("paperstrip_easy04", { "paperstrip_easy02", "paperstrip_easy12" });
        SnappingRules.Add("paperstrip_easy05", { "paperstrip_easy13" });
        SnappingRules.Add("paperstrip_easy06", { "paperstrip_easy03", "paperstrip_easy08", "paperstrip_easy09" });
        SnappingRules.Add("paperstrip_easy07", { "paperstrip_easy02", "paperstrip_easy03", "paperstrip_easy08" });
        SnappingRules.Add("paperstrip_easy08", { "paperstrip_easy02", "paperstrip_easy03", "paperstrip_easy06", "paperstrip_easy07", "paperstrip_easy09", "paperstrip_easy10", "paperstrip_easy11", "paperstrip_easy12" });
        SnappingRules.Add("paperstrip_easy09", { "paperstrip_easy06", "paperstrip_easy08", "paperstrip_easy10", "paperstrip_easy13" });
        SnappingRules.Add("paperstrip_easy10", { "paperstrip_easy01", "paperstrip_easy08", "paperstrip_easy09", "paperstrip_easy11", "paperstrip_easy13", "paperstrip_easy14" });
        SnappingRules.Add("paperstrip_easy11", { "paperstrip_easy01", "paperstrip_easy08", "paperstrip_easy10", "paperstrip_easy12" });
        SnappingRules.Add("paperstrip_easy12", { "paperstrip_easy02", "paperstrip_easy04", "paperstrip_easy08", "paperstrip_easy11" });
        SnappingRules.Add("paperstrip_easy13", { "paperstrip_easy05", "paperstrip_easy09", "paperstrip_easy10", "paperstrip_easy14" });
        SnappingRules.Add("paperstrip_easy14", { "paperstrip_easy01", "paperstrip_easy10", "paperstrip_easy13" });

        for (int i = 1; i <= 14; ++i)
        {
            const FString Tag = FString::Printf(TEXT("paperstrip_easy%02d"), i);
            ParentMap.Add(Tag, Tag);
        }
    }
    else if (SelectedDifficulty == "Medium")
    {
        // Sets up the snapping rules 
        SnappingRules.Add("paperstrip01", { "paperstrip02" });
        SnappingRules.Add("paperstrip02", { "paperstrip01", "paperstrip03" });
        SnappingRules.Add("paperstrip03", { "paperstrip02", "paperstrip04" });
        SnappingRules.Add("paperstrip04", { "paperstrip03", "paperstrip05" });
        SnappingRules.Add("paperstrip05", { "paperstrip04", "paperstrip06" });
        SnappingRules.Add("paperstrip06", { "paperstrip05", "paperstrip07" });
        SnappingRules.Add("paperstrip07", { "paperstrip06", "paperstrip08" });
        SnappingRules.Add("paperstrip08", { "paperstrip07", "paperstrip09" });
        SnappingRules.Add("paperstrip09", { "paperstrip08", "paperstrip10" });
        SnappingRules.Add("paperstrip10", { "paperstrip09", "paperstrip11" });
        SnappingRules.Add("paperstrip11", { "paperstrip10", "paperstrip12" });
        SnappingRules.Add("paperstrip12", { "paperstrip11", "paperstrip13" });
        SnappingRules.Add("paperstrip13", { "paperstrip12", "paperstrip14" });
        SnappingRules.Add("paperstrip14", { "paperstrip13", "paperstrip15" });
        SnappingRules.Add("paperstrip15", { "paperstrip14", "paperstrip16" });
        SnappingRules.Add("paperstrip16", { "paperstrip15" });

        for (int i = 1; i <= 16; ++i)
        {
            const FString Tag = FString::Printf(TEXT("paperstrip%02d"), i);
            ParentMap.Add(Tag, Tag);
        }
    }
    else if (SelectedDifficulty == "Hard")
    {
        SnappingRules.Add("paperstrip_hard01", { "paperstrip_hard02" });
        SnappingRules.Add("paperstrip_hard02", { "paperstrip_hard01", "paperstrip_hard03" });
        SnappingRules.Add("paperstrip_hard03", { "paperstrip_hard02", "paperstrip_hard04" });
        SnappingRules.Add("paperstrip_hard04", { "paperstrip_hard03", "paperstrip_hard05" });
        SnappingRules.Add("paperstrip_hard05", { "paperstrip_hard04", "paperstrip_hard06" });
        SnappingRules.Add("paperstrip_hard06", { "paperstrip_hard05", "paperstrip_hard07" });
        SnappingRules.Add("paperstrip_hard07", { "paperstrip_hard06", "paperstrip_hard08" });
        SnappingRules.Add("paperstrip_hard08", { "paperstrip_hard07", "paperstrip_hard09" });
        SnappingRules.Add("paperstrip_hard09", { "paperstrip_hard08", "paperstrip_hard10" });
        SnappingRules.Add("paperstrip_hard10", { "paperstrip_hard09", "paperstrip_hard11" });
        SnappingRules.Add("paperstrip_hard11", { "paperstrip_hard10", "paperstrip_hard12" });
        SnappingRules.Add("paperstrip_hard12", { "paperstrip_hard11", "paperstrip_hard13" });
        SnappingRules.Add("paperstrip_hard13", { "paperstrip_hard12", "paperstrip_hard14" });
        SnappingRules.Add("paperstrip_hard14", { "paperstrip_hard13", "paperstrip_hard15" });
        SnappingRules.Add("paperstrip_hard15", { "paperstrip_hard14", "paperstrip_hard16" });
        SnappingRules.Add("paperstrip_hard16", { "paperstrip_hard15", "paperstrip_hard17" });
        SnappingRules.Add("paperstrip_hard17", { "paperstrip_hard16", "paperstrip_hard18" });
        SnappingRules.Add("paperstrip_hard18", { "paperstrip_hard17", "paperstrip_hard19" });
        SnappingRules.Add("paperstrip_hard19", { "paperstrip_hard18", "paperstrip_hard20" });
        SnappingRules.Add("paperstrip_hard20", { "paperstrip_hard19", "paperstrip_hard21" });
        SnappingRules.Add("paperstrip_hard21", { "paperstrip_hard20", "paperstrip_hard22" });
        SnappingRules.Add("paperstrip_hard22", { "paperstrip_hard21" });

        for (int i = 1; i <= 22; ++i)
        {
            const FString Tag = FString::Printf(TEXT("paperstrip_hard%02d"), i);
            ParentMap.Add(Tag, Tag);
        }
    }
}

void AMinigame::OnHardModeTimeUp()
{
    if (!IsValid(this) || !GetWorld()) return;

    UE_LOG(LogTemp, Warning, TEXT("Time is up - showing Try Again"));

    if (TimerWidgetInstance)
    {
        TimerWidgetInstance->RemoveFromParent();
        TimerWidgetInstance = nullptr;
    }

    GetWorldTimerManager().ClearTimer(HardModeTimerHandle);
    GetWorldTimerManager().ClearTimer(CountdownUpdateTimer);

    HideAllPaperStrips();

    //Show the Try Again widget (WBP_ShreddedTryAgain)
    if (TryAgainWidgetClass)
    {
        if (IsValid(TryAgainWidgetInstance))
        {
            TryAgainWidgetInstance->RemoveFromParent();
            TryAgainWidgetInstance = nullptr;
        }

        TryAgainWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TryAgainWidgetClass);
        if (TryAgainWidgetInstance)
        {
            TryAgainWidgetInstance->AddToViewport();

            if (UButton* TryAgainBtn = Cast<UButton>(TryAgainWidgetInstance->GetWidgetFromName(TEXT("TryAgainButton"))))
            {
                TryAgainBtn->OnClicked.RemoveAll(this);
                TryAgainBtn->OnClicked.AddDynamic(this, &AMinigame::OnTryAgainClicked);
            }

            if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
            {
                PC->bShowMouseCursor = true;
                FInputModeUIOnly UI;
                UI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
                UI.SetWidgetToFocus(TryAgainWidgetInstance->TakeWidget());
                PC->SetInputMode(UI);
            }
        }
    }
    else
    {
        ShowTutorial();
    }
}



void AMinigame::RestartHardMode()
{
    if (!IsValid(this)) return;
    if (!GetWorld()) return;

    HideAllPaperStrips();
    SetupSnappingRules();
    ActivatePaperSetForDifficulty();
    ShowTutorial();
}

void AMinigame::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Timere
    FTimerManager& TM = GetWorldTimerManager();
    TM.ClearTimer(CutsceneTimerHandle);
    TM.ClearTimer(WhiteoutTimerHandle);
    TM.ClearTimer(WhiteoutEarlyTimerHandle);

    // Widgets
    if (IsValid(ExitWidgetInstance)) { ExitWidgetInstance->RemoveFromParent();     ExitWidgetInstance = nullptr; }
    if (IsValid(CutsceneWidgetInstance)) { CutsceneWidgetInstance->RemoveFromParent(); CutsceneWidgetInstance = nullptr; }
    if (IsValid(WhiteoutWidgetInstance)) { WhiteoutWidgetInstance->RemoveFromParent(); WhiteoutWidgetInstance = nullptr; }

    bCutsceneActive = false;
}

void AMinigame::StartHardModeTimerUI()
{
    if (!TimerWidgetClass || !GetWorld()) return;

    TimerWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TimerWidgetClass);
    if (TimerWidgetInstance)
    {
        TimerWidgetInstance->AddToViewport();
    }

    RemainingSeconds = 150; // 2,5 minutes

    // Start oppdatering hvert sekund
    GetWorldTimerManager().SetTimer(CountdownUpdateTimer, this, &AMinigame::UpdateTimerDisplay, 1.0f, true);
}

void AMinigame::UpdateTimerDisplay()
{
    if (!IsValid(TimerWidgetInstance)) return;

    // Formatér tiden
    int32 Minutes = RemainingSeconds / 60;
    int32 Seconds = RemainingSeconds % 60;

    FString TimeString = FString::Printf(TEXT("TIMER: %02d:%02d"), Minutes, Seconds);

    if (UTextBlock* CountdownText = Cast<UTextBlock>(TimerWidgetInstance->GetWidgetFromName(TEXT("CountdownText"))))
    {
        CountdownText->SetText(FText::FromString(TimeString));
    }

    RemainingSeconds--;

    if (RemainingSeconds < 0)
    {
        GetWorldTimerManager().ClearTimer(CountdownUpdateTimer);

        if (TimerWidgetInstance)
        {
            TimerWidgetInstance->RemoveFromParent();
            TimerWidgetInstance = nullptr;
        }

        OnHardModeTimeUp(); // Fortsatt den samme
    }
}

void AMinigame::ShowIngameTutorial()
{
    if (SelectedDifficulty == "Hard")
    {
        GetWorldTimerManager().PauseTimer(HardModeTimerHandle);
        GetWorldTimerManager().PauseTimer(CountdownUpdateTimer);
        bHardCountdownPaused = true;
    }

    if (IsValid(IngameTutorialWidgetInstance))
    {
        IngameTutorialWidgetInstance->RemoveFromParent();
        IngameTutorialWidgetInstance = nullptr;
    }

    if (!IngameTutorialWidgetClass || !GetWorld()) return;

    IngameTutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), IngameTutorialWidgetClass);
    if (IngameTutorialWidgetInstance)
    {
        IngameTutorialWidgetInstance->AddToViewport();

        if (UButton* ResumeBtn = Cast<UButton>(IngameTutorialWidgetInstance->GetWidgetFromName(TEXT("ResumeButton"))))
        {
            ResumeBtn->OnClicked.AddDynamic(this, &AMinigame::OnIngameTutorialClose);
        }

        bIsDragging = false;

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
        {
            PC->bShowMouseCursor = true;
            FInputModeUIOnly UI;
            UI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            UI.SetWidgetToFocus(IngameTutorialWidgetInstance->TakeWidget());
            PC->SetInputMode(UI);
        }
    }

}

void AMinigame::OnIngameTutorialClose()
{
    if (IngameTutorialWidgetInstance)
    {
        IngameTutorialWidgetInstance->RemoveFromParent();
        IngameTutorialWidgetInstance = nullptr;
    }

    //Resume timers if they were paused
    if (SelectedDifficulty == "Hard" && bHardCountdownPaused)
    {
        GetWorldTimerManager().UnPauseTimer(HardModeTimerHandle);
        GetWorldTimerManager().UnPauseTimer(CountdownUpdateTimer);
        bHardCountdownPaused = false;
    }

    //Return focus to the game and UI
    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
    {
        PC->bShowMouseCursor = true;
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
    }
}

void AMinigame::OnTryAgainClicked()
{
    if (TryAgainWidgetInstance)
    {
        TryAgainWidgetInstance->RemoveFromParent();
        TryAgainWidgetInstance = nullptr;
    }

    if (TimerWidgetInstance)
    {
        TimerWidgetInstance->RemoveFromParent();
        TimerWidgetInstance = nullptr;
    }
    RemainingSeconds = 150;
    bHardCountdownPaused = false;     

    ResetAllPaperStripsToInitial();
    ResetMinigameState();
    HideAllPaperStrips();

    ShowTutorial();
}

void AMinigame::OnExitButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("OnExitButtonClicked"));

    if (IsValid(ExitWidgetInstance))
    {
        ExitWidgetInstance->RemoveFromParent();
        ExitWidgetInstance = nullptr;
    }

    BeginCutscene();
}

void AMinigame::SkipCutscene()
{
    FTimerManager& TM = GetWorldTimerManager();
    TM.ClearTimer(CutsceneTimerHandle);
    TM.ClearTimer(WhiteoutTimerHandle);
    TM.ClearTimer(WhiteoutEarlyTimerHandle);

    if (IsValid(CutsceneWidgetInstance)) { CutsceneWidgetInstance->RemoveFromParent(); CutsceneWidgetInstance = nullptr; }
    if (IsValid(WhiteoutWidgetInstance)) { WhiteoutWidgetInstance->RemoveFromParent(); WhiteoutWidgetInstance = nullptr; }
    if (IsValid(ExitWidgetInstance)) { ExitWidgetInstance->RemoveFromParent();     ExitWidgetInstance = nullptr; }

    bCutsceneActive = false;

    UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
}



void AMinigame::BeginCutscene()
{

    if (!GetWorld() || !CutsceneWidgetClass) return;

    CutsceneWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), CutsceneWidgetClass);

    if (CutsceneWidgetInstance)
    {
        CutsceneWidgetInstance->AddToViewport();

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
        {
            PC->bShowMouseCursor = true;
            FInputModeUIOnly InputMode;
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            InputMode.SetWidgetToFocus(CutsceneWidgetInstance->TakeWidget());
            PC->SetInputMode(InputMode);
        }

        if (UButton* SkipButton = Cast<UButton>(CutsceneWidgetInstance->GetWidgetFromName(TEXT("SkipButton"))))
        {
            SkipButton->OnClicked.AddUniqueDynamic(this, &AMinigame::SkipCutscene);
        }
    }

    if (UUserWidget* CutsceneUI = Cast<UUserWidget>(CutsceneWidgetInstance))
    {
        if (CutsceneUI->WidgetTree)
        {
            TArray<UWidget*> All;
            CutsceneUI->WidgetTree->GetAllWidgets(All);
            for (UWidget* W : All)
            {
                const bool bEnabled = W->GetIsEnabled();
            }
        }
    }

    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
    {
        PC->bShowMouseCursor = true;
        FInputModeUIOnly UI;
        UI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        PC->SetInputMode(UI);
    }

    bCutsceneActive = true;

    const float Lead = FMath::Clamp(WhiteoutLeadSeconds, 0.f, FMath::Max(0.f, CutsceneLength - 0.01f));
    if (Lead > KINDA_SMALL_NUMBER && CutsceneLength > Lead)
    {
        GetWorldTimerManager().SetTimer(
            WhiteoutEarlyTimerHandle, this, &AMinigame::StartWhiteoutBeforeEnd,
            CutsceneLength - Lead, false);
    }


    GetWorldTimerManager().SetTimer(
        CutsceneTimerHandle, this, &AMinigame::OnCutsceneFinished, CutsceneLength, false);
}

void AMinigame::OnCutsceneFinished()
{
    GetWorldTimerManager().ClearTimer(WhiteoutEarlyTimerHandle);

    if (!bCutsceneActive) return;
    bCutsceneActive = false;

    if (!WhiteoutWidgetInstance && WhiteoutWidgetClass && GetWorld())
    {
        WhiteoutWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WhiteoutWidgetClass);
        if (WhiteoutWidgetInstance)
        {
            WhiteoutWidgetInstance->AddToViewport(10000);
        }
    }

    if (IsValid(CutsceneWidgetInstance))
    {
        CutsceneWidgetInstance->RemoveFromParent();
        CutsceneWidgetInstance = nullptr;
    }

    GetWorldTimerManager().SetTimer(
        WhiteoutTimerHandle, this, &AMinigame::OnWhiteoutFinished, WhiteoutLength, false);
}


void AMinigame::OnWhiteoutFinished()
{
    UGameplayStatics::OpenLevel(this, FName(TEXT("Archive-Mystery")));
}

void AMinigame::StartWhiteoutBeforeEnd()
{
    if (!GetWorld() || !WhiteoutWidgetClass) return;
    if (WhiteoutWidgetInstance) return;

    WhiteoutWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WhiteoutWidgetClass);
    if (WhiteoutWidgetInstance)
    {
        WhiteoutWidgetInstance->AddToViewport(10000);
    }
}
