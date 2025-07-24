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
	ATriggerScanner();

protected:
	virtual void BeginPlay() override;

	void ShowScannerWidget();

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* TriggerBox;

	//Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> ScannerWidgetClass;

	UPROPERTY()
	UUserWidget* ScannerWidgetInstance;

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

	UFUNCTION(BlueprintCallable)
	void ScanDocuments();

	//Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PromptWidgetClass;

	UUserWidget* PromptWidgetInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> SecondScannerWidgetClass;

	UPROPERTY()
	UUserWidget* SecondScannerWidgetInstance;

	UFUNCTION()
	void ShowSecondScannerWidget();

};
