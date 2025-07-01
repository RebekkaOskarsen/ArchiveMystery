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
#include "Components/BoxComponent.h"
#include "QuestMarker/QuestMarker.h"
#include "TimerManager.h"
#include "Engine/TriggerBox.h"


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

	GetWorld()->GetTimerManager().SetTimerForNextTick(
		this, &AArchivist::ReinitialiseQuestMarkers);

	UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (!GameInstance) return;

	// Determine current level name
	FString CurrentMapName = GetWorld()->GetMapName();
	CurrentMapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix); 

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

	//UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		GameInstance->LoadQuestLogData();

		bHasPlacedBox = GameInstance->bBoxPlacedBeforeMoldGame;
		bHasFinishedShreddedPaperMinigame = GameInstance->bShreddedGameComplete;
		bHasFinishedMoldMinigame = GameInstance->bMoldGameComplete;

		//Keycards
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

		//Box
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
					//Tagging the box to still exist
					if (OpenBox->Tags.Contains("PlacedBox") && !bBoxFound)
					{
						OpenBox->SetActorTransform(GameInstance->PlacedBoxTransform);
						OpenBox->EnablePhysics(false);

						OpenBox->bHasBeenPlaced = true;

						bBoxFound = true;
					}
					//Destroying the extra box
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


	if (GameInstance->bIsCustomizedSkinColor1)
	{
		ApplyMaterialToSlot(0, SkinColor1);
	}
	else if (GameInstance->bIsCustomizedSkinColor2)
	{
		ApplyMaterialToSlot(0, SkinColor2);
	}
	else if (GameInstance->bIsCustomizedSkinColor3)
	{
		ApplyMaterialToSlot(0, SkinColor3);
	}
	else if (GameInstance->bIsCustomizedSkinColor4)
	{
		ApplyMaterialToSlot(0, SkinColor4);
	}
	else if (GameInstance->bIsCustomizedSkinColor5)
	{
		ApplyMaterialToSlot(0, SkinColor5);
	}
	else if (GameInstance->bIsCustomizedSkinColor6)
	{
		ApplyMaterialToSlot(0, SkinColor6);
	}
	else if (GameInstance->bIsCustomizedSkinColor7)
	{
		ApplyMaterialToSlot(0, SkinColor7);
	}
	else if (GameInstance->bIsCustomizedSkinColor8)
	{
		ApplyMaterialToSlot(0, SkinColor8);
	}
	else if (GameInstance->bIsCustomizedSkinColor9)
	{
		ApplyMaterialToSlot(0, SkinColor9);
	}
	else if (GameInstance->bIsCustomizedSkinColor10)
	{
		ApplyMaterialToSlot(0, SkinColor10);
	}
	else if (GameInstance->bIsCustomizedSkinColor11)
	{
		ApplyMaterialToSlot(0, SkinColor11);
	}
	else if (GameInstance->bIsCustomizedSkinColor12)
	{
		ApplyMaterialToSlot(0, SkinColor12);
	}
	else if (GameInstance->bIsCustomizedSkinColor13)
	{
		ApplyMaterialToSlot(0, SkinColor13);
	}
	else if (GameInstance->bIsCustomizedSkinColor14)
	{
		ApplyMaterialToSlot(0, SkinColor14);
	}

	if (GameInstance->bIsCustomizedWatchColor1)
	{
		ApplyMaterialToSlot(3, WatchColor1);
	}
	else if (GameInstance->bIsCustomizedWatchColor2)
	{
		ApplyMaterialToSlot(3, WatchColor2);
	}
	else if (GameInstance->bIsCustomizedWatchColor3)
	{
		ApplyMaterialToSlot(3, WatchColor3);
	}
	else if (GameInstance->bIsCustomizedWatchColor4)
	{
		ApplyMaterialToSlot(3, WatchColor4);
	}
	else if (GameInstance->bIsCustomizedWatchColor5)
	{
		ApplyMaterialToSlot(3, WatchColor5);
	}
	else if (GameInstance->bIsCustomizedWatchColor6)
	{
		ApplyMaterialToSlot(3, WatchColor6);
	}
	else if (GameInstance->bIsCustomizedWatchColor7)
	{
		ApplyMaterialToSlot(3, WatchColor7);
	}
	else if (GameInstance->bIsCustomizedWatchColor8)
	{
		ApplyMaterialToSlot(3, WatchColor8);
	}
	else if (GameInstance->bIsCustomizedWatchColor9)
	{
		ApplyMaterialToSlot(3, WatchColor9);
	}
	else if (GameInstance->bIsCustomizedWatchColor10)
	{
		ApplyMaterialToSlot(3, WatchColor10);
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

	//To place box
	if (DropZone)
	{
		DropZone->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnDropZoneBeginOverlap);
		DropZone->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnDropZoneEndOverlap);
	}

	if (!GameInstance->SavedPlayerLocation.IsZero())
	{
		SetActorLocation(GameInstance->SavedPlayerLocation);
	}

	PlayIntroSequenceIfNeeded();
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

				EquippedBox->Tags.AddUnique("PlacedBox");
			}
			else
			{
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

				Keycard->Destroy();
				SetOverlappingItems(nullptr);
				bDidInteract = true;
			}
		}

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
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors, ADoubleDoor::StaticClass());

	for (AActor* Actor : OverlappingActors)
	{
		ADoubleDoor* Door = Cast<ADoubleDoor>(Actor);
		if (Door)
		{
			Door->Interact(this);
			break;
		}
	}
}

