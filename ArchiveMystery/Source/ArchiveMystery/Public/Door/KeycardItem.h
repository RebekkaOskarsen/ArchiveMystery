// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "Components/TextRenderComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
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

	//Text
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UTextRenderComponent* KeycardText;

	//Press E Widget
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PressEWidgetClass;

	UUserWidget* PressEWidgetInstance;

	//Particle
	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* Sparkle;

protected:
	virtual void BeginPlay() override;
};
