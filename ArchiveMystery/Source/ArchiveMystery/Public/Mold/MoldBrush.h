// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoldBrush.generated.h"

UENUM(BlueprintType)
enum class EBrushSize : uint8
{
	Small UMETA(DisplayName = "Small"),
	Big UMETA(DisplayName = "Big")
};

UCLASS()
class ARCHIVEMYSTERY_API AMoldBrush : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoldBrush();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetBrushSize(EBrushSize NewSize);
	EBrushSize GetBrushSize() const { return CurrentBrushSize; }

	// Function to check if the brush is hovering over mold
	void CheckForMold();

	// Time between brush strokes in seconds
	UPROPERTY(EditAnywhere, Category = "Brushing")
	float BrushCooldown = 0.03f; // You can tweak this in-editor

	// Internal cooldown timer
	float TimeSinceLastBrush = 0.0f;

private:
	EBrushSize CurrentBrushSize;
	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMeshComponent* BrushMesh;

	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMesh* SmallBrushMesh;

	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMesh* BigBrushMesh;

	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* BrushSound;

	void UpdateCursorMesh();


};
