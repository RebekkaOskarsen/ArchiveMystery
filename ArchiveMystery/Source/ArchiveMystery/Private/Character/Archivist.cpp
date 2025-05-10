// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Archivist.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Items/Items.h"
#include "Items/Box/OpenBox.h"
#include "Items/Document/DocumentItem.h"
#include "Door/DoubleDoor.h"
#include "Door/KeycardItem.h"
#include <Kismet/GameplayStatics.h>
#include "Blueprint/UserWidget.h"
#include "Character/ArchiveGameInstance.h"
#include "HUD/MainMenuWidget.h"
#include "HUD/PauseMenuWidget.h"
#include "Character/ArchivistAnimInstance.h"


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
	SpringArm->bUsePawnControlRotation = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	MainMenuWidgetClass = nullptr;

	bIsPaused = false;
	PauseMenuWidget = nullptr;
	PauseMenuWidgetClass = nullptr;


	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AArchivist::BeginPlay()
{
	Super::BeginPlay();

	// Determine current level name
	FString CurrentMapName = GetWorld()->GetMapName();
	CurrentMapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix); // removes "UEDPIE_0_" in editor

	// Prevent duplicate players
	if (GetWorld())
	{
		TArray<AActor*> FoundArchivists;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArchivist::StaticClass(), FoundArchivists);
		if (FoundArchivists.Num() > 1)
		{
			APlayerController* PC = GetWorld()->GetFirstPlayerController();
			if (PC && PC->GetPawn() != this)
			{
				Destroy();
				return;
			}
		}
	}

	// Show main menu widget if in main menu level
	if (CurrentMapName.Contains("MainMenuLevel"))
	{
		if (MainMenuWidgetClass)
		{
			MainMenuWidget = CreateWidget<UMainMenuWidget>(GetWorld(), MainMenuWidgetClass);
			if (MainMenuWidget)
			{
				MainMenuWidget->AddToViewport();
			}
		}
	}


	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		bHasPlacedBox = GameInstance->bBoxPlacedBeforeMoldGame;
		bHasFinishedShreddedPaperMinigame = GameInstance->bShreddedGameComplete;
		bHasFinishedMoldMinigame = GameInstance->bMoldGameComplete;

		UE_LOG(LogTemp, Warning, TEXT("Loaded from GameInstance - bHasPlacedBox: %s, bHasFinishedShreddedPaperMinigame: %s, bHasFinishedMoldMinigame: %s"),
			bHasPlacedBox ? TEXT("true") : TEXT("false"),
			bHasFinishedShreddedPaperMinigame ? TEXT("true") : TEXT("false"),
			bHasFinishedMoldMinigame ? TEXT("true") : TEXT("false"));

		if (GameInstance->bHasGarageKeycard)
		{
			TArray<AActor*> FoundGarageCards;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("GarageKeycard"), FoundGarageCards);
			for (AActor* Actor : FoundGarageCards)
			{
				Actor->Destroy();
			}
		}

		if (GameInstance->bHasArchiveKeycard)
		{
			TArray<AActor*> FoundArchiveCards;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("ArchiveKeycard"), FoundArchiveCards);
			for (AActor* Actor : FoundArchiveCards)
			{
				Actor->Destroy();
			}
		}

		if (GameInstance->bHasEquipmentKeycard)
		{
			TArray<AActor*> FoundEquipmentCards;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("EquipmentKeycard"), FoundEquipmentCards);
			for (AActor* Actor : FoundEquipmentCards)
			{
				Actor->Destroy();
			}
		}


		if (GameInstance->bBoxPlacedBeforeMoldGame && GameInstance->PlacedBoxTransform.IsValid())
		{
			TArray<AActor*> FoundBoxes;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AOpenBox::StaticClass(), FoundBoxes);

			bool bBoxFound = false;

			for (AActor* BoxActor : FoundBoxes)
			{
				AOpenBox* OpenBox = Cast<AOpenBox>(BoxActor);
				if (OpenBox)
				{
					// This is the placed one from last session — restore it
					if (OpenBox->Tags.Contains("PlacedBox") && !bBoxFound)
					{
						OpenBox->SetActorTransform(GameInstance->PlacedBoxTransform);
						OpenBox->EnablePhysics(false);
						bBoxFound = true;
					}
					// This is the extra one — destroy it
					else
					{
						OpenBox->Destroy();
					}
				}
			}
		}
	}

	//Saved the player location after finishing the shredded paper minigame 
	if (GameInstance && !GameInstance->SavedPlayerLocation.IsZero())
	{
		SetActorLocation(GameInstance->SavedPlayerLocation);
	}

	if (GameInstance)
	{
		if (GameInstance->bIsCustomized)
		{

			if (CustomActor)
			{
				CustomActor->Destroy(); 
			}
		}
		else
		{
			if (CustomActor)
			{
				CustomActor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker1)
		{
			if (Marker1Actor)
			{
				Marker1Actor->Destroy();
			}
		}
		else
		{
			if (Marker1Actor)
			{
				Marker1Actor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker2)
		{
			if (Marker2Actor)
			{
				Marker2Actor->Destroy(); 
			}
		}
		else
		{
			if (Marker2Actor)
			{
				Marker2Actor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker3)
		{
			if (Marker3Actor)
			{
				Marker3Actor->Destroy(); 
			}
		}
		else
		{
			if (Marker3Actor)
			{
				Marker3Actor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker4)
		{
			if (Marker4Actor)
			{
				Marker4Actor->Destroy(); 
			}
		}
		else
		{
			if (Marker4Actor)
			{
				Marker4Actor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker5)
		{
			if (Marker5Actor)
			{
				Marker5Actor->Destroy(); 
			}
		}
		else
		{
			if (Marker5Actor)
			{
				Marker5Actor->SetActorHiddenInGame(false); 
			}
		}
	}

	if (GameInstance)
	{
		if (GameInstance->bIsMarker6)
		{
			if (Marker6Actor)
			{
				Marker6Actor->Destroy(); 
			}
		}
		else
		{
			if (Marker6Actor)
			{
				Marker6Actor->SetActorHiddenInGame(false); 
			}
		}
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

	if (DropZone)
	{
		DropZone->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnDropZoneBeginOverlap);
		DropZone->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnDropZoneEndOverlap);
	}
}

void AArchivist::Move(const FInputActionValue& Value)
{
	if (bIsMovementLocked)
	{
		return;
	}

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
	if (bIsMovementLocked)
	{
		return;
	}

	const FVector2D LookAxisValue = Value.Get<FVector2D>();

	if (GetController())
	{
		FRotator ControlRotation = Controller->GetControlRotation();

		// Clamped pitch stays between -45 and 80 degrees.
		float NewPitch = FMath::Clamp(ControlRotation.Pitch - LookAxisValue.Y * 0.04f, -45.0f, 80.0f);
		float NewYaw = ControlRotation.Yaw + LookAxisValue.X;

		AddControllerPitchInput(LookAxisValue.Y);
		AddControllerYawInput(LookAxisValue.X);
	}
}

void AArchivist::Jump()
{
	Super::Jump();
}

void AArchivist::StartRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}

void AArchivist::StopRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AArchivist::PickUp(const FInputActionValue& Value)
{
	if (bIsInputLocked)
	{
		return;
	}

	bool bDidInteract = false;

	ADocumentItem* OverlappingDocument = Cast<ADocumentItem>(OverlappingItems);
	if (OverlappingDocument)
	{
		// Only allow picking up document if ALL 3 conditions are true
		if (bHasPlacedBox && bHasFinishedShreddedPaperMinigame && bHasFinishedMoldMinigame)
		{
			FName ID = OverlappingDocument->DocumentID;

			if (ID == "DocumentItem_1")
			{
				bHasFoundDocument1 = true;
				PickedUpDocument1 = OverlappingDocument;

				if (DocumentPopupWidgetClass && !DocumentPopupWidgetInstance)
				{
					DocumentPopupWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), DocumentPopupWidgetClass);
					if (DocumentPopupWidgetInstance)
					{
						DocumentPopupWidgetInstance->AddToViewport();

						APlayerController* PC = GetWorld()->GetFirstPlayerController();
						if (PC)
						{
							PC->SetInputMode(FInputModeUIOnly());
							PC->bShowMouseCursor = true;
						}
					}
				}
			}
			else if (ID == "DocumentItem_2")
			{
				bHasFoundDocument2 = true;
				PickedUpDocument2 = OverlappingDocument;

				if (SecondDocumentPopupWidgetClass && !SecondDocumentPopupWidgetInstance)
				{
					SecondDocumentPopupWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), SecondDocumentPopupWidgetClass);
					if (SecondDocumentPopupWidgetInstance)
					{
						SecondDocumentPopupWidgetInstance->AddToViewport();

						APlayerController* PC = GetWorld()->GetFirstPlayerController();
						if (PC)
						{
							PC->SetInputMode(FInputModeUIOnly());
							PC->bShowMouseCursor = true;
						}
					}
				}
			}

			OverlappingDocument->EquipDocument(GetMesh(), FName("RightHandSocket"));
			SetOverlappingItems(nullptr);
			bDidInteract = true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("You can't pick up documents yet! Complete the requirements first."));
		}
	}

	if (EquippedBox)
	{
		if (DropZone && DropZone->IsOverlappingActor(this))
		{
			EquippedBox->bHasBeenPlaced = true;

			if (BoxSnapTarget)
			{
				EquippedBox->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				EquippedBox->SetActorLocation(BoxSnapTarget->GetActorLocation());
				EquippedBox->SetActorRotation(BoxSnapTarget->GetActorRotation());

				//  Add a unique tag so we can identify it later
				EquippedBox->Tags.AddUnique("PlacedBox");
			}
			else
			{
				// Fallback to regular drop if no snap target
				EquippedBox->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				EquippedBox->EnablePhysics(true);
			}

			EquippedBox->bHasBeenPlaced = true;

			if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
			{
				GI->bBoxPlacedBeforeMoldGame = true;
				GI->PlacedBoxTransform = EquippedBox->GetActorTransform();
				GI->bBoxWasPlaced = true;
				GI->BoxPlacedLocation = EquippedBox->GetActorLocation();
				GI->BoxPlacedRotation = EquippedBox->GetActorRotation();

				UE_LOG(LogTemp, Warning, TEXT("Saved box transform to GameInstance: %s / %s"),
					*GI->BoxPlacedLocation.ToString(), *GI->BoxPlacedRotation.ToString());
			}

			bHasPlacedBox = true;

			EquippedBox->OnUnequipped();

			SetOverlappingItems(nullptr);
			EquippedBox = nullptr;
			CharacterState = ECharacterState::ECS_Unequipped;

			bDidInteract = true;
		}
	}
	else if (OverlappingItems)
	{
		// Try to pick up keycard first
		if (AKeycardItem* Keycard = Cast<AKeycardItem>(OverlappingItems))
		{
			if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
			{
				switch (Keycard->KeycardType)
				{
				case EKeycardType::Garage:
					GI->bHasGarageKeycard = true;
					break;
				case EKeycardType::Archive:
					GI->bHasArchiveKeycard = true;
					break;
				case EKeycardType::Equipment:
					GI->bHasEquipmentKeycard = true;
					break;
				}

				UE_LOG(LogTemp, Warning, TEXT("Picked up keycard: %d"), static_cast<uint8>(Keycard->KeycardType));

				Keycard->Destroy();
				SetOverlappingItems(nullptr);
				bDidInteract = true;
			}
		}

		// Try to pick up box first
		if (AOpenBox* OverlappingBox = Cast<AOpenBox>(OverlappingItems))
		{
			if (!OverlappingBox->bHasBeenPlaced)
			{
				OverlappingBox->EnablePhysics(false);
				OverlappingBox->Equip(GetMesh(), FName("LeftHandSocket"));
				OverlappingBox->OnEquipped();

				EquippedBox = OverlappingBox;
				CharacterState = ECharacterState::ECS_EquippedOneHandedBox;

				SetOverlappingItems(nullptr);
				bDidInteract = true;
			}
		}
	}

	if (bDidInteract)
	{
		bIsInputLocked = true;
		CurrentInputTime = 0.0f;
	}
}

