// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"
#include "Items/Box/OpenBox.h"

AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = ItemMesh;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(GetRootComponent());
}

void AItems::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AItems::OnSphereOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AItems::OnSphereEndOverlap);
}

void AItems::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AArchivist* Archivist = Cast<AArchivist>(OtherActor);
	if (Archivist)
	{
		if (Archivist->GetEquippedBox() == Cast<AOpenBox>(this))
		{
			return;
		}

		if (Archivist->GetOverlappingItems() != this)
		{
			Archivist->SetOverlappingItems(this);
		}
	}
}

void AItems::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AArchivist* Archivist = Cast<AArchivist>(OtherActor);
	if (Archivist)
	{
		Archivist->SetOverlappingItems(nullptr);
	}
}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItems::OnEquipped()
{
	if (Sphere)
	{
		Sphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Sphere->SetGenerateOverlapEvents(false);
	}

	if (ItemMesh)
	{
		ItemMesh->SetSimulatePhysics(false);
		ItemMesh->SetEnableGravity(false);
	}

}

void AItems::OnUnequipped()
{
	if (Sphere)
	{
		Sphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		Sphere->SetGenerateOverlapEvents(true);
	}
}

