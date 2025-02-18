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
AArchivist::AArchivist()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 100.f;

	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(SpringArm);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void AArchivist::BeginPlay()
{
	Super::BeginPlay();

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
		float NewPitch = FMath::Clamp(ControlRotation.Pitch + LookAxisValue.Y, -45.0f, 80.0f);
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