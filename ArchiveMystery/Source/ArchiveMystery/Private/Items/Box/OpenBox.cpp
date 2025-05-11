// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Box/OpenBox.h"
#include "Character/Archivist.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

void AOpenBox::Equip(USceneComponent* InParent, FName InSocketName)
{
    if (!InParent) return;

    EnablePhysics(false);

    //Attach to characters hand
    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    AttachToComponent(InParent, AttachmentRules, InSocketName);

    ItemMesh->UnregisterComponent();
    ItemMesh->RegisterComponent();

    if (PickupSound)
    {
        UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
    }
}

void AOpenBox::EnablePhysics(bool bEnable)
{
    if (!ItemMesh) return;

    ItemMesh->SetSimulatePhysics(bEnable);
    ItemMesh->SetEnableGravity(bEnable);
    ItemMesh->SetCollisionEnabled(bEnable ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
    Sphere->SetCollisionEnabled(bEnable ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);

    if (bEnable)
    {
        ItemMesh->WakeAllRigidBodies();
    }
    else
    {
        ItemMesh->PutAllRigidBodiesToSleep();
        ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
        ItemMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
    }
}

void AOpenBox::BeginPlay()
{
    Super::BeginPlay();

    ItemMesh->bCastInsetShadow = false;
    ItemMesh->bCastDynamicShadow = false;
    ItemMesh->CastShadow = false;

}

void AOpenBox::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    AArchivist* Archivist = Cast<AArchivist>(OtherActor);
    if (Archivist)
    {
        Archivist->SetOverlappingItems(this);

        if (PressEWidgetClass && !PressEWidgetInstance)
        {
            PressEWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PressEWidgetClass);
            if (PressEWidgetInstance)
            {
                PressEWidgetInstance->AddToViewport();
            }
        }
    }
}

void AOpenBox::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

    AArchivist* Archivist = Cast<AArchivist>(OtherActor);
    if (Archivist && Archivist->GetOverlappingItems() == this)
    {
        Archivist->SetOverlappingItems(nullptr);
    }

    if (PressEWidgetInstance)
    {
        PressEWidgetInstance->RemoveFromParent();
        PressEWidgetInstance = nullptr;
    }
}
