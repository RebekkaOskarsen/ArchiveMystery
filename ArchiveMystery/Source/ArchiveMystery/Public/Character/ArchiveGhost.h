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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditInstanceOnly, Category = "Ghost Patrol")
	TArray<AActor*> TargetPoints;

	UPROPERTY(EditAnywhere, Category = "Ghost Patrol")
	float MoveSpeed = 100.0f;

private:
	int32 CurrentTargetIndex = 0;

	bool bIsPaused = false;
	float PauseTimer = 0.0f;

	void MoveToTarget(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = "Ghost Patrol")
	float PauseDuration = 5.0f;
};
