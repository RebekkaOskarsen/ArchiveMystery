// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "Components/TextRenderComponent.h"
#include "Components/BoxComponent.h"    
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/WidgetComponent.h" 
#include "KeycardItem.generated.h"

UENUM(BlueprintType)
enum class EKeycardType : uint8
{
DoubleDoor
};

UCLASS()
class ARCHIVEMYSTERY_API AKeycardItem : public AItems
{
	GENERATED_BODY()
	
public:
	AKeycardItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Keycard")
	EKeycardType KeycardType;

	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) override;

	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) override;

	//Text
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UTextRenderComponent* KeycardText;

	//Press E Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UUserWidget* PressEWidgetInstance;

	UPROPERTY(EditAnywhere, Category = "UI")
	UWidgetComponent* PressEWidgetComponent;


protected:
	virtual void BeginPlay() override;
};
