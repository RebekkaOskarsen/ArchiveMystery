// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldMinigame.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Mold/Mold.h"

// Sets default values
AMoldMinigame::AMoldMinigame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Static Camera
	MoldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MoldCamera"));
	RootComponent = MoldCamera;

	MoldCount = 0;
}

// Called when the game starts or when spawned
void AMoldMinigame::BeginPlay()
{
	Super::BeginPlay();

	// Set the player's camera to this one
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->SetViewTarget(this);
	}

	// Count all mold instances at the start
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold)
		{
			Mold->SetMoldMinigame(this);
		}
	}
	MoldCount = MoldActors.Num();

	UE_LOG(LogTemp, Warning, TEXT("MoldMinigame: Total mold count = %d"), MoldCount);
}

// Called every frame
void AMoldMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMoldMinigame::OnMoldDestroyed()
{
	MoldCount--;
	UE_LOG(LogTemp, Warning, TEXT("MoldMinigame: Remaining mold = %d"), MoldCount);
	CheckWinCondition();
}

void AMoldMinigame::CheckWinCondition()
{
	if (MoldCount <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoldMinigame: All mold is cleaned! YOU WIN!"));
		// TODO: Implement UI or transition back to the main game
	}
}

