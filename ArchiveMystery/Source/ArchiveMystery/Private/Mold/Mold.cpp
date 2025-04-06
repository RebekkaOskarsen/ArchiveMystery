// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/Mold.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/MoldMinigame.h"

AMoldMinigame* MoldMinigameRef = nullptr;

// Sets default values
AMold::AMold()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoldMesh"));
	RootComponent = MoldMesh;

	MoldHealth = 100.0f;
	MaxHealth = 100.0f;
	MinHealth = 50.0f;
	MoldSize = EMoldSize::Big;

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
}


void AMold::OnBrushed(EBrushSize BrushSize)
{
	if (bIsDestroyed)
	{
		UE_LOG(LogTemp, Warning, TEXT("This mold has already been destroyed!"));
		return;
	}

	// Get the MoldMinigame instance
	AMoldMinigame* Minigame = Cast<AMoldMinigame>(UGameplayStatics::GetActorOfClass(GetWorld(), AMoldMinigame::StaticClass()));

	if (Minigame && !Minigame->bCanBrush)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot brush yet! Complete the tutorial first."));
		return;
	}

	bool bCorrectBrush = (BrushSize == EBrushSize::Big && MoldHealth > MinHealth && MinHealth == 50) ||
		(BrushSize == EBrushSize::Big && MoldHealth == MinHealth && MinHealth == 50) ||
		(BrushSize == EBrushSize::Small && MoldHealth > MinHealth && MinHealth == 0) ||
		(BrushSize == EBrushSize::Small && MoldHealth == MinHealth && MinHealth == 0);

	if (bCorrectBrush)
	{
		MoldHealth -= 25.0f;

		if (MoldHealth <= MinHealth && MoldSize == EMoldSize::Big)
		{
			MoldSize = EMoldSize::Small;
		}

		if ((BrushSize == EBrushSize::Big && MoldHealth <= MinHealth && MinHealth == 50) ||
			(BrushSize == EBrushSize::Small && MoldHealth <= MinHealth && MinHealth == 0))
		{
			if (SparkleEffect)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),
					SparkleEffect,
					GetActorLocation(),
					GetActorRotation()
				);
			}

			UE_LOG(LogTemp, Warning, TEXT("Mold completely cleaned! Destroying mold."));

			bIsDestroyed = true;

			MoldMinigameRef->OnMoldDestroyed();
			Destroy();
		}
	}
}

void AMold::SetMoldMinigame(AMoldMinigame* Minigame)
{
	MoldMinigameRef = Minigame;
}

