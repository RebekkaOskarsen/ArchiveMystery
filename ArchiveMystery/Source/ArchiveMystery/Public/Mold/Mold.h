// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MoldBrush.h"
#include "GameFramework/Actor.h"
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
	// Sets default values for this actor's properties
	AMold();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnBrushed(EBrushSize BrushSize);

	void SetMoldMinigame(AMoldMinigame* Minigame);

	UPROPERTY(EditAnywhere, Category = "Mold")
	UStaticMeshComponent* MoldMesh;

	// Health values exposed to the editor
	UPROPERTY(EditAnywhere, Category = "Mold")
	float MoldHealth;

	UPROPERTY(EditAnywhere, Category = "Mold")
	float MaxHealth;  // Maximum health value

	UPROPERTY(EditAnywhere, Category = "Mold")
	float MinHealth;  // Minimum health value

	EMoldSize MoldSize;

	// Stores which paper this mold belongs to (1 or 2)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mold")
	int32 PaperIndex;

	UPROPERTY()
	AMoldMinigame* MoldMinigameRef;

	UPROPERTY()
	bool bIsDestroyed = false;

};
