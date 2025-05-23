// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Document/DocumentItem.h"
#include "Character/Archivist.h"

void ADocumentItem::EquipDocument(USceneComponent* InParent, FName InSocketName)
{
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	ItemMesh->AttachToComponent(InParent, AttachmentRules, InSocketName);

	ItemMesh->SetSimulatePhysics(false);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ItemMesh->SetGenerateOverlapEvents(false);
}

void ADocumentItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AArchivist* Archivist = Cast<AArchivist>(OtherActor);
	if (Archivist)
	{
		Archivist->SetOverlappingItems(this);

		if (PromptWidgetClass && !PromptWidgetInstance)
		{
			PromptWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PromptWidgetClass);
			if (PromptWidgetInstance)
			{
				PromptWidgetInstance->AddToViewport();
			}
		}
	}
}

void ADocumentItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

	AArchivist* Archivist = Cast<AArchivist>(OtherActor);
	if (Archivist && Archivist->GetOverlappingItems() == this)
	{
		Archivist->SetOverlappingItems(nullptr);
	}

	if (PromptWidgetInstance)
	{
		PromptWidgetInstance->RemoveFromParent();
		PromptWidgetInstance = nullptr;
	}
}
