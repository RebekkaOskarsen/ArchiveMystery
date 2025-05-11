// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/TriggerMoldGame.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

#include "Character/Archivist.h"
#include "Character/ArchiveGameInstance.h"

#include "Blueprint/UserWidget.h"

ATriggerMoldGame::ATriggerMoldGame()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerMoldGame::OnOverlapBegin);

	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerMoldGame::OnOverlapEnd);

	bPlayerIsInside = false;
	MiniGamePrompt = nullptr;
}

void ATriggerMoldGame::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}
}

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
				UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
				if (GameInstance && Archivist)
				{
					GameInstance->SavedPlayerLocation = Archivist->GetActorLocation();
					GameInstance->bMoldGameComplete = true;
				}

				Archivist->bHasFinishedMoldMinigame = true;
				HidePrompt();
				UGameplayStatics::OpenLevel(this, FName("MoldRoom"));
			}
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
		}
	}
}

void ATriggerMoldGame::HidePrompt()
{
	if (MiniGamePrompt)
	{
		MiniGamePrompt->RemoveFromParent();
		MiniGamePrompt = nullptr;
	}
}

