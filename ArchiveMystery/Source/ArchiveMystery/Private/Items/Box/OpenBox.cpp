// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Box/OpenBox.h"
#include "Character/Archivist.h"
#include "Components/SphereComponent.h"

void AOpenBox::Equip(USceneComponent* InParent, FName InSocketName)
{
    if (!InParent) return;

    // Disable physics before attaching
    EnablePhysics(false);

    // Attach to the new parent
    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
    AttachToComponent(InParent, AttachmentRules, InSocketName);
}

void AOpenBox::EnablePhysics(bool bEnable)
{
    if (!ItemMesh) return;

    ItemMesh->SetSimulatePhysics(bEnable);
    ItemMesh->SetCollisionEnabled(bEnable ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
    Sphere->SetCollisionEnabled(bEnable ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);

    if (bEnable)
    {
        // When enabling physics, wake the rigid body
        ItemMesh->WakeAllRigidBodies();
    }
    else
    {
        // When disabling, put to sleep and clear forces
        ItemMesh->PutAllRigidBodiesToSleep();
        ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
        ItemMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
    }
}

void AOpenBox::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AOpenBox::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}
