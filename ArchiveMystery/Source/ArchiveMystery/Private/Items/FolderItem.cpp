// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/FolderItem.h"

#include "Character/Archivist.h"
#include "Components/SphereComponent.h"
#include <Character/ArchiveGameInstance.h>

AFolderItem::AFolderItem()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    Mesh->SetSimulatePhysics(true);

    bIsPickedUp = false;

    OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    OverlapSphere->SetupAttachment(RootComponent);

    // Sett radius (tilpass etter størrelse på mesh)
    OverlapSphere->InitSphereRadius(50.f);

    // Gjør den kun til overlap, ikke blokk
    OverlapSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    OverlapSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    OverlapSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

void AFolderItem::BeginPlay()
{
    Super::BeginPlay();
    OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AFolderItem::OnOverlapBegin);
    OverlapSphere->OnComponentEndOverlap.AddDynamic(this, &AFolderItem::OnOverlapEnd);

}

void AFolderItem::OnPickedUp(USkeletalMeshComponent* AttachToMesh, FName SocketName)
{
    if (bIsScannedAndLocked)
    {
        UE_LOG(LogTemp, Warning, TEXT("Folderen er låst og kan ikke plukkes opp igjen."));
        return;
    }

	if (!AttachToMesh) return;

    // Fjern prompt-widget om den vises
    if (PickupPromptWidgetInstance)
    {
        PickupPromptWidgetInstance->RemoveFromParent();
        PickupPromptWidgetInstance = nullptr;
        UE_LOG(LogTemp, Warning, TEXT("Pickup prompt widget fjernet fordi folderen ble plukket opp."));
    }

    Mesh->SetSimulatePhysics(false);
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    AttachToComponent(AttachToMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);

    bIsPickedUp = true;
}

void AFolderItem::OnDropped()
{
    DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    Mesh->SetSimulatePhysics(true);
    Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    bIsPickedUp = false;
}

void AFolderItem::OnOverlapBegin(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{

    if (bIsScannedAndLocked)
    {
        return;
    }

    if (OtherActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("AFolderItem overlappet med: %s"), *OtherActor->GetName());

        // Ikke vis prompt hvis allerede plukket opp
        if (bIsPickedUp)
        {
            UE_LOG(LogTemp, Warning, TEXT("Folder already picked up – viser ikke widget."));
            return;
        }

        // Sjekk GameInstance
        UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
        if (GI && !GI->bDatabaseMinigameComplete)
        {
            UE_LOG(LogTemp, Warning, TEXT("Database minispillet ikke ferdig – viser ikke widget."));
            return;
        }

        AArchivist* Player = Cast<AArchivist>(OtherActor);
        if (Player)
        {
            Player->SetOverlappingItems(this);

            // Vis widget kun hvis vi har lov til å plukke opp
            if (PickupPromptWidgetClass && !PickupPromptWidgetInstance)
            {
                PickupPromptWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PickupPromptWidgetClass);
                if (PickupPromptWidgetInstance)
                {
                    PickupPromptWidgetInstance->AddToViewport();
                    UE_LOG(LogTemp, Warning, TEXT("Pickup prompt widget vises."));
                }
            }
        }
    }
}


void AFolderItem::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor)
    {
        AArchivist* Player = Cast<AArchivist>(OtherActor);
        if (Player)
        {
            Player->SetOverlappingItems(nullptr);

            // Skjule prompt-widget
            if (PickupPromptWidgetInstance)
            {
                PickupPromptWidgetInstance->RemoveFromParent();
                PickupPromptWidgetInstance = nullptr;
                UE_LOG(LogTemp, Warning, TEXT("Pickup prompt widget fjernet."));
            }
        }
    }
}

