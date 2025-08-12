// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Book/BookItem.h"
#include "Character/Archivist.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"

ABookItem::ABookItem()
{
    PrimaryActorTick.bCanEverTick = false;

    BookMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BookMesh"));
    BookMesh->SetupAttachment(RootComponent);
    BookMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Make Single Node mode (shows as “Use Animation Asset” in the editor)
    BookMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);

    // If your base AItems has a StaticMesh ItemMesh, hide it for this item
    if (ItemMesh)
    {
        ItemMesh->SetVisibility(false, true);
        ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
}

void ABookItem::EquipBook(USceneComponent* InParent, FName InSocketName)
{
    if (!BookMesh || !InParent) return;

    BookMesh->SetSimulatePhysics(false);
    BookMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, true);
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    AttachToComponent(InParent, Rules, InSocketName);
}

void ABookItem::UnequipTo(FVector Location, FRotator Rotation)
{
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    SetActorLocation(Location);
    SetActorRotation(Rotation);

    if (BookMesh)
    {
        BookMesh->SetSimulatePhysics(false);
        BookMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
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

void ABookItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    if (AArchivist* P = Cast<AArchivist>(OtherActor))
    {
        P->SetOverlappingItems(this);
        UE_LOG(LogTemp, Warning, TEXT("Overlapping book: %s"), *GetName());
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
    }
}

void ABookItem::SwitchToOpenLoop()
{
    if (!BookMesh || !OpenLoopAnim) return;

    UE_LOG(LogTemp, Warning, TEXT("Book: Switch to OPEN LOOP"));
    BookMesh->PlayAnimation(OpenLoopAnim, /*bLoop=*/true);
}
