// Fill out your copyright notice in the Description page of Project Settings.

#include "Camera/CameraComponent.h"
#include "ShreddedPaper/Minigame.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"


// Sets default values
AMinigame::AMinigame()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    TopDownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    TopDownCamera->SetupAttachment(RootComponent);

    // Set the camera's position and rotation
    TopDownCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));  // Adjust the height as needed
    TopDownCamera->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));  // Looks directly down at the plane

    // Set default values
    bIsDragging = false;
    SelectedMesh = nullptr;

    // Initialize Input Actions and IMC (assuming these are set in the Editor or via code elsewhere)
    static ConstructorHelpers::FObjectFinder<UInputMappingContext> IMC_DragAndDropObject(TEXT("/Game/PathToYourAsset/IMC_DragAndDrop"));
    if (IMC_DragAndDropObject.Succeeded())
    {
        IMC_DragAndDrop = IMC_DragAndDropObject.Object;
    }

    static ConstructorHelpers::FObjectFinder<UInputAction> IA_DragObject(TEXT("/Game/PathToYourAsset/IA_Drag"));
    if (IA_DragObject.Succeeded())
    {
        IA_Drag = IA_DragObject.Object;
    }

    static ConstructorHelpers::FObjectFinder<UInputAction> IA_ReleaseObject(TEXT("/Game/PathToYourAsset/IA_Release"));
    if (IA_ReleaseObject.Succeeded())
    {
        IA_Release = IA_ReleaseObject.Object;
    }

    // Dette setter GameMenuWidgetClass til widget blueprints som er tilordnet i editoren
    GameMenuWidgetClass = LoadObject<UClass>(nullptr, TEXT("/Game/ShreddedPaper_minigame/Blueprints/GameMenuWidget.GameMenuWidget_C"));


}

// Called when the game starts or when spawned
void AMinigame::BeginPlay()
{
	Super::BeginPlay();


    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        PlayerController->Possess(this);
        EnableInput(PlayerController);
    }

    // Vis GameMenuWidget
    if (GameMenuWidgetClass)
    {
        GameMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), GameMenuWidgetClass);
        if (GameMenuWidgetInstance)
        {
            GameMenuWidgetInstance->AddToViewport();

            // Hent knappen fra widgeten
            BackToTutorialButton = Cast<UButton>(GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton")));
            if (BackToTutorialButton)
            {
                // Bind knappen til ShowTutorial-funksjonen
                BackToTutorialButton->OnClicked.AddDynamic(this, &AMinigame::ShowTutorial);
            }
        }
    }

    // Vis tutorial widget
    if (TutorialWidgetClass)
    {
        TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
        if (TutorialWidgetInstance)
        {
            TutorialWidgetInstance->AddToViewport();

            // Hent knappen fra widgeten
            StartButton = Cast<UButton>(TutorialWidgetInstance->GetWidgetFromName(TEXT("StartGameButton")));
            if (StartButton)
            {
                // Bind knappen til StartGame-funksjonen
                StartButton->OnClicked.AddDynamic(this, &AMinigame::StartGame);
            }
        }
    }

    // Set the camera to a fixed place in the start of the game 
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

    // Initialize Union-Find structure for all paperstrips
    for (const TPair<FString, TArray<FString>>& Pair : SnappingRules)
    {
        const FString& Paperstrip = Pair.Key; // Access the key of the map entry
        ParentMap.Add(Paperstrip, Paperstrip); // Each piece starts as its own parent
    }

    // Ensure the paper sheet is hidden initially
    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(true); // Hide the paper sheet
    }

}

