// Fill out your copyright notice in the Description page of Project Settings.


#include "Door/KeycardItem.h"
#include "Character/Archivist.h"

AKeycardItem::AKeycardItem()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AKeycardItem::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (AArchivist* Archivist = Cast<AArchivist>(OtherActor))
	{
		Archivist->SetOverlappingItems(this);
	}
}

void AKeycardItem::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (AArchivist* Archivist = Cast<AArchivist>(OtherActor))
	{
		if (Archivist->GetOverlappingItems() == this)
		{
			Archivist->SetOverlappingItems(nullptr);
		}
	}
}
