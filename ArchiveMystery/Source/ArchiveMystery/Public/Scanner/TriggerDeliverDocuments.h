// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerDeliverDocuments.generated.h"

class UBoxComponent;
class UUserWidget;

UCLASS()
class ARCHIVEMYSTERY_API ATriggerDeliverDocuments : public AActor
{
	GENERATED_BODY()

public:
	ATriggerDeliverDocuments();

protected:
	virtual void BeginPlay() override;

	void ShowDeliverDocumentsWidget();
public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	//Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> DeliverDocumentsWidgetClass;

	UPROPERTY()
	UUserWidget* DeliverDocumentsWidgetInstance;

	bool bPlayerIsInside;

	void CheckForInteraction();

public:
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UUserWidget* PressEWidgetInstance;
};