void AMinigame::StartGame()
{
    // Skjul tutorialen
    if (TutorialWidgetInstance)
    {
        TutorialWidgetInstance->RemoveFromViewport();
    }

    // Skjul GameMenuWidget hvis det er aktivt
    if (GameMenuWidgetInstance)
    {
        GameMenuWidgetInstance->RemoveFromViewport();
    }

    // Lag og vis GameMenuWidget etter at tutorialen er fjernet
    if (GameMenuWidgetClass)
    {
        GameMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), GameMenuWidgetClass);
        if (GameMenuWidgetInstance)
        {
            GameMenuWidgetInstance->AddToViewport();
        }

        // Hent knappen fra GameMenuWidget og bind til ShowTutorial-funksjonen
        BackToTutorialButton = Cast<UButton>(GameMenuWidgetInstance->GetWidgetFromName(TEXT("BackToTutorialButton")));
        if (BackToTutorialButton)
        {
            BackToTutorialButton->OnClicked.AddDynamic(this, &AMinigame::ShowTutorial);
        }
    }
}

void AMinigame::ShowTutorial()
{
    // Skjul GameMenuWidget
    if (GameMenuWidgetInstance)
    {
        GameMenuWidgetInstance->RemoveFromViewport();
    }

    // Vis TutorialWidget
    if (TutorialWidgetClass)
    {
        TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
        if (TutorialWidgetInstance)
        {
            TutorialWidgetInstance->AddToViewport();

            // Hent knappen fra widgeten og bind til StartGame
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
        ParentMap.Add(Node, Node); // Initialize node as its own parent
        UE_LOG(LogTemp, Warning, TEXT("FindParent: Node %s initialized as its own root"), *Node);
    }

    if (ParentMap[Node] != Node)
    {
        // Path compression: Ensure all nodes point directly to their root
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
        return; // Exit early to avoid unnecessary merging
    }

    // Merge RootB into RootA
    ParentMap[RootB] = RootA;
    UE_LOG(LogTemp, Warning, TEXT("Groups merged successfully: %s with %s"), *RootA, *RootB);
}

void AMinigame::ValidateGroups()
{
    TMap<FString, int32> GroupCounts;

    // Ensure all nodes are pointing to their correct root
    for (const TPair<FString, FString>& Pair : ParentMap)
    {
        FindParent(Pair.Key); // Path compression ensures accurate roots
    }

    // Count the size of each group by its root
    for (const TPair<FString, FString>& Pair : ParentMap)
    {
        FString Root = FindParent(Pair.Key);
        GroupCounts.FindOrAdd(Root)++;
    }

    // Debug log group sizes
    for (const TPair<FString, int32>& Group : GroupCounts)
    {
        UE_LOG(LogTemp, Warning, TEXT("Group Root: %s, Size: %d"), *Group.Key, Group.Value);
    }

    // Check win condition: one group with all 16 pieces
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

// Called every frame
void AMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bIsDragging && SelectedMesh)
    {
        FVector MousePosition, MouseDirection;
        if (GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(MousePosition, MouseDirection))
        {
            // Apply sensitivity to the mouse position
            float Sensitivity = 15.5f;
            FVector AdjustedMousePosition = MousePosition * Sensitivity;

            // Calculate the new location using DragOffset
            FVector NewLocation = AdjustedMousePosition + DragOffset;

            // Maintain the Z-coordinate of the mesh
            NewLocation.Z = SelectedMesh->GetComponentLocation().Z;

            // Move the entire group to the new location
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
                SelectedTag = ParentActor->Tags[0].ToString(); // Get the first tag
            }

            FString SelectedGroupRoot = FindParent(SelectedTag); // Find the root of the selected group

            // Iterate through all actors in the world to find target groups
            for (TActorIterator<AActor> TargetActorItr(GetWorld()); TargetActorItr; ++TargetActorItr)
            {
                if (TargetActorItr->Tags.Num() > 0)
                {
                    FString TargetTag = TargetActorItr->Tags[0].ToString();
                    FString TargetGroupRoot = FindParent(TargetTag); // Find the root of the target group

                    // Skip if the target is in the same group as the selected paperstrip
                    if (SelectedGroupRoot == TargetGroupRoot)
                    {
                        continue;
                    }

                    // Check if any neighboring paperstrip in the selected group can snap to any neighboring paperstrip in the target group
                    bool ShouldSnap = false;
                    FVector SnapOffset = FVector::ZeroVector;

                    for (const TPair<FString, FString>& Pair : ParentMap)
                    {
                        if (FindParent(Pair.Key) == SelectedGroupRoot) // Check paperstrips in the selected group
                        {
                            for (const TPair<FString, FString>& TargetPair : ParentMap)
                            {
                                if (FindParent(TargetPair.Key) == TargetGroupRoot) // Check paperstrips in the target group
                                {
                                    // Check if the two paperstrips are valid neighbors
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

                                                        if (Distance <= SnapThreshold) // Found a valid snap
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
                        // Move the selected group to snap it with the target group
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

                        // Merge the groups
                        MergeGroups(SelectedTag, TargetTag);

                        // Validate group sizes to ensure accuracy
                        ValidateGroups();

                        // Debug log for confirmation
                        UE_LOG(LogTemp, Warning, TEXT("Groups merged successfully: %s with %s"), *SelectedGroupRoot, *TargetGroupRoot);

                        return; // Exit after successful snap
                    }
                }
            }
        }



    }

    // Handle fade-in effect for the paper sheet
    if (bIsFadingIn && PaperSheet)
    {
        CurrentFadeTime += DeltaTime;

        float Alpha = FMath::Clamp(CurrentFadeTime / FadeDuration, 0.0f, 1.0f); // Calculate the fade alpha (0 to 1)

        for (UActorComponent* Component : PaperSheet->GetComponents())
        {
            if (UMeshComponent* MeshComponent = Cast<UMeshComponent>(Component))
            {
                UMaterialInstanceDynamic* DynamicMaterial = MeshComponent->CreateAndSetMaterialInstanceDynamic(0);
                if (DynamicMaterial)
                {
                    DynamicMaterial->SetScalarParameterValue("Opacity", Alpha); // Adjust opacity parameter
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
            ActorItr->Destroy(); // Destroy the actor
        }
    }

    // Make the paper sheet visible
    if (PaperSheet)
    {
        PaperSheet->SetActorHiddenInGame(false); // Show the paper sheet
        PaperSheet->SetActorEnableCollision(true); // Enable collision if needed

        // Set the position to the desired coordinates
        FVector DesiredPosition(0.0f, 0.0f, 17.0f);
        PaperSheet->SetActorLocation(DesiredPosition);
        CurrentFadeTime = 0.0f; // Reset the fade timer
        bIsFadingIn = true; // Start the fade-in effect

    }

    // Display the Exit Button
   // Create and display the exit button
    if (ExitWidgetClass)
    {
        UUserWidget* ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
        if (ExitWidget)
        {
            ExitWidget->AddToViewport();
        }
    }
}

// Called to bind functionality to input
void AMinigame::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(IA_Drag, ETriggerEvent::Triggered, this, &AMinigame::StartDragging);
        EnhancedInputComponent->BindAction(IA_Release, ETriggerEvent::Triggered, this, &AMinigame::StopDragging);
    }

    // Add the IMC to the Enhanced Input Local Player Subsystem
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
        FVector End = Start + (MouseDirection * 1000.0f); // Adjust range as needed

        if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility))
        {
            if (UStaticMeshComponent* HitMesh = Cast<UStaticMeshComponent>(HitResult.GetComponent()))
            {
                AActor* ParentActor = HitMesh->GetOwner();

                if (ParentActor && ParentActor->ActorHasTag("Draggable")) // Check if the actor is draggable
                {
                    SelectedMesh = HitMesh;
                    bIsDragging = true;

                    // Use the hit point on the mesh to calculate the exact offset
                    FVector MeshPosition = SelectedMesh->GetComponentLocation();
                    DragOffset = MeshPosition - HitResult.ImpactPoint;

                    // Debug log for verification
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


