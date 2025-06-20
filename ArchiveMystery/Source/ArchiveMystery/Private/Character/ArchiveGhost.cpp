// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchiveGhost.h"


// Sets default values
AArchiveGhost::AArchiveGhost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArchiveGhost::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AArchiveGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TargetPoints.Num() == 0) return;

	if (bIsPaused)
	{
		PauseTimer -= DeltaTime;
		if (PauseTimer <= 0.0f)
		{
			bIsPaused = false;
		}
	}
	else
	{
		MoveToTarget(DeltaTime);
	}
}

void AArchiveGhost::MoveToTarget(float DeltaTime)
{
	AActor* Target = TargetPoints[CurrentTargetIndex];
	if (!Target) return;

	FVector CurrentLocation = GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	TargetLocation.Z = CurrentLocation.Z;

	FVector Direction = TargetLocation - CurrentLocation;
	if (!Direction.IsNearlyZero())
	{
		FRotator TargetRotation = Direction.Rotation();
		FRotator CurrentRotation = GetActorRotation();
		FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, 5.0f);
		SetActorRotation(NewRotation);
	}

	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);

	if (FVector::Dist(NewLocation, TargetLocation) < 10.0f)
	{
		bIsPaused = true;
		PauseTimer = PauseDuration;

		CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetPoints.Num();
	}
}

