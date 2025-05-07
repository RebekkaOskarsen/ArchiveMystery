// Fill out your copyright notice in the Description page of Project Settings.

#include "ShreddedPaper/Minigame.h"
#include "Camera/CameraComponent.h"

#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"
#include <Character/ArchiveGameInstance.h>


AMinigame::AMinigame()
{
	PrimaryActorTick.bCanEverTick = true;

    TopDownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    TopDownCamera->SetupAttachment(RootComponent);

    TopDownCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f)); 
    TopDownCamera->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));  

    bIsDragging = false;
    SelectedMesh = nullptr;

    GameMenuWidgetClass = LoadObject<UClass>(nullptr, TEXT("/Game/ShreddedPaper_minigame/Blueprints/GameMenuWidget.GameMenuWidget_C"));


}

void AMinigame::BeginPlay()
{
	Super::BeginPlay();


    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        PlayerController->Possess(this);
        EnableInput(PlayerController);
    }

    if (GameMenuWidgetClass)
    {
        GameMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), GameMenuWidgetClass);
        if (GameMenuWidgetInstance)
        {
            GameMenuWidgetInstance->AddToViewport();

            BackToTutorialButton = Cast<UButton>(GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton")));
            if (BackToTutorialButton)
            {
                BackToTutorialButton->OnClicked.AddDynamic(this, &AMinigame::ShowTutorial);
            }
        }
    }

    if (TutorialWidgetClass)
    {
        TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
        if (TutorialWidgetInstance)
        {
            TutorialWidgetInstance->AddToViewport();

            StartButton = Cast<UButton>(TutorialWidgetInstance->GetWidgetFromName(TEXT("StartGameButton")));
            if (StartButton)
            {
                StartButton->OnClicked.AddDynamic(this, &AMinigame::StartGame);
            }
        }
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

    for (const TPair<FString, TArray<FString>>& Pair : SnappingRules)
    {
        const FString& Paperstrip = Pair.Key; 
        ParentMap.Add(Paperstrip, Paperstrip); 
    }

    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(true); 
    }

}

void AMinigame::StartGame()
{
    if (TutorialWidgetInstance)
    {
        TutorialWidgetInstance->RemoveFromViewport();
    }

    if (GameMenuWidgetInstance)
    {
        GameMenuWidgetInstance->RemoveFromViewport();
    }

    if (GameMenuWidgetClass)
    {
        GameMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), GameMenuWidgetClass);
        if (GameMenuWidgetInstance)
        {
            GameMenuWidgetInstance->AddToViewport();
        }

        BackToTutorialButton = Cast<UButton>(GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton")));
        if (BackToTutorialButton)
        {
            BackToTutorialButton->OnClicked.AddDynamic(this, &AMinigame::ShowTutorial);
        }
    }
}

void AMinigame::ShowTutorial()
{
 
    if (GameMenuWidgetInstance)
    {
        GameMenuWidgetInstance->RemoveFromViewport();
    }

    if (TutorialWidgetClass)
    {
        TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
        if (TutorialWidgetInstance)
        {
            TutorialWidgetInstance->AddToViewport();

            StartButton = Cast<UButton>(TutorialWidgetInstance->GetWidgetFromName(TEXT("StartGameButton")));
            if (StartButton)
            {
                StartButton->OnClicked.AddDynamic(this, &AMinigame::StartGame);
            }
        }
    }
}

FString AMinigame::FindParent(const FString& Node)
{
    if (!ParentMap.Contains(Node))
    {
        ParentMap.Add(Node, Node); 
        UE_LOG(LogTemp, Warning, TEXT("FindParent: Node %s initialized as its own root"), *Node);
    }

    if (ParentMap[Node] != Node)
    {
        ParentMap[Node] = FindParent(ParentMap[Node]);
    }

    return ParentMap[Node];
}


void AMinigame::MergeGroups(const FString& NodeA, const FString& NodeB)
{
    FString RootA = FindParent(NodeA);
    FString RootB = FindParent(NodeB);

    if (RootA == RootB)
    {
        UE_LOG(LogTemp, Warning, TEXT("Already in the same group: %s and %s (Root: %s)"), *NodeA, *NodeB, *RootA);
        return; 
    }

    ParentMap[RootB] = RootA;
    UE_LOG(LogTemp, Warning, TEXT("Groups merged successfully: %s with %s"), *RootA, *RootB);
}

