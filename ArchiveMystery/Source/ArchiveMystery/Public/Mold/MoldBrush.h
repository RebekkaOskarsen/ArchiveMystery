// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
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

	FTimerHandle FallbackBrushTimerHandle;
	void ResetBrushCooldown();

	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraSystem* BrushingEffect;

	UPROPERTY(EditAnywhere, Category = "Effects")
	FVector EffectOffset = FVector(0.f, 0.f, 0.f);


	UPROPERTY()
	UAudioComponent* BrushAudioComponent;


	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* BrushSound;


private:
	EBrushSize CurrentBrushSize;
	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMeshComponent* BrushMesh;

	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMesh* SmallBrushMesh;

	UPROPERTY(EditAnywhere, Category = "Brush")
	UStaticMesh* BigBrushMesh;

	UFUNCTION()
	void OnBrushSoundFinished();

	void UpdateCursorMesh();

	bool bCanBrush = true;

	bool bHasBrushedThisStroke = false;
};
