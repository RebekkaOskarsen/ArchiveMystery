// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Archivist.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Items/Items.h"
#include "Items/Box/OpenBox.h"

#include <Kismet/GameplayStatics.h>
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"

#include "HUD/MainMenuWidget.h"


AArchivist::AArchivist()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 100.f;

	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(SpringArm);

	bUseControllerRotationPitch = true;

	SpringArm->bInheritPitch = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	MainMenuWidgetClass = nullptr;
}

void AArchivist::BeginPlay()
{
	Super::BeginPlay();

	// Sjekk om vi er i riktig nivå (startmenyen)
	if (GetWorld()->GetMapName().Contains("MainMenuLevel"))
	{
		// Sjekk om MainMenuWidgetClass er satt
		if (MainMenuWidgetClass)
		{
			// Opprett og vis startmenyen
			MainMenuWidget = CreateWidget<UMainMenuWidget>(GetWorld(), MainMenuWidgetClass);
			if (MainMenuWidget)
			{
				MainMenuWidget->AddToViewport();
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MainMenuWidgetClass is not set in AArchivist!"));
		}
	}

	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance && !GameInstance->SavedPlayerLocation.IsZero())
	{
		SetActorLocation(GameInstance->SavedPlayerLocation);
		UE_LOG(LogTemp, Warning, TEXT("Restored player location: %s"), *GameInstance->SavedPlayerLocation.ToString());
	}

	if (MinigameTriggerBox)
	{
		MinigameTriggerBox->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnOverlapBegin);
		MinigameTriggerBox->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnOverlapEnd);
	}

	for (FPaintingInfo& PaintingInfo : Paintings)
	{
		if (PaintingInfo.PaintingTriggerBox)
		{
			// Bind overlap-hendelsene til triggerboksene
			PaintingInfo.PaintingTriggerBox->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnPaintingTriggerBeginOverlap);
			PaintingInfo.PaintingTriggerBox->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnPaintingTriggerEndOverlap);
		}
	}
	
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(CharacterMappingContext, 0);
		}
	}
}

void AArchivist::Move(const FInputActionValue& Value)
{
	const FVector2D DirectionValue = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Forward, DirectionValue.Y);

		const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Right, DirectionValue.X);
	}
}

void AArchivist::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisValue = Value.Get<FVector2D>();

	if (GetController())
	{
		FRotator ControlRotation = Controller->GetControlRotation();

		// Clamped pitch stays between -45 and 80 degrees.
		float NewPitch = FMath::Clamp(ControlRotation.Pitch - LookAxisValue.Y, -45.0f, 80.0f);
		float NewYaw = ControlRotation.Yaw + LookAxisValue.X;

		// Set the new rotation
		Controller->SetControlRotation(FRotator(NewPitch, NewYaw, 0.0f));
	}
}

void AArchivist::PickUp(const FInputActionValue& Value)
{
	AOpenBox* OverlappingBox = Cast<AOpenBox>(OverlappingItems);
	if (OverlappingBox)
	{
		OverlappingBox->Equip(GetMesh(), FName("LeftHandSocket"));
	}
}

void AArchivist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Hvis inputen er låst, oppdater tiden og frigjør input når cooldown er over
	if (bIsInputLocked)
	{
		CurrentInputTime += DeltaTime;
		if (CurrentInputTime >= InputLockTime)
		{
			bIsInputLocked = false;
		}
	}

}

void AArchivist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AArchivist::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AArchivist::Look);
		EnhancedInputComponent->BindAction(PickUpAction, ETriggerEvent::Triggered, this, &AArchivist::PickUp);
		EnhancedInputComponent->BindAction(EnterMinigameAction, ETriggerEvent::Triggered, this, &AArchivist::TryEnterMinigame);
		EnhancedInputComponent->BindAction(LookAtPaintingAction, ETriggerEvent::Triggered, this, &AArchivist::LookAtPainting);
	}
}

void AArchivist::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) // Sjekk om det er spilleren som går inn i triggeren
	{
		UE_LOG(LogTemp, Warning, TEXT("Player entered minigame trigger area!"));

		if (MinigamePromptWidgetClass && !MinigamePromptWidget)
		{
			MinigamePromptWidget = CreateWidget<UUserWidget>(GetWorld(), MinigamePromptWidgetClass);
			if (MinigamePromptWidget)
			{
				MinigamePromptWidget->AddToViewport();
			}
		}
	}
}

void AArchivist::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) // Sjekk om det er spilleren som går ut av triggeren
	{
		UE_LOG(LogTemp, Warning, TEXT("Player left minigame trigger area!"));

		if (MinigamePromptWidget)
		{
			MinigamePromptWidget->RemoveFromParent();
			MinigamePromptWidget = nullptr;
		}
	}
}

