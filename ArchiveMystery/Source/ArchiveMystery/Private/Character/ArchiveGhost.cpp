// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchiveGhost.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Character/GhostAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

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

	USkeletalMeshComponent* Mesh = FindComponentByClass<USkeletalMeshComponent>();
	if (Mesh)
	{
		GhostAnimInstance = Cast<UGhostAnimInstance>(Mesh->GetAnimInstance());
	}

	CollisionCapsule = FindComponentByClass<UCapsuleComponent>();
	if (CollisionCapsule)
	{
		CollisionCapsule->OnComponentBeginOverlap.AddDynamic(this, &AArchiveGhost::OnPlayerEnter);
		CollisionCapsule->OnComponentEndOverlap.AddDynamic(this, &AArchiveGhost::OnPlayerExit);
	}
}

// Called every frame
void AArchiveGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GhostAnimInstance)
	{
		const bool bWalking = !bIsManuallyStopped && !bIsPaused;
		const bool bTalking = bIsManuallyStopped && PlayerActor != nullptr;

		// Only update previous state when we first enter talking
		if (bTalking && !GhostAnimInstance->bIsTalking)
		{
			GhostAnimInstance->bWasWalkingBeforeTalking = bWalking;
		}

		GhostAnimInstance->bIsWalking = bWalking;
		GhostAnimInstance->bIsTalking = bTalking;
	}

	if (bIsManuallyStopped)
	{
		if (PlayerActor)
		{
			FVector GhostLocation = GetActorLocation();
			FVector PlayerLocation = PlayerActor->GetActorLocation();

			// Only rotate on yaw
			PlayerLocation.Z = GhostLocation.Z;

			FRotator LookAtRotation = (PlayerLocation - GhostLocation).Rotation();
			FRotator SmoothRotation = FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.0f);
			SetActorRotation(SmoothRotation);
		}
		return;
	}

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
		MoveToTarget(DeltaTime); // Handles movement and patrolling
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

void AArchiveGhost::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA<ACharacter>())
	{
		PlayerActor = OtherActor;
		bIsManuallyStopped = true;
	}
}

void AArchiveGhost::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor == PlayerActor)
	{
		bIsManuallyStopped = false;
		PlayerActor = nullptr;
	}
}

