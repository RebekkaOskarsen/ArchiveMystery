// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "DocumentItem.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API ADocumentItem : public AItems
{
	GENERATED_BODY()
	
public:
	void EquipDocument(USceneComponent* InParent, FName InSocketName);

	//ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Document")
	FName DocumentID;

	//Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PromptWidgetClass;

	UUserWidget* PromptWidgetInstance;

protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

};