void AArchivist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

	//Idle break: alternating from idle anim to watch anim
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
		return;
	}

	if (MinigameTriggerBox && MinigameTriggerBox->IsOverlappingActor(this))
	{
		UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->SavedPlayerLocation = GetActorLocation();
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

}

void AArchivist::OnDropZoneEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{

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

	GetCharacterMovement()->DisableMovement();
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
	bHasDeliveredDocuments = true;
}

//Can interact with the pause menu widget 
void AArchivist::TogglePauseMenu()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;

	bIsPaused = !bIsPaused;
	PC->SetPause(bIsPaused);

	if (bIsPaused)
	{
		// Show pause UI
		if (PauseMenuWidgetClass && !PauseMenuWidget)
		{
			PauseMenuWidget = CreateWidget<UPauseMenuWidget>(GetWorld(), PauseMenuWidgetClass);
			PauseMenuWidget->AddToViewport();
		}

		// Show cursor & allow both game + UI input
		PC->bShowMouseCursor = true;
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(InputMode);
	}
	else
	{
		// Hide pause UI
		if (PauseMenuWidget)
		{
			PauseMenuWidget->RemoveFromParent();
			PauseMenuWidget = nullptr;
		}

		// Hide cursor & return to game?only input
		PC->bShowMouseCursor = false;
		PC->SetInputMode(FInputModeGameOnly());
	}
}

void AArchivist::ApplyMaterialToSlot(int32 MaterialSlotIndex, UMaterialInterface* NewMaterial)
{
	if (GetMesh() && NewMaterial)
	{
		GetMesh()->SetMaterial(MaterialSlotIndex, NewMaterial);
	}
}

void AArchivist::SaveProgressBeforeMainMenu()
{
	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
	if (GI)
	{
		GI->SavedPlayerLocation = GetActorLocation();
		GI->LastLevelName = UGameplayStatics::GetCurrentLevelName(this, true);
		UE_LOG(LogTemp, Warning, TEXT("Saved progress: Level = %s, Location = %s"),
			*GI->LastLevelName,
			*GI->SavedPlayerLocation.ToString());

		GI->SaveQuestLogData();
	}
}

void AArchivist::PlayIntroSequenceIfNeeded()
{
	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
	if (!GI)
	{
		UE_LOG(LogTemp, Warning, TEXT("No GameInstance found"));
		return;
	}

	if (!GI->bIntroCutscenePlayed)
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to find cutscene actor..."));

		for (TActorIterator<ALevelSequenceActor> It(GetWorld()); It; ++It)
		{
			ALevelSequenceActor* SequenceActor = *It;
			UE_LOG(LogTemp, Warning, TEXT("Found actor: %s"), *SequenceActor->GetName());

			if (SequenceActor && SequenceActor->Tags.Contains("StartCutscene"))
			{
				ULevelSequencePlayer* SequencePlayer = SequenceActor->GetSequencePlayer();
				if (SequencePlayer)
				{
					SequencePlayer->Play();
					GI->bIntroCutscenePlayed = true;

					float SeqLength = 6.0f;

					// schedule our ShowTutorial() to fire when the sequence finishes
					GetWorld()->GetTimerManager().SetTimer(
						TutorialTimerHandle,
						this,
						&AArchivist::ShowTutorial,
						SeqLength,
						false
					);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("SequencePlayer was null"));
				}
				return;
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("Start_cutscene actor not found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Intro cutscene already played"));
	}
}

void AArchivist::ReinitialiseQuestMarkers()
{
	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(
		UGameplayStatics::GetGameInstance(this));
	if (!GI) return;

	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(), AQuestMarker::StaticClass(), Found);

	Found.Sort([](const AActor& A, const AActor& B)
		{
			const auto* MA = Cast<AQuestMarker>(&A);
			const auto* MB = Cast<AQuestMarker>(&B);
			return MA && MB ? MA->MarkerID < MB->MarkerID : false;
		});

	bool bNextActivated = false;

	for (AActor* Actor : Found)
	{
		AQuestMarker* Marker = Cast<AQuestMarker>(Actor);
		if (!Marker) continue;

		if (Marker->IsCompleted(GI))
		{
			Marker->Destroy();               
		}
		else if (!bNextActivated)
		{
			Marker->ActivateMarker();       
			bNextActivated = true;
		}
		else
		{
			Marker->SetActorHiddenInGame(true);
			Marker->Trigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

void AArchivist::OnTutorialTriggerOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor != this)
		return;

	// remove the widget
	if (TutorialWidgetInstance)
	{
		TutorialWidgetInstance->RemoveFromParent();
		TutorialWidgetInstance = nullptr;
	}

	// unbind so it only ever fires once
	if (auto* Box = Cast<ATriggerBox>(OverlappedActor))
	{
		Box->OnActorBeginOverlap.RemoveDynamic(this, &AArchivist::OnTutorialTriggerOverlap);
	}
}

void AArchivist::ShowTutorial()
{
	auto* GI = Cast<UArchiveGameInstance>(GetGameInstance());
	if (!GI || GI->bTutorialPlayed || !TutorialWidgetClass) return;

	// 1) Create & show the widget
	TutorialWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), TutorialWidgetClass);
	if (TutorialWidgetInstance)
	{
		TutorialWidgetInstance->AddToViewport();
	}

	GI->bTutorialPlayed = true;

	// 2) Find the TriggerBox in the level (tagged "FinishTutorial") and bind its overlap
	for (TActorIterator<ATriggerBox> It(GetWorld()); It; ++It)
	{
		ATriggerBox* Box = *It;
		if (Box->ActorHasTag("FinishTutorial"))
		{
			Box->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnTutorialTriggerOverlap);
			break;  // only bind the first one we find
		}
	}
}