void AMinigame::ValidateGroups()
{
    TMap<FString, int32> GroupCounts;

    for (const TPair<FString, FString>& Pair : ParentMap)
    {
        FindParent(Pair.Key); 
    }

    for (const TPair<FString, FString>& Pair : ParentMap)
    {
        FString Root = FindParent(Pair.Key);
        GroupCounts.FindOrAdd(Root)++;
    }

    for (const TPair<FString, int32>& Group : GroupCounts)
    {
        UE_LOG(LogTemp, Warning, TEXT("Group Root: %s, Size: %d"), *Group.Key, Group.Value);
    }

    if (GroupCounts.Num() == 1 && GroupCounts.begin()->Value == 16)
    {
        FString Root = GroupCounts.begin()->Key;
        UE_LOG(LogTemp, Warning, TEXT("Win condition met: Group Root: %s, Size: 16"), *Root);
        OnAllPiecesSnapped();
    }
}

void AMinigame::LogParentMap()
{
    UE_LOG(LogTemp, Warning, TEXT("Current ParentMap:"));
    for (const TPair<FString, FString>& Pair : ParentMap)
    {
        UE_LOG(LogTemp, Warning, TEXT("Node: %s, Parent: %s"), *Pair.Key, *Pair.Value);
    }
}

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

                        UE_LOG(LogTemp, Warning, TEXT("Groups merged successfully: %s with %s"), *SelectedGroupRoot, *TargetGroupRoot);

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
            bIsFadingIn = false; // Fade-in complete
            UE_LOG(LogTemp, Warning, TEXT("Fade-in complete for PaperSheet."));
        }
    }
}

void AMinigame::OnAllPiecesSnapped()
{
    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        if (ActorItr->ActorHasTag("paperstrip01") || ActorItr->ActorHasTag("paperstrip02") || ActorItr->ActorHasTag("paperstrip03") ||
            ActorItr->ActorHasTag("paperstrip04") || ActorItr->ActorHasTag("paperstrip05") || ActorItr->ActorHasTag("paperstrip06") ||
            ActorItr->ActorHasTag("paperstrip07") || ActorItr->ActorHasTag("paperstrip08") || ActorItr->ActorHasTag("paperstrip09") ||
            ActorItr->ActorHasTag("paperstrip10") || ActorItr->ActorHasTag("paperstrip11") || ActorItr->ActorHasTag("paperstrip12") ||
            ActorItr->ActorHasTag("paperstrip13") || ActorItr->ActorHasTag("paperstrip14") || ActorItr->ActorHasTag("paperstrip15") ||
            ActorItr->ActorHasTag("paperstrip16"))
        {
            ActorItr->Destroy(); 
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
        UE_LOG(LogTemp, Warning, TEXT("Shredded paper minigame completed! Archivist flag set."));
    }

    if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
    {
        GI->bShreddedGameComplete = true;
    }

    if (ExitWidgetClass)
    {
        UUserWidget* ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
        if (ExitWidget)
        {
            ExitWidget->AddToViewport();
        }
    }

    if (UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
    {
        GameInstance->bShreddedGameComplete = true;
        UE_LOG(LogTemp, Warning, TEXT("Shredded minigame completed!"));
    }
}

void AMinigame::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(IA_Drag, ETriggerEvent::Triggered, this, &AMinigame::StartDragging);
        EnhancedInputComponent->BindAction(IA_Release, ETriggerEvent::Triggered, this, &AMinigame::StopDragging);
    }

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(IMC_DragAndDrop, 0);
        }
    }
}

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

                    UE_LOG(LogTemp, Warning, TEXT("Dragging group with root: %s"), *FindParent(ParentActor->Tags[0].ToString()));
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("Hit object is not draggable."));
                }
            }
        }
    }
}

void AMinigame::StopDragging()
{
    bIsDragging = false;
    SelectedMesh = nullptr;
}

void AMinigame::PlaySnapSound()
{
    if (SnapSound)
    {
        UGameplayStatics::PlaySound2D(this, SnapSound);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SnapSound is not set!"));
    }
}

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
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SparkNiagaraEffect is not set!"));
    }
}