void AArchivist::TryOpenDoor(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("TryOpenDoor called"));

	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors, ADoubleDoor::StaticClass());

	for (AActor* Actor : OverlappingActors)
	{
		ADoubleDoor* Door = Cast<ADoubleDoor>(Actor);
		if (Door)
		{
			UE_LOG(LogTemp, Warning, TEXT("Found overlapping door, trying to open..."));
			Door->Interact(this);
			break;
		}
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

	// Update animation state for box holding
	if (USkeletalMeshComponent* SkeletalMesh = GetMesh())
	{
		if (UArchivistAnimInstance* AnimInstance = Cast<UArchivistAnimInstance>(SkeletalMesh->GetAnimInstance()))
		{
			AnimInstance->bIsHoldingBox = (EquippedBox != nullptr);
		}
	}

	// ----- Alternating Idle Break / Watch animation -----
	static float IdleCycleTime = 0.0f;
	static bool bPlayWatch = false;

	bool bIsStandingStill = (EquippedBox == nullptr && GetVelocity().Size() < 5.0f);

	if (bIsStandingStill)
	{
		IdleCycleTime += DeltaTime;

		if (IdleCycleTime >= 5.0f)
		{
			if (UArchivistAnimInstance* AnimInstance = Cast<UArchivistAnimInstance>(GetMesh()->GetAnimInstance()))
			{
				bPlayWatch = !bPlayWatch;
				AnimInstance->bPlayIdleBreak = bPlayWatch;
			}

			IdleCycleTime = 0.0f;
		}
	}
	else
	{
		// Reset when moving or holding a box
		IdleCycleTime = 0.0f;
		bPlayWatch = false;

		if (UArchivistAnimInstance* AnimInstance = Cast<UArchivistAnimInstance>(GetMesh()->GetAnimInstance()))
		{
			AnimInstance->bPlayIdleBreak = false;
		}
	}
}

