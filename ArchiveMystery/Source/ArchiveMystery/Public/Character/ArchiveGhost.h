// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchiveGhost.generated.h"

UCLASS()
class ARCHIVEMYSTERY_API AArchiveGhost : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArchiveGhost();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditInstanceOnly, Category = "Ghost Patrol")
	TArray<AActor*> TargetPoints;

	UPROPERTY(EditAnywhere, Category = "Ghost Patrol")
	float MoveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Ghost Patrol")
	float PauseDuration = 5.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ghost")
	class UCapsuleComponent* CollisionCapsule;

	UFUNCTION(BlueprintCallable, Category = "GhostSave")
	int32 GetCurrentTargetIndex() const { return CurrentTargetIndex; }

	UFUNCTION(BlueprintCallable, Category = "GhostSave")
	void SetCurrentTargetIndex(int32 NewIndex) { CurrentTargetIndex = NewIndex; }

private:
	int32 CurrentTargetIndex = 0;

	bool bIsPaused = false;
	float PauseTimer = 0.0f;

	bool bIsManuallyStopped = false;

	void MoveToTarget(float DeltaTime);

	AActor* PlayerActor = nullptr;

	class UGhostAnimInstance* GhostAnimInstance = nullptr;

	// Overlap functions
	UFUNCTION()
	void OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
