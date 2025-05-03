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

	// Initialiser variabler
	bIsPaused = false;
	PauseMenuWidget = nullptr;
	PauseMenuWidgetClass = nullptr;


	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AArchivist::BeginPlay()
{
	Super::BeginPlay();

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

	if (GetWorld()->GetMapName().Contains("MainMenuLevel"))
	{
		if (MainMenuWidgetClass)
		{
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
	if (GameInstance)
	{
		bHasPlacedBox = GameInstance->bBoxPlacedBeforeMoldGame;
		bHasFinishedShreddedPaperMinigame = GameInstance->bShreddedGameComplete;
		bHasFinishedMoldMinigame = GameInstance->bMoldGameComplete;

		UE_LOG(LogTemp, Warning, TEXT("Loaded from GameInstance - bHasPlacedBox: %s, bHasFinishedShreddedPaperMinigame: %s, bHasFinishedMoldMinigame: % s"),
			bHasPlacedBox ? TEXT("true") : TEXT("false"),
			bHasFinishedShreddedPaperMinigame ? TEXT("true") : TEXT("false"),
			bHasFinishedMoldMinigame ? TEXT("true") : TEXT("false"));

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

	if (GameInstance && !GameInstance->SavedPlayerLocation.IsZero())
	{
		SetActorLocation(GameInstance->SavedPlayerLocation);
		UE_LOG(LogTemp, Warning, TEXT("Restored player location: %s"), *GameInstance->SavedPlayerLocation.ToString());
	}

	if (GameInstance)
	{
		// Hvis keycardet er tatt, ikke vis det på bordet
		if (GameInstance->bIsCustomized)
		{
			UE_LOG(LogTemp, Warning, TEXT("Costum has already been done, hiding the costum."));

			// Skjul keycardet hvis det er tatt
			if (CustomActor)
			{
				CustomActor->Destroy(); // Skjul keycardet

				UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(CustomActor->GetRootComponent());
				if (PrimitiveComponent)
				{
					PrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Costum is available, showing it."));

			// Vis keycardet hvis det ikke er tatt
			if (CustomActor)
			{
				CustomActor->SetActorHiddenInGame(false); // Vis keycardet
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

	if (USkeletalMeshComponent* SkeletalMesh = GetMesh())
	{
		if (UArchivistAnimInstance* AnimInstance = Cast<UArchivistAnimInstance>(SkeletalMesh->GetAnimInstance()))
		{
			AnimInstance->bIsHoldingBox = (EquippedBox != nullptr);
		}
	}

	//Idle break
	static float IdleTime = 0.0f;

	if (EquippedBox == nullptr && GetVelocity().Size() < 5.0f)
	{
		IdleTime += DeltaTime;

		if (IdleTime >= 5.0f)
		{
			if (UArchivistAnimInstance* AnimInstance = Cast<UArchivistAnimInstance>(GetMesh()->GetAnimInstance()))
			{
				if (!AnimInstance->bPlayIdleBreak) // only trigger once
				{
					UE_LOG(LogTemp, Warning, TEXT("Idle Break Triggered!"));
					AnimInstance->bPlayIdleBreak = true;
				}
			}
		}
	}
	else
	{
		IdleTime = 0.0f;

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

		//
		EnhancedInputComponent->BindAction(EnterMinigameAction, ETriggerEvent::Triggered, this, &AArchivist::TryEnterMinigame);
		EnhancedInputComponent->BindAction(LookAtPaintingAction, ETriggerEvent::Triggered, this, &AArchivist::LookAtPainting);
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Started, this, &AArchivist::TogglePauseMenu);
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

	// Block if box hasn't been placed yet
	if (BoxToPlaceBeforeMinigame && !BoxToPlaceBeforeMinigame->bHasBeenPlaced)
	{
		UE_LOG(LogTemp, Warning, TEXT("You must place the box before starting the minigame!"));
		return;
	}

	// Now check if you're in the trigger
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
		return;
	}

	bool bDidLookAtPainting = false;

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
				bIsMovementLocked = false;

				if (PaintingInfo.PaintingWidgetInstance)
				{
					PaintingInfo.PaintingWidgetInstance->RemoveFromViewport();
					PaintingInfo.PaintingWidgetInstance = nullptr;
				}
			}

			bDidLookAtPainting = true;
			break; // Vi trenger bare ett bilde om gangen
		}
	}

	if (bDidLookAtPainting)
	{
		bIsInputLocked = true;
		CurrentInputTime = 0.0f;
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

void AArchivist::TogglePauseMenu()
{
	//APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	//if (!PlayerController)
	//{
	//	return;
	//}

	//if (bIsPaused)
	//{
	//	if (PauseMenuWidget)
	//	{
	//		PauseMenuWidget->RemoveFromParent();
	//		PauseMenuWidget = nullptr;
	//	}

	//	//PlayerController->bShowMouseCursor = false;
	//	//PlayerController->SetInputMode(FInputModeGameOnly());
	//}
	//else
	//{
	//
	//	if (PauseMenuWidgetClass)
	//	{
	//		PauseMenuWidget = CreateWidget<UPauseMenuWidget>(GetWorld(), PauseMenuWidgetClass);
	//		if (PauseMenuWidget)
	//		{
	//			PauseMenuWidget->AddToViewport();
	//		}
	//	}


	///*	PlayerController->bShowMouseCursor = true;
	//	FInputModeGameAndUI InputMode;
	//	InputMode.SetWidgetToFocus(PauseMenuWidget->TakeWidget());
	//	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	//	PlayerController->SetInputMode(InputMode);*/
	//}

	//// Toggle state
	//bIsPaused = !bIsPaused;



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

		PlayerController->bShowMouseCursor = false;
		PlayerController->SetInputMode(FInputModeGameOnly());
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

		PlayerController->bShowMouseCursor = true;
		FInputModeGameAndUI InputMode;
		InputMode.SetWidgetToFocus(PauseMenuWidget->TakeWidget());
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PlayerController->SetInputMode(InputMode);
	}

	bIsPaused = !bIsPaused;
}

