// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/Mold.h"
#include "Components/StaticMeshComponent.h"
#include "Mold/MoldMinigame.h"

AMoldMinigame* MoldMinigameRef = nullptr;

// Sets default values
AMold::AMold()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoldMesh"));
	RootComponent = MoldMesh;
	MoldSize = EMoldSize::Small; // Default to small mold
	MoldHealth = 100.0f; // Starts at 100%

	// Enable collision and allow raycast detection
	MoldMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MoldMesh->SetCollisionObjectType(ECC_WorldDynamic);

	//FIX: Change response to allow raycasting!
	MoldMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	MoldMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	MoldMesh->SetGenerateOverlapEvents(true);


}

// Called when the game starts or when spawned
void AMold::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> OverlappingActors;
	MoldMesh->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("MOLD: Currently overlapping with: %s"), *Actor->GetName());
	}
}


void AMold::OnBrushed(EBrushSize BrushSize)
{
	UE_LOG(LogTemp, Warning, TEXT("OnBrushed CALLED! Mold health before: %f"), MoldHealth);

	if ((MoldHealth > 50.0f && BrushSize == EBrushSize::Big) ||
		(MoldHealth <= 50.0f && BrushSize == EBrushSize::Small))
	{
		MoldHealth -= 5.0f;
		UE_LOG(LogTemp, Warning, TEXT("Mold Health After Brush: %f"), MoldHealth);

		if (MoldHealth <= 50.0f && MoldSize == EMoldSize::Big)
		{
			MoldSize = EMoldSize::Small;
			UE_LOG(LogTemp, Warning, TEXT("Mold is now small and can only be cleaned with the small brush."));
		}

		if (MoldHealth <= 0.0f)
		{
			UE_LOG(LogTemp, Warning, TEXT("Mold completely cleaned! Destroying mold."));
			Destroy(); UE_LOG(LogTemp, Warning, TEXT("OnBrushed CALLED! Mold health before: %f"), MoldHealth);

			if ((MoldHealth > 50.0f && BrushSize == EBrushSize::Big) ||
				(MoldHealth <= 50.0f && BrushSize == EBrushSize::Small))
			{
				MoldHealth -= 5.0f;
				UE_LOG(LogTemp, Warning, TEXT("Mold Health After Brush: %f"), MoldHealth);

				if (MoldHealth <= 50.0f && MoldSize == EMoldSize::Big)
				{
					MoldSize = EMoldSize::Small;
					UE_LOG(LogTemp, Warning, TEXT("Mold is now small and can only be cleaned with the small brush."));
				}

				/*if (MoldHealth <= 0.0f)
				{
					UE_LOG(LogTemp, Warning, TEXT("Mold completely cleaned! Destroying mold."));
					Destroy();
				}*/

				if (MoldHealth <= 0.0f)
				{
					UE_LOG(LogTemp, Warning, TEXT("Mold completely cleaned! Destroying mold."));
					if (MoldMinigameRef)
					{
						MoldMinigameRef->OnMoldDestroyed();
					}
					Destroy();
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Incorrect brush size!"));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Incorrect brush size!"));
	}
}

void AMold::SetMoldMinigame(AMoldMinigame* Minigame)
{
	MoldMinigameRef = Minigame;
}

