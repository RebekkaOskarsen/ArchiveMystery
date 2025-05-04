// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerScanner.generated.h"

class UBoxComponent;
class UUserWidget;

UCLASS()
class ARCHIVEMYSTERY_API ATriggerScanner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATriggerScanner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ShowScannerWidget();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ScannerWidgetClass;

	UPROPERTY()
	UUserWidget* ScannerWidgetInstance;

	bool bPlayerIsInside;

	void CheckForInteraction();

public:
	// Functions for overlap
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Called when the player presses the Scan button
	UFUNCTION(BlueprintCallable)
	void ScanDocuments();

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PromptWidgetClass;

	UUserWidget* PromptWidgetInstance;
};
