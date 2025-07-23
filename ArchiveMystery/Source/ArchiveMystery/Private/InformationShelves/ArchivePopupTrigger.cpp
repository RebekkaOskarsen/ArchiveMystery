// Fill out your copyright notice in the Description page of Project Settings.


#include "InformationShelves/ArchivePopupTrigger.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "InformationShelves/ArchivePopupWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AArchivePopupTrigger::AArchivePopupTrigger()
{
    PrimaryActorTick.bCanEverTick = false;

    // Lag mesh som root
    VisibleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleMesh"));
    RootComponent = VisibleMesh;

    VisibleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Lag triggerbox og fest den til meshen
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetupAttachment(VisibleMesh);
    TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AArchivePopupTrigger::OnOverlapBegin);

    // Viktig!
    bCanTrigger = true;

}

void AArchivePopupTrigger::ResetTrigger()
{
    bCanTrigger = true;
}

// Called when the game starts or when spawned
void AArchivePopupTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AArchivePopupTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!bCanTrigger)
        return;

    APawn* PlayerPawn = Cast<APawn>(OtherActor);
    if (!PopupWidgetClass || !PlayerPawn || !PlayerPawn->IsPlayerControlled())
        return;

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (!PC) return;

    if (ActiveWidget)
    {
        ActiveWidget->RemoveFromParent();
        ActiveWidget = nullptr;
    }

    ActiveWidget = CreateWidget<UUserWidget>(PC, PopupWidgetClass);
    if (ActiveWidget)
    {
        ActiveWidget->AddToViewport();

        UGameplayStatics::SetGamePaused(this, true);
        PC->SetInputMode(FInputModeUIOnly());
        PC->bShowMouseCursor = true;

        // Deaktiver trigger midlertidig
        bCanTrigger = false;
    }
}