void AArchivist::TryEnterMinigame()
{

	if (MinigameTriggerBox && MinigameTriggerBox->IsOverlappingActor(this))
	{
		// Hent GameInstance og lagre posisjonen
		UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->SavedPlayerLocation = GetActorLocation();
			UE_LOG(LogTemp, Warning, TEXT("Saved player location: %s"), *GameInstance->SavedPlayerLocation.ToString());
		}

		UGameplayStatics::OpenLevel(this, "Minigame");
	}
}

void AArchivist::OnPaintingTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) // Sjekk om det er spilleren som går inn i triggeren
	{
		for (FPaintingInfo& PaintingInfo : Paintings)
		{
			if (PaintingInfo.PaintingTriggerBox && PaintingInfo.PaintingTriggerBox->IsOverlappingActor(OtherActor))
			{
				// Spilleren har gått inn i triggerområdet for denne maleren
				UE_LOG(LogTemp, Warning, TEXT("Player entered the painting trigger area!"));

				// Vis instruksjons-widgeten
				if (PaintingInfo.PaintingInstructionWidgetClass && !PaintingInfo.PaintingInstructionWidgetInstance)
				{
					PaintingInfo.PaintingInstructionWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PaintingInfo.PaintingInstructionWidgetClass);
					if (PaintingInfo.PaintingInstructionWidgetInstance)
					{
						PaintingInfo.PaintingInstructionWidgetInstance->AddToViewport();
					}
				}
			}
		}
	}
}


void AArchivist::OnPaintingTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!GetWorld() || !GetWorld()->GetFirstPlayerController())
	{
		UE_LOG(LogTemp, Error, TEXT("World or PlayerController is null!"));
		return;
	}

	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (OtherActor != PlayerPawn)
	{
		return; // Ignorer hvis det ikke er spilleren
	}

	UE_LOG(LogTemp, Warning, TEXT("OnPaintingTriggerEndOverlap triggered!"));
	UE_LOG(LogTemp, Warning, TEXT("Player left the painting trigger area!"));

	for (FPaintingInfo& PaintingInfo : Paintings)
	{
		if (!PaintingInfo.PaintingTriggerBox)
		{
			//UE_LOG(LogTemp, Error, TEXT("PaintingTriggerBox is null for painting: %s"), *PaintingInfo.PaintingName.ToString());
			continue;
		}

		if (!PaintingInfo.PaintingTriggerBox->IsOverlappingActor(OtherActor))
		{
			//UE_LOG(LogTemp, Warning, TEXT("Checking if widget exists for removal for painting: %s"), *PaintingInfo.PaintingName.ToString());

			if (PaintingInfo.PaintingInstructionWidgetInstance && PaintingInfo.PaintingInstructionWidgetInstance->IsInViewport())
			{
				//UE_LOG(LogTemp, Warning, TEXT("Removing widget from parent for painting: %s"), *PaintingInfo.PaintingName.ToString());
				PaintingInfo.PaintingInstructionWidgetInstance->RemoveFromParent();
				PaintingInfo.PaintingInstructionWidgetInstance = nullptr;
			}
		}
	}
}



void AArchivist::LookAtPainting(const FInputActionValue& Value)
{
	if (bIsInputLocked)
	{
		// Hvis inputen er låst, ikke gjør noe
		return;
	}

	// Lås input for en stund etter at det er trykket på E
	bIsInputLocked = true;

	for (FPaintingInfo& PaintingInfo : Paintings)
	{
		if (PaintingInfo.PaintingTriggerBox && PaintingInfo.PaintingTriggerBox->IsOverlappingActor(this))
		{
			if (!PaintingInfo.bIsLookingAtPainting)
			{
				// Spilleren er i triggerområdet og trykker på E, vis widgeten med malerbildet
				PaintingInfo.bIsLookingAtPainting = true;
				bIsMovementLocked = true;  // Lås bevegelsen

				// Vis widgetet med malerbildet
				if (PaintingInfo.PaintingWidgetClass && !PaintingInfo.PaintingWidgetInstance)
				{
					PaintingInfo.PaintingWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), PaintingInfo.PaintingWidgetClass);
					if (PaintingInfo.PaintingWidgetInstance)
					{
						PaintingInfo.PaintingWidgetInstance->AddToViewport();
					}
				}
			}
			else
			{
				// Hvis spilleren allerede ser på malerbildet, skjul widgetet og gå tilbake til normal tilstand
				PaintingInfo.bIsLookingAtPainting = false;
				bIsMovementLocked = false;  // Frigjør bevegelsen

				// Fjern widgetet
				if (PaintingInfo.PaintingWidgetInstance)
				{
					PaintingInfo.PaintingWidgetInstance->RemoveFromViewport();
					PaintingInfo.PaintingWidgetInstance = nullptr;
				}
			}
		}
	}

	// Sett cooldown-tiden før neste input kan brukes
	CurrentInputTime = 0.0f;
}