void AArchivist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Walking
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AArchivist::Move);

		// Look around
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AArchivist::Look);

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AArchivist::Jump);

		// Running
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Started, this, &AArchivist::StartRunning);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &AArchivist::StopRunning);

		// PickUp
		EnhancedInputComponent->BindAction(PickUpAction, ETriggerEvent::Triggered, this, &AArchivist::PickUp);

		//Looking at paintings and enter pause menu 
		EnhancedInputComponent->BindAction(EnterMinigameAction, ETriggerEvent::Triggered, this, &AArchivist::TryEnterMinigame);
		EnhancedInputComponent->BindAction(LookAtPaintingAction, ETriggerEvent::Triggered, this, &AArchivist::LookAtPainting);
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Triggered, this, &AArchivist::TogglePauseMenu);

		//Door
		EnhancedInputComponent->BindAction(OpenDoorAction, ETriggerEvent::Triggered, this, &AArchivist::TryOpenDoor);
	}
}

//Entering the shredded papaer minigame 
void AArchivist::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) 
	{

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

//Leaving the shredded paper minigame 
void AArchivist::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) 
	{

		if (MinigamePromptWidget)
		{
			MinigamePromptWidget->RemoveFromParent();
			MinigamePromptWidget = nullptr;
		}
	}
}

void AArchivist::TryEnterMinigame()
{

	if (BoxToPlaceBeforeMinigame && !BoxToPlaceBeforeMinigame->bHasBeenPlaced)
	{
		UE_LOG(LogTemp, Warning, TEXT("You must place the box before starting the minigame!"));
		return;
	}

	if (MinigameTriggerBox && MinigameTriggerBox->IsOverlappingActor(this))
	{
		UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->SavedPlayerLocation = GetActorLocation();
			UE_LOG(LogTemp, Warning, TEXT("Saved player location: %s"), *GameInstance->SavedPlayerLocation.ToString());
		}

		UGameplayStatics::OpenLevel(this, "Minigame");
	}
}

//Is near enough to look at paintings 
void AArchivist::OnPaintingTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this) 
	{
		for (FPaintingInfo& PaintingInfo : Paintings)
		{
			if (PaintingInfo.PaintingTriggerBox && PaintingInfo.PaintingTriggerBox->IsOverlappingActor(OtherActor))
			{

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

//Ending looking paintings 
void AArchivist::OnPaintingTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!GetWorld() || !GetWorld()->GetFirstPlayerController())
	{
		return;
	}

	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (OtherActor != PlayerPawn)
	{
		return; 
	}

	for (FPaintingInfo& PaintingInfo : Paintings)
	{
		if (!PaintingInfo.PaintingTriggerBox)
		{
			continue;
		}

		if (!PaintingInfo.PaintingTriggerBox->IsOverlappingActor(OtherActor))
		{

			if (PaintingInfo.PaintingInstructionWidgetInstance && PaintingInfo.PaintingInstructionWidgetInstance->IsInViewport())
			{
				PaintingInfo.PaintingInstructionWidgetInstance->RemoveFromParent();
				PaintingInfo.PaintingInstructionWidgetInstance = nullptr;
			}
		}
	}
}

//The player can look at several paintings widgets 
void AArchivist::LookAtPainting(const FInputActionValue& Value)
{
	if (bIsInputLocked)
	{
		return;
	}

	for (FPaintingInfo& PaintingInfo : Paintings)
	{
		if (PaintingInfo.PaintingTriggerBox && PaintingInfo.PaintingTriggerBox->IsOverlappingActor(this))
		{
			if (!PaintingInfo.bIsLookingAtPainting)
			{
				PaintingInfo.bIsLookingAtPainting = true;
				bIsMovementLocked = true;

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
				PaintingInfo.bIsLookingAtPainting = false;

				if (PaintingInfo.PaintingWidgetInstance)
				{
					PaintingInfo.PaintingWidgetInstance->RemoveFromViewport();
					PaintingInfo.PaintingWidgetInstance = nullptr;
				}

				bIsMovementLocked = false;
			}

			bIsInputLocked = true;
			CurrentInputTime = 0.0f;

			break; 
		}
	}
}

void AArchivist::OnDropZoneBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this)
	{
		UE_LOG(LogTemp, Warning, TEXT("Archivist ENTERED the drop zone"));
	}
}

