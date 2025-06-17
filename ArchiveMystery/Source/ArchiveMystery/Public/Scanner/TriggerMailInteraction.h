// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerMailInteraction.generated.h"

class UBoxComponent;
class UUserWidget;

UCLASS()
class ARCHIVEMYSTERY_API ATriggerMailInteraction : public AActor
{
	GENERATED_BODY()

public:
	ATriggerMailInteraction();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MailWidgetClass;

	UPROPERTY()
	UUserWidget* MailWidgetInstance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UPROPERTY()
	UUserWidget* PressEWidgetInstance;

	bool bPlayerIsInside;

	void ShowMailWidget();
	void CheckForInteraction();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
