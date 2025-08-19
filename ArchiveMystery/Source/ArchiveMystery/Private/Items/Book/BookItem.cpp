// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Book/BookItem.h"
#include "Character/Archivist.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

ABookItem::ABookItem()
{
    PrimaryActorTick.bCanEverTick = false;

    BookMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BookMesh"));
    BookMesh->SetupAttachment(RootComponent);
    BookMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Make Single Node mode (shows as “Use Animation Asset” in the editor)
    BookMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);

    BookMesh->SetAbsolute(/*bNewAbsoluteLocation=*/false,
        /*bNewAbsoluteRotation=*/false,
        /*bNewAbsoluteScale=*/true);

    BookMesh->SetWorldScale3D(FVector(1.0f));

    // If your base AItems has a StaticMesh ItemMesh, hide it for this item
    if (ItemMesh)
    {
        ItemMesh->SetHiddenInGame(true);
        ItemMesh->SetVisibility(false, /*propagateToChildren=*/false); // do NOT propagate
        ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        ItemMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
    }
}

void ABookItem::EquipBook(USceneComponent* InParent, FName InSocketName)
{
    if (!InParent || !BookMesh) return;

    BookMesh->SetSimulatePhysics(false);
    BookMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

 
  // FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, true);
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

    FAttachmentTransformRules Rules(
        EAttachmentRule::SnapToTarget,   // Location
        EAttachmentRule::SnapToTarget,   // Rotation
        EAttachmentRule::KeepWorld,      // << keep world scale
        true
    );
    AttachToComponent(InParent, Rules, InSocketName);
    SetActorScale3D(FVector(1.f));
    if (PressEWidgetInstance)
    {
        PressEWidgetInstance->RemoveFromParent();
        PressEWidgetInstance = nullptr;
    }
}

void ABookItem::UnequipTo(FVector Location, FRotator Rotation)
{
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    SetActorLocation(Location);
    SetActorRotation(Rotation);

    SetActorScale3D(FVector(1.f));

    if (BookMesh)
    {
        BookMesh->SetSimulatePhysics(false);
        BookMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }

    if (PressEWidgetInstance)
    {
        PressEWidgetInstance->RemoveFromParent();
        PressEWidgetInstance = nullptr;
    }
}

void ABookItem::PlayOpenAndRead()
{
    if (!BookMesh || !OpeningAnim || !OpenLoopAnim) return;

    UE_LOG(LogTemp, Warning, TEXT("Book: Play OPENING"));
    BookMesh->PlayAnimation(OpeningAnim, /*bLoop=*/false);

    const float OpenLen = OpeningAnim->GetPlayLength();
    GetWorldTimerManager().ClearTimer(OpenLoopTimerHandle);
    GetWorldTimerManager().SetTimer(
        OpenLoopTimerHandle,
        this, &ABookItem::SwitchToOpenLoop,
        OpenLen, false
    );

    bIsOpen = true;
}

void ABookItem::PlayClose()
{
    if (!BookMesh) return;

    GetWorldTimerManager().ClearTimer(OpenLoopTimerHandle);

    if (ClosingAnim)
    {
        UE_LOG(LogTemp, Warning, TEXT("Book: Play CLOSING"));
        BookMesh->PlayAnimation(ClosingAnim, /*bLoop=*/false);

        const float CloseLen = ClosingAnim->GetPlayLength();
        FTimerHandle StopHandle;
        GetWorldTimerManager().SetTimer(StopHandle, [this]()
            {
                if (BookMesh) BookMesh->Stop(); // returns to closed pose (ref pose or last frame)
            }, CloseLen, false);
    }
    else
    {
        // fallback
        BookMesh->Stop();
    }

    bIsOpen = false;
}

void ABookItem::BeginPlay()
{
    Super::BeginPlay();

   // BookMesh->SetAbsolute(false, false, true);
}

void ABookItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    if (AArchivist* P = Cast<AArchivist>(OtherActor))
    {
        P->SetOverlappingItems(this);
        UE_LOG(LogTemp, Warning, TEXT("Overlapping book: %s"), *GetName());
        if (!IsAttachedTo(P) && PressEWidgetClass && !PressEWidgetInstance)
        {
            // (Optional) ensure it's the local player
            if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
            {
                PressEWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PressEWidgetClass);
                if (PressEWidgetInstance)
                {
                    PressEWidgetInstance->AddToViewport();
                }
            }
        }
    }
}

void ABookItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

    if (AArchivist* P = Cast<AArchivist>(OtherActor))
    {
        if (P->GetOverlappingItems() == this)
        {
            P->SetOverlappingItems(nullptr);
            UE_LOG(LogTemp, Warning, TEXT("Stopped overlapping book: %s"), *GetName());
        }
        if (PressEWidgetInstance)
        {
            PressEWidgetInstance->RemoveFromParent();
            PressEWidgetInstance = nullptr;
        }
    }
}


void ABookItem::SwitchToOpenLoop()
{
    if (!BookMesh || !OpenLoopAnim) return;

    UE_LOG(LogTemp, Warning, TEXT("Book: Switch to OPEN LOOP"));
    BookMesh->PlayAnimation(OpenLoopAnim, /*bLoop=*/true);
}
