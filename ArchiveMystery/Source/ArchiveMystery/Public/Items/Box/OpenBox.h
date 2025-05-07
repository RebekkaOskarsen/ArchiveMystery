// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "OpenBox.generated.h"


UCLASS()
class ARCHIVEMYSTERY_API AOpenBox : public AItems
{
	GENERATED_BODY()

public:
	void Equip(USceneComponent* InParent, FName InSocketName);

	void EnablePhysics(bool bEnable);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	bool bHasBeenPlaced = false;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UUserWidget* PressEWidgetInstance;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* PickupSound;

protected:
	virtual void BeginPlay() override;

	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
};
