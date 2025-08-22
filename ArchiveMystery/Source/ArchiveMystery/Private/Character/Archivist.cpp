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
#include "Items/Book/BookItem.h"
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
#include "Items/FolderItem.h"
#include "Character/ArchiveGhost.h"
#include "HUD/IntroGuideWidget.h"


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

	TArray<AActor*> FoundTriggers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATriggerBox::StaticClass(), FoundTriggers);

	for (AActor* Actor : FoundTriggers)
	{
		if (Actor->ActorHasTag("FolderDropZone"))
		{
			FolderDropZone = Cast<ATriggerBox>(Actor);
			UE_LOG(LogTemp, Warning, TEXT("Fant FolderDropZone triggerbox."));
			break;
		}
	}

	if (GameInstance)
	{
		GameInstance->LoadQuestLogData();

		bHasPlacedBox = GameInstance->bBoxPlacedBeforeMoldGame;
		bHasFinishedShreddedPaperMinigame = GameInstance->bShreddedGameComplete;
		bHasFinishedMoldMinigame = GameInstance->bMoldGameComplete;
		bHasFoundDocument1 = GameInstance->bHasFoundDocument1;
		bHasFoundDocument2 = GameInstance->bHasFoundDocument2;
		bHasScannedDocuments = GameInstance->bHasScannedDocuments;
		bHasDeliveredDocuments = GameInstance->bHasDeliveredDocuments;

		if (bHasFoundDocument1)
		{
			TArray<AActor*> FoundDocs;
			UGameplayStatics::GetAllActorsWithTag(this, TEXT("DocumentItem_1"), FoundDocs);
			for (AActor* D : FoundDocs) D->Destroy();
		}
		if (bHasFoundDocument2)
		{
			TArray<AActor*> FoundDocs;
			UGameplayStatics::GetAllActorsWithTag(this, TEXT("DocumentItem_2"), FoundDocs);
			for (AActor* D : FoundDocs) D->Destroy();
		}

		//Keycards
		if (GameInstance->bHasKeycard)
		{
			TArray<AActor*> FoundCard;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Keycard"), FoundCard);
			for (AActor* Actor : FoundCard)
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

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(CharacterMappingContext, 0);
		}
	} 
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC
			// skip any UI-only or menu levels:
			&& !CurrentMapName.Contains("MainMenuLevel")
			&& !CurrentMapName.Contains("Language_Level")
			&& !CurrentMapName.Contains("StartGame")
			&& !CurrentMapName.Contains("Minigame"))
		{
			PC->bShowMouseCursor = false;
			PC->SetIgnoreLookInput(false);
			PC->SetIgnoreMoveInput(false);
			PC->SetInputMode(FInputModeGameOnly());
		}
	}

	//To place box
	if (DropZone)
	{
		DropZone->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnDropZoneBeginOverlap);
		DropZone->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnDropZoneEndOverlap);
	}

	if (!BookDropZone)
	{
		TArray<AActor*> FoundBookTriggers;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATriggerBox::StaticClass(), FoundBookTriggers);
		for (AActor* Actor : FoundBookTriggers)
		{
			if (Actor->ActorHasTag("BookDropZone"))
			{
				BookDropZone = Cast<ATriggerBox>(Actor);
				UE_LOG(LogTemp, Warning, TEXT("Found BookDropZone triggerbox."));
				break;
			}
		}
	}

	if (BookDropZone)
	{
		// Bind our overlap handlers to the *actor* events
		BookDropZone->OnActorBeginOverlap.AddDynamic(this, &AArchivist::OnBookDropBeginOverlap);
		BookDropZone->OnActorEndOverlap.AddDynamic(this, &AArchivist::OnBookDropEndOverlap);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BookDropZone not found or not tagged!"));
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

	if (HeldFolder)
	{


		if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
		{
			GI->bReadyToScanFolderDocuments = true;
		}

		if (FolderDropZone && FolderDropZone->IsOverlappingActor(this))
		{
			HeldFolder->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			//Placement n the table 
			FVector DropLocation = FolderDropZone->GetActorLocation() + FVector(-20, 100, 12.f);
			FRotator DropRotation = FRotator(90.f, 0.f, 0.f);

			HeldFolder->SetActorLocation(DropLocation);
			HeldFolder->SetActorRotation(DropRotation);

			HeldFolder->bIsScannedAndLocked = true;

			HeldFolder->Mesh->SetSimulatePhysics(false);
			HeldFolder->Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			HeldFolder->bIsPickedUp = false;
			HeldFolder = nullptr;

			bIsInputLocked = true;
			CurrentInputTime = 0.0f;

			return;
		}
	}

	if (EquippedBook && bPlayOpenBook || bPlayReadBook)
	{
		return;
	}

	bool bDidInteract = false;

	if (EquippedBook)
	{
		if (!bBookIsOpen && bIsInBookDropZone)
		{
			// snap it down
			EquippedBook->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			EquippedBook->SetActorLocation(BookDropZone->GetActorLocation());
			EquippedBook->SetActorRotation(BookDropZone->GetActorRotation());
			EquippedBook = nullptr;
			CharacterState = ECharacterState::ECS_Unequipped;

			bPlayOpenBook = false;
			bPlayReadBook = false;

			bDidInteract = true;
		}
	}
	else if (ABookItem* OverlappingBook = Cast<ABookItem>(OverlappingItems))
	{
		// attach to right hand
		OverlappingBook->EquipBook(GetMesh(), FName("RightHandSocket2"));

		// store so we can drop later
		EquippedBook = OverlappingBook;
		CharacterState = ECharacterState::ECS_EquippedOneHanded;
		// or whatever state you use for “holding one item”

		SetOverlappingItems(nullptr);
		bDidInteract = true;
	}

	ADocumentItem* OverlappingDocument = Cast<ADocumentItem>(OverlappingItems);
	if (OverlappingDocument)
	{
		// only allow picking up once all minigames & box placement are done
		if (bHasPlacedBox && bHasFinishedShreddedPaperMinigame && bHasFinishedMoldMinigame)
		{
			FName ID = OverlappingDocument->DocumentID;

			if (ID == "DocumentItem_1")
			{
				bHasFoundDocument1 = true;
				PickedUpDocument1 = OverlappingDocument;

				// **persist immediately**
				if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
				{
					GI->bHasFoundDocument1 = true;
					GI->SaveQuestLogData();
				}

				if (DocumentPopupWidgetClass && !DocumentPopupWidgetInstance)
				{
					DocumentPopupWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), DocumentPopupWidgetClass);
					if (DocumentPopupWidgetInstance)
					{
						DocumentPopupWidgetInstance->AddToViewport();
						if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
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

				// **persist immediately**
				if (UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance()))
				{
					GI->bHasFoundDocument2 = true;
					GI->SaveQuestLogData();
				}

				if (SecondDocumentPopupWidgetClass && !SecondDocumentPopupWidgetInstance)
				{
					SecondDocumentPopupWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), SecondDocumentPopupWidgetClass);
					if (SecondDocumentPopupWidgetInstance)
					{
						SecondDocumentPopupWidgetInstance->AddToViewport();
						if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
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

				GI->SaveQuestLogData();
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
				case EKeycardType::DoubleDoor:
					GI->bHasKeycard = true;
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

		if (AFolderItem* Folder = Cast<AFolderItem>(OverlappingItems))
		{

			// Sjekk om database-minispillet er fullført
			UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
			if (GI && !GI->bDatabaseMinigameComplete)
			{
				return;
			}

			if (!Folder->bIsPickedUp && !HeldFolder)
			{
				Folder->OnPickedUp(GetMesh(), FName("LeftHandSocket2"));
				HeldFolder = Folder;

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

void AArchivist::OnReadBook(const FInputActionValue& Value)
{
	ABookItem* Book = Cast<ABookItem>(EquippedBook);
	if (!Book) return;

	// Character anim BP
	UArchivistAnimInstance* BI = Cast<UArchivistAnimInstance>(GetMesh()->GetAnimInstance());
	if (!BI) return;

	if (!bBookIsOpen)
	{
		// --- OPEN & START READING ---
		Book->PlayOpenAndRead();

		BI->bPlayOpenBook = true;
		bBookIsOpen = true;

		float delay = 0.8f;
		if (Book->OpeningAnim)
		{
			delay = Book->OpeningAnim->GetPlayLength();
		}

		GetWorldTimerManager().ClearTimer(BookOpenTimer);
		GetWorldTimerManager().SetTimer(
			BookOpenTimer,
			[this, BI]()
			{
				BI->bPlayOpenBook = false;
				BI->bPlayReadBook = true;

				if (ReadingWidgetClass && !ActiveReadingWidget)
				{
					ActiveReadingWidget = CreateWidget<UUserWidget>(GetWorld(), ReadingWidgetClass);
					if (ActiveReadingWidget)
					{
						ActiveReadingWidget->AddToViewport();
					}
				}
			},
			delay,
			false
		);
	}
	else
	{
		// --- CLOSE & STOP READING ---
		GetWorldTimerManager().ClearTimer(BookOpenTimer);

		// stop character reading/open flags
		BI->bPlayReadBook = false;
		BI->bPlayOpenBook = false;
		bBookIsOpen = false;

		// play book’s closing (book mesh)
		Book->PlayClose();

		if (ActiveReadingWidget)
		{
			ActiveReadingWidget->RemoveFromParent();
			ActiveReadingWidget = nullptr;
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
			AnimInstance->bIsHoldingFolder = (HeldFolder != nullptr);
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


		//Enter pause menu 
		EnhancedInputComponent->BindAction(EnterMinigameAction, ETriggerEvent::Triggered, this, &AArchivist::TryEnterMinigame);
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Triggered, this, &AArchivist::TogglePauseMenu);

		//Door
		EnhancedInputComponent->BindAction(OpenDoorAction, ETriggerEvent::Triggered, this, &AArchivist::TryOpenDoor);

		//Book
		EnhancedInputComponent->BindAction(ReadBookAction, ETriggerEvent::Started, this, &AArchivist::OnReadBook);
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

void AArchivist::TogglePauseMenu()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;

	bIsPaused = !bIsPaused;

	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (bIsPaused)
	{
		if (PauseMenuWidgetClass && !PauseMenuWidget)
		{
			PauseMenuWidget = CreateWidget<UPauseMenuWidget>(GetWorld(), PauseMenuWidgetClass);
			PauseMenuWidget->AddToViewport();
		}

		PC->bShowMouseCursor = true;
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputMode.SetHideCursorDuringCapture(false);
		PC->SetInputMode(InputMode);

		if (Character)
		{
			Character->DisableInput(PC);
		}
	}
	else
	{
		if (PauseMenuWidget)
		{
			PauseMenuWidget->RemoveFromParent();
			PauseMenuWidget = nullptr;
		}

		PC->bShowMouseCursor = false;
		PC->SetInputMode(FInputModeGameOnly());

		if (Character)
		{
			Character->EnableInput(PC);
		}
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

		TArray<AActor*> Ghosts;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArchiveGhost::StaticClass(), Ghosts);
		if (Ghosts.Num() > 0)
		{
			if (AArchiveGhost* Ghost = Cast<AArchiveGhost>(Ghosts[0]))
			{
				GI->GhostLocation = Ghost->GetActorLocation();
				GI->GhostTargetIndex = Ghost->GetCurrentTargetIndex();
			}
		}

		GI->SaveQuestLogData();
	}
}

void AArchivist::PlayIntroSequenceIfNeeded()
{
	UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(GetGameInstance());
	if (!GI) return;

	if (GI->bIntroCutscenePlayed)
		return;

	for (TActorIterator<ALevelSequenceActor> It(GetWorld()); It; ++It)
	{
		ALevelSequenceActor* SequenceActor = *It;
		if (!SequenceActor) continue;

		if (SequenceActor->Tags.Contains("StartCutscene"))
		{
			if (ULevelSequencePlayer* SeqPlayer = SequenceActor->GetSequencePlayer())
			{
				SetGameplayInputLocked(true);

				SeqPlayer->OnFinished.AddDynamic(this, &AArchivist::OnIntroSequenceFinished);

				SeqPlayer->Play();
				GI->bIntroCutscenePlayed = true;
			}
			return;
		}
	}
}

void AArchivist::OnIntroSequenceFinished()
{
	auto* GI = Cast<UArchiveGameInstance>(GetGameInstance());
	if (!GI) return;

	if (!GI->bIntroCutscenePlayed)
	{
		for (TActorIterator<ALevelSequenceActor> It(GetWorld()); It; ++It)
		{
			if (It->Tags.Contains("StartCutscene"))
			{
				if (ULevelSequencePlayer* SeqPlayer = It->GetSequencePlayer())
				{
					SetGameplayInputLocked(true);

					SeqPlayer->OnFinished.AddDynamic(this, &AArchivist::OnIntroSequenceFinished);

					SeqPlayer->Play();
					GI->bIntroCutscenePlayed = true;
				}
				return;
			}
		}
	}

	ShowIntroGuide();
}

void AArchivist::SetGameplayInputLocked(bool bLock)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->SetIgnoreMoveInput(bLock);
		PC->SetIgnoreLookInput(bLock);
	}

	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		if (bLock)
		{
			Move->StopMovementImmediately();
		}
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

void AArchivist::OnBookDropBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this)
	{
		bIsInBookDropZone = true;
		UE_LOG(LogTemp, Warning, TEXT("Entered BookDropZone"));
	}
}

void AArchivist::OnBookDropEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == this)
	{
		bIsInBookDropZone = false;
		UE_LOG(LogTemp, Warning, TEXT("Left BookDropZone"));
	}
}

void AArchivist::ShowIntroGuide()
{
	if (IntroGuideWidgetInstance)
	{
		IntroGuideWidgetInstance->RemoveFromParent();
		IntroGuideWidgetInstance = nullptr;
	}
	if (IntroGuideWidgetClass)
	{
		IntroGuideWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), IntroGuideWidgetClass);
		if (IntroGuideWidgetInstance)
		{
			IntroGuideWidgetInstance->AddToViewport();
			if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
			{
				PC->bShowMouseCursor = true;
				FInputModeUIOnly UI;
				UI.SetWidgetToFocus(IntroGuideWidgetInstance->TakeWidget());
				PC->SetInputMode(UI);
			}
		}
	}
}

