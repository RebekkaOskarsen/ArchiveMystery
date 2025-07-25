// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestMarker/QuestMarker.h"
#include "Character/Archivist.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include <Components/WidgetComponent.h>
#include "Character/ArchiveGameInstance.h"

AQuestMarker::AQuestMarker()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);

    Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    Trigger->SetupAttachment(RootComponent);
    Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);        
    Trigger->SetCollisionResponseToAllChannels(ECR_Ignore);
    Trigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    Trigger->SetGenerateOverlapEvents(true);

    MarkerWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("MarkerWidget"));
    MarkerWidget->SetupAttachment(RootComponent);
    MarkerWidget->SetWidgetSpace(EWidgetSpace::Screen); 
    MarkerWidget->SetDrawAtDesiredSize(true);
}

void AQuestMarker::BeginPlay()
{
    Super::BeginPlay();

    if (bStartActive)
    {
        SetActorHiddenInGame(false);
        Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }
    else
    {
        SetActorHiddenInGame(true);
        Trigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    Trigger->OnComponentBeginOverlap.AddDynamic(this, &AQuestMarker::OnTriggerEnter);

    if (MarkerWidget)
    {
        UUserWidget* Widget = MarkerWidget->GetUserWidgetObject();
        if (Widget)
        {
            UFunction* SetOriginFunc = Widget->FindFunction(FName("SetOriginLocation"));
            if (SetOriginFunc)
            {
                struct FOriginParams { FVector Origin; };
                FOriginParams Params;
                Params.Origin = GetActorLocation();

                Widget->ProcessEvent(SetOriginFunc, &Params);
            }
        }
    }
}

void AQuestMarker::ActivateMarker()
{
    SetActorHiddenInGame(false);
    Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

    AActor* Player = UGameplayStatics::GetPlayerPawn(this, 0);
    if (Player && Trigger->IsOverlappingActor(Player))
    {
        OnTriggerEnter(Trigger, Player, nullptr, 0, false, FHitResult());
    }
}

void AQuestMarker::OnTriggerEnter(UPrimitiveComponent*, AActor* OtherActor,
    UPrimitiveComponent*, int32, bool, const FHitResult&)
{
    if (OtherActor->IsA(AArchivist::StaticClass()))
    {
        UArchiveGameInstance* GI = Cast<UArchiveGameInstance>(
            UGameplayStatics::GetGameInstance(this));

        if (GI)
        {
            switch (MarkerID)
            {
            case 1: GI->bIsMarker1 = true; break;
            case 2: GI->bIsMarker2 = true; break;
            case 3: GI->bIsMarker3 = true; break;
            case 4: GI->bIsMarker4 = true; break;
            case 5: GI->bIsMarker5 = true; break;
            case 6: GI->bIsMarker6 = true; break;
            case 7: GI->bIsMarker7 = true; break;
            case 8: GI->bIsMarker8 = true; break;
            case 9: GI->bIsMarker9 = true; break;
            case 10: GI->bIsMarker10 = true; break;
            case 11: GI->bIsMarker11 = true; break;
            case 12: GI->bIsMarker12 = true; break;
            case 13: GI->bIsMarker13 = true; break;
            case 14: GI->bIsMarker14 = true; break;
            case 15: GI->bIsMarker15 = true; break;
            default: break;
            }

            GI->SaveQuestLogData();
        }

        AArchivist* PlayerArchivist = Cast<AArchivist>(OtherActor);
        if (PlayerArchivist)
        {
            PlayerArchivist->ReinitialiseQuestMarkers();
        }

        Destroy();
    }
}

bool AQuestMarker::IsCompleted(const UArchiveGameInstance* GI) const
{
    switch (MarkerID)
    {
    case 1:  return GI->bIsMarker1;
    case 2:  return GI->bIsMarker2;
    case 3:  return GI->bIsMarker3;
    case 4:  return GI->bIsMarker4;
    case 5:  return GI->bIsMarker5;
    case 6:  return GI->bIsMarker6;
    case 7:  return GI->bIsMarker7;
    case 8:  return GI->bIsMarker8;
    case 9:  return GI->bIsMarker9;
    case 10:  return GI->bIsMarker10;
    case 11:  return GI->bIsMarker11;
    case 12:  return GI->bIsMarker12;
    case 13:  return GI->bIsMarker13;
    case 14:  return GI->bIsMarker14;
    case 15:  return GI->bIsMarker15;

    default: return false;
    }
}
