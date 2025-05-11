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
	AMoldBrush();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	//Brush size: Small or Big
	void SetBrushSize(EBrushSize NewSize);
	EBrushSize GetBrushSize() const { return CurrentBrushSize; }

	//Check if the brush is hovering over mold
	void CheckForMold();

	FTimerHandle FallbackBrushTimerHandle;
	void ResetBrushCooldown();

	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraSystem* BrushingEffect;

	UPROPERTY(EditAnywhere, Category = "Effects")
	FVector EffectOffset = FVector(0.f, 0.f, 0.f);

	//Sound
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

	//Brush sound finished
	UFUNCTION()
	void OnBrushSoundFinished();

	//------------------------------------//

	void UpdateCursorMesh();

	bool bCanBrush = true;

	bool bHasBrushedThisStroke = false;
};
