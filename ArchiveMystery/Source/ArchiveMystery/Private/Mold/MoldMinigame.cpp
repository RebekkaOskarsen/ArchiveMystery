// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldMinigame.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/Mold.h"

#include "Blueprint/UserWidget.h"

// Sets default values
AMoldMinigame::AMoldMinigame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Static Camera
	MoldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MoldCamera"));
	RootComponent = MoldCamera;

	CurrentPaperIndex = 1; // Start with Paper 1
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

	// Find all actors tagged as "Paper"
	TArray<AActor*> PaperActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Paper"), PaperActors);

	for (AActor* PaperActor : PaperActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found Paper Actor: %s"), *PaperActor->GetName());

		if (PaperActor->ActorHasTag(TEXT("Paper1")))
		{
			Paper1 = PaperActor;
			UE_LOG(LogTemp, Warning, TEXT("Paper1 found: %s"), *Paper1->GetName());
		}
		else if (PaperActor->ActorHasTag(TEXT("Paper2")))
		{
			Paper2 = PaperActor;
			UE_LOG(LogTemp, Warning, TEXT("Paper2 found: %s"), *Paper2->GetName());
		}
	}

	if (Paper1)
	{
		Paper1->SetActorHiddenInGame(false);
	}

	if (Paper2)
	{
		Paper2->SetActorHiddenInGame(true);
	}

	SpawnMoldForCurrentPaper();
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

void AMoldMinigame::SpawnMoldForCurrentPaper()
{
	TArray<AActor*> MoldActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMold::StaticClass(), MoldActors);

	MoldCount = 0;

	for (AActor* MoldActor : MoldActors)
	{
		AMold* Mold = Cast<AMold>(MoldActor);
		if (Mold && Mold->PaperIndex == CurrentPaperIndex)
		{
			Mold->SetMoldMinigame(this);

			MoldCount++;
		}
	}
}

void AMoldMinigame::CheckWinCondition()
{
	if (MoldCount <= 0)
	{
		if (CurrentPaperIndex == 1)
		{

			if (Paper1)
			{
				Paper1->SetActorHiddenInGame(true);
				Paper1->SetActorEnableCollision(false);
			}

			if (Paper2)
			{
				Paper2->SetActorHiddenInGame(false);
				Paper2->SetActorEnableCollision(true);
			}

			CurrentPaperIndex = 2;
			SpawnMoldForCurrentPaper();
		}
		else
		{
			ShowExitUI();
		}
	}
}

void AMoldMinigame::ShowExitUI()
{
	if (ExitWidgetClass)
	{
		ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass);
		if (ExitWidget)
		{
			ExitWidget->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("Exit UI Displayed."));
		}
	}
}

