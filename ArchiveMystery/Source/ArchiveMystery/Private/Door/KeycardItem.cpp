// Fill out your copyright notice in the Description page of Project Settings.


#include "Door/KeycardItem.h"
#include "Character/Archivist.h"
#include "Components/WidgetComponent.h"

AKeycardItem::AKeycardItem()
{
	PrimaryActorTick.bCanEverTick = false;

	KeycardText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("KeycardText"));
	KeycardText->SetupAttachment(RootComponent);
	KeycardText->SetHorizontalAlignment(EHTA_Center);
	KeycardText->SetVerticalAlignment(EVRTA_TextCenter);
	KeycardText->SetTextRenderColor(FColor::Black);
	KeycardText->SetWorldSize(12.f);
	KeycardText->SetRelativeRotation(FRotator(90.f, 0.f, 180.f));
	KeycardText->SetRelativeLocation(FVector(0.f, 0.f, 1.2f));

	PressEWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("PressEWidgetComp"));
	PressEWidgetComponent->SetupAttachment(RootComponent);
	PressEWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	PressEWidgetComponent->SetDrawAtDesiredSize(true);
	PressEWidgetComponent->SetVisibility(false);

	// prepare mesh for custom depth but start disabled
	if (ItemMesh)
	{
		ItemMesh->SetRenderCustomDepth(false);
		ItemMesh->SetCustomDepthStencilValue(252);
	}
}

void AKeycardItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	if (AArchivist* Player = Cast<AArchivist>(OtherActor))
	{
		Player->SetOverlappingItems(this);
		PressEWidgetComponent->SetVisibility(true);
	}
}

void AKeycardItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

	if (AArchivist* Player = Cast<AArchivist>(OtherActor))
	{
		if (Player->GetOverlappingItems() == this)
			Player->SetOverlappingItems(nullptr);

		PressEWidgetComponent->SetVisibility(false);
	}
}

void AKeycardItem::BeginPlay()
{
	Super::BeginPlay();

	FText Label;

	switch (KeycardType)
	{
	case EKeycardType::DoubleDoor:
		Label = NSLOCTEXT("Keycard", "KeycardLabel", "Keycard");
		break;
	}

	if (KeycardText)
	{
		KeycardText->SetText(Label);
	}

	if (PressEWidgetClass && PressEWidgetComponent)
	{
		PressEWidgetComponent->SetWidgetClass(PressEWidgetClass);
	}
}