void AArchivist::OnDropZoneEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this)
	{
		UE_LOG(LogTemp, Warning, TEXT("Archivist LEFT the drop zone"));
	}
}

void AArchivist::RestoreGameplayInput()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->SetInputMode(FInputModeGameOnly());
		PC->bShowMouseCursor = false;
	}

	bIsMovementLocked = false;
	bIsInputLocked = false;

	// Also re-enable movement if disabled
	GetCharacterMovement()->DisableMovement(); // Just in case (clean reset)
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

void AArchivist::DeliverDocuments()
{
	if (PickedUpDocument1)
	{
		PickedUpDocument1->Destroy();
		PickedUpDocument1 = nullptr;
	}

	if (PickedUpDocument2)
	{
		PickedUpDocument2->Destroy();
		PickedUpDocument2 = nullptr;
	}

	UE_LOG(LogTemp, Warning, TEXT("Documents delivered and destroyed!"));
}

//Can interact with the pause menu widget 
void AArchivist::TogglePauseMenu()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		return;
	}
	if (bIsPaused)
	{
		if (PauseMenuWidget)
		{
			PauseMenuWidget->RemoveFromParent();
			PauseMenuWidget = nullptr;
		}
	}
	else
	{
		if (PauseMenuWidgetClass)
		{
			PauseMenuWidget = CreateWidget<UPauseMenuWidget>(GetWorld(), PauseMenuWidgetClass);
			if (PauseMenuWidget)
			{
				PauseMenuWidget->AddToViewport();
			}
		}
	}
	bIsPaused = !bIsPaused;
}

