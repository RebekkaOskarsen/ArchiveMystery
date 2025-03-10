// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/TriggerMoldGame.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Archivist.h"

// Sets default values
ATriggerMoldGame::ATriggerMoldGame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerMoldGame::OnOverlapBegin);

}

// Called when the game starts or when spawned
void ATriggerMoldGame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerMoldGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerMoldGame::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		// Open Maze Level
		UGameplayStatics::OpenLevel(this, FName("MoldRoom"));
	}
}

