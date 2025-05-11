// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MoldBrush.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Mold.generated.h"

class AMoldMinigame;

UENUM(BlueprintType)
enum class EMoldSize : uint8
{
	Small UMETA(DisplayName = "Small"),
	Big UMETA(DisplayName = "Big")
};

UCLASS()
class ARCHIVEMYSTERY_API AMold : public AActor
{
	GENERATED_BODY()

public:
	AMold();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void OnBrushed(EBrushSize BrushSize);

	void SetMoldMinigame(AMoldMinigame* Minigame);

	UPROPERTY(EditAnywhere, Category = "Mold")
	UStaticMeshComponent* MoldMesh;

	//Health
	UPROPERTY(EditAnywhere, Category = "Mold")
	float MoldHealth;

	UPROPERTY(EditAnywhere, Category = "Mold")
	float MaxHealth; 

	UPROPERTY(EditAnywhere, Category = "Mold")
	float MinHealth;

	//-------------------------------------------//

	EMoldSize MoldSize;

	//Stores which paper this mold belongs to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mold")
	int32 PaperIndex;

	UPROPERTY()
	AMoldMinigame* MoldMinigameRef;

	UPROPERTY()
	bool bIsDestroyed = false;

	//Particle: Isnt sparkle anymore, but more like dust
	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraSystem* SparkleEffect;

};
