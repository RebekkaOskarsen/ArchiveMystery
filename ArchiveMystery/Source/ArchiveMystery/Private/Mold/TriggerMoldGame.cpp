// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/TriggerMoldGame.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

#include "Character/Archivist.h"

#include "Blueprint/UserWidget.h"


// Sets default values
ATriggerMoldGame::ATriggerMoldGame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerMoldGame::OnOverlapBegin);

	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerMoldGame::OnOverlapEnd);

	bPlayerIsInside = false; // Player starts outside the trigger
	MiniGamePrompt = nullptr; // No UI at the start
}

// Called when the game starts or when spawned
void ATriggerMoldGame::BeginPlay()
{
	Super::BeginPlay();
	
	// Enable input for this actor
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}
}

// Called every frame
void ATriggerMoldGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckForInteraction();
}

void ATriggerMoldGame::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = true;
		ShowPrompt();
	}
}

void ATriggerMoldGame::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->IsA(AArchivist::StaticClass()))
	{
		bPlayerIsInside = false;
		HidePrompt();
	}
}

void ATriggerMoldGame::CheckForInteraction()
{
	if (bPlayerIsInside)
	{
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		AArchivist* Archivist = Cast<AArchivist>(UGameplayStatics::GetPlayerCharacter(this, 0));

		if (PlayerController && Archivist && PlayerController->WasInputKeyJustPressed(EKeys::E))
		{
			if (Archivist->bHasPlacedBox && Archivist->bHasFinishedShreddedPaperMinigame)
			{
				UE_LOG(LogTemp, Warning, TEXT("E key pressed! Loading MoldRoom..."));
				HidePrompt();
				UGameplayStatics::OpenLevel(this, FName("MoldRoom"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("You must place the box and finish the shredded paper minigame first!"));
				// Optional: Show a UI message instead of just logging
			}
			UE_LOG(LogTemp, Warning, TEXT("bHasPlacedBox: %s"), Archivist->bHasPlacedBox ? TEXT("true") : TEXT("false"));
			UE_LOG(LogTemp, Warning, TEXT("bHasFinishedShreddedPaperMinigame: %s"), Archivist->bHasFinishedShreddedPaperMinigame ? TEXT("true") : TEXT("false"));
		}
	}
}

void ATriggerMoldGame::ShowPrompt()
{
	if (!MiniGamePrompt && MiniGamePromptClass)
	{
		MiniGamePrompt = CreateWidget<UUserWidget>(GetWorld(), MiniGamePromptClass);
		if (MiniGamePrompt)
		{
			MiniGamePrompt->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("MiniGame Prompt Displayed!"));
		}
	}
}

void ATriggerMoldGame::HidePrompt()
{
	if (MiniGamePrompt)
	{
		MiniGamePrompt->RemoveFromParent();
		MiniGamePrompt = nullptr;
		UE_LOG(LogTemp, Warning, TEXT("MiniGame Prompt Removed!"));
	}
}

