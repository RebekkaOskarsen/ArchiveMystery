// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/Mold.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Mold/MoldMinigame.h"

AMoldMinigame* MoldMinigameRef = nullptr;

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
	
	MoldMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MoldMesh->SetCollisionObjectType(ECC_WorldDynamic);

	MoldMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	MoldMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	MoldMesh->SetGenerateOverlapEvents(true);


}

void AMold::BeginPlay()
{
	Super::BeginPlay();

}

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
		return;
	}

	AMoldMinigame* Minigame = Cast<AMoldMinigame>(UGameplayStatics::GetActorOfClass(GetWorld(), AMoldMinigame::StaticClass()));

	if (Minigame && !Minigame->bCanBrush)
	{
		return;
	}

	bool bCorrectBrush = (BrushSize == EBrushSize::Big && MoldHealth > MinHealth && MinHealth == 50) ||
		(BrushSize == EBrushSize::Big && MoldHealth == MinHealth && MinHealth == 50) ||
		(BrushSize == EBrushSize::Small && MoldHealth > MinHealth && MinHealth == 0) ||
		(BrushSize == EBrushSize::Small && MoldHealth == MinHealth && MinHealth == 0);

	if (bCorrectBrush)
	{
		MoldHealth -= 25.0f;

		if (SparkleEffect)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				SparkleEffect,
				GetActorLocation(),
				GetActorRotation()
			);
		}

		if (MoldHealth <= MinHealth && MoldSize == EMoldSize::Big)
		{
			MoldSize = EMoldSize::Small;
		}

		if ((BrushSize == EBrushSize::Big && MoldHealth <= MinHealth && MinHealth == 50) ||
			(BrushSize == EBrushSize::Small && MoldHealth <= MinHealth && MinHealth == 0))
		{
			bIsDestroyed = true;

			MoldMinigameRef->OnMoldDestroyed();

			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
		}
	}
}

void AMold::SetMoldMinigame(AMoldMinigame* Minigame)
{
	MoldMinigameRef = Minigame;
}

void AMold::ResetMold()
{
	bIsDestroyed = false;
	MoldSize = EMoldSize::Big;
	MoldHealth = MaxHealth;

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}

