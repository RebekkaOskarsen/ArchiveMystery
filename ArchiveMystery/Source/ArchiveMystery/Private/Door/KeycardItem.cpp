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

	PressEWidgetComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	PressEWidgetComponent->SetVisibility(false);
}

void AKeycardItem::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (AArchivist* Archivist = Cast<AArchivist>(OtherActor))
	{
		Archivist->SetOverlappingItems(this);

		if (PressEWidgetComponent)
		{
			PressEWidgetComponent->SetVisibility(true);
		}
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

		if (PressEWidgetComponent)
		{
			PressEWidgetComponent->SetVisibility(false);
		}
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
