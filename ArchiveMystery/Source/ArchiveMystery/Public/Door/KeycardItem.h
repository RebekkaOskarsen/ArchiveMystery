// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "KeycardItem.generated.h"

UENUM(BlueprintType)
enum class EKeycardType : uint8
{
	Garage,
	Archive,
	Equipment
};

UCLASS()
class ARCHIVEMYSTERY_API AKeycardItem : public AItems
{
	GENERATED_BODY()
	
public:
	AKeycardItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Keycard")
	EKeycardType KeycardType;

	void NotifyActorBeginOverlap(AActor* OtherActor);

	void NotifyActorEndOverlap(AActor* OtherActor);
};
