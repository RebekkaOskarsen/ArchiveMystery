// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchiveGhost.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Character/GhostAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Character/ArchiveGameInstance.h"
#include "Kismet/GameplayStatics.h"

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

	//Restores the ghost's saved  position and the patrol route from ArchiveGameInstance
	if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		if (!GI->GhostLocation.IsZero() && TargetPoints.Num() > 0)
		{
			//Teleport ghost back
			SetActorLocation(GI->GhostLocation);

			//Clamp and restore patrol index
			CurrentTargetIndex = FMath::Clamp(GI->GhostTargetIndex, 0, TargetPoints.Num() - 1);
		}
	}
}

//Ghost continues from the same spot
void AArchiveGhost::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (EndPlayReason == EEndPlayReason::LevelTransition ||
		EndPlayReason == EEndPlayReason::RemovedFromWorld)
	{
		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this)))
		{
			GI->GhostLocation = GetActorLocation();
			GI->GhostTargetIndex = CurrentTargetIndex;
			GI->SaveQuestLogData();
		}
	}
}

// Called every frame
void AArchiveGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Animation
	if (GhostAnimInstance)
	{
		const bool bWalking = !bIsManuallyStopped && !bIsPaused;
		const bool bTalking = bIsManuallyStopped && PlayerActor != nullptr;

		//Only update previous state when we first enter talking
		if (bTalking && !GhostAnimInstance->bIsTalking)
		{
			GhostAnimInstance->bWasWalkingBeforeTalking = bWalking;
		}

		GhostAnimInstance->bIsWalking = bWalking;
		GhostAnimInstance->bIsTalking = bTalking;
	}

	//If ghost is stopped because of player interaction
	if (bIsManuallyStopped)
	{
		if (PlayerActor)
		{
			//Rotates to face player
			FVector GhostLocation = GetActorLocation();
			FVector PlayerLocation = PlayerActor->GetActorLocation();

			PlayerLocation.Z = GhostLocation.Z;

			FRotator LookAtRotation = (PlayerLocation - GhostLocation).Rotation();
			FRotator SmoothRotation = FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.0f);
			SetActorRotation(SmoothRotation);
		}
		return;
	}

	//If ghost is resting between patrol points
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
		MoveToTarget(DeltaTime); //Normal Movement and patrolling if not stopped
	}
}

void AArchiveGhost::MoveToTarget(float DeltaTime)
{
	AActor* Target = TargetPoints[CurrentTargetIndex];
	if (!Target) return;

	FVector CurrentLocation = GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	TargetLocation.Z = CurrentLocation.Z;

	//Rotates towards target
	FVector Direction = TargetLocation - CurrentLocation;
	if (!Direction.IsNearlyZero())
	{
		FRotator TargetRotation = Direction.Rotation();
		FRotator CurrentRotation = GetActorRotation();
		FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, 5.0f);
		SetActorRotation(NewRotation);
	}

	//Moves towards target
	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);

	//If reached target point
	if (FVector::Dist(NewLocation, TargetLocation) < 10.0f)
	{
		bIsPaused = true; //Pause
		PauseTimer = PauseDuration;

		CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetPoints.Num(); //Loop patrol
	}
}

void AArchiveGhost::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA<ACharacter>())
	{
		PlayerActor = OtherActor;
		bIsManuallyStopped = true; //Ghost stop walking when player is in ghost's capsule
	}
}

void AArchiveGhost::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor == PlayerActor)
	{
		bIsManuallyStopped = false; //Ghost resume walking when player is outside of ghost's capsule
		PlayerActor = nullptr;
	}
}

