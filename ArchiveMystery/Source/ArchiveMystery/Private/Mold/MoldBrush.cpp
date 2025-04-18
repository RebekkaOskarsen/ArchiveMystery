// Fill out your copyright notice in the Description page of Project Settings.


#include "Mold/MoldBrush.h"
#include "Mold/Mold.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMoldBrush::AMoldBrush()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    BrushMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrushMesh"));
    RootComponent = BrushMesh;
    CurrentBrushSize = EBrushSize::Small;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> SmallBrush(TEXT("StaticMesh'/Game/3DAssets/Brushes/SM_Small_Brush.SM_Small_Brush'"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BigBrush(TEXT("StaticMesh'/Game/3DAssets/Brushes/SM_Big_Brush.SM_Big_Brush'"));


    if (SmallBrush.Succeeded())
    {
        SmallBrushMesh = SmallBrush.Object;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load Small Brush mesh! Check the path."));
    }

    if (BigBrush.Succeeded())
    {
        BigBrushMesh = BigBrush.Object;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load Big Brush mesh! Check the path."));
    }

    // Set the default brush
    if (SmallBrushMesh)
    {
        BrushMesh->SetStaticMesh(SmallBrushMesh);
    }
}

// Called when the game starts or when spawned
void AMoldBrush::BeginPlay()
{
	Super::BeginPlay();

	UpdateCursorMesh();

    if (BrushSound)
    {
        BrushAudioComponent = UGameplayStatics::SpawnSoundAttached(
            BrushSound,
            RootComponent,
            NAME_None,
            FVector::ZeroVector,
            EAttachLocation::KeepRelativeOffset,
            false, // not auto destroy
            1.0f,
            1.0f,
            0.0f
        );

        if (BrushAudioComponent)
        {
            BrushAudioComponent->Stop();
            BrushAudioComponent->OnAudioFinished.AddDynamic(this, &AMoldBrush::OnBrushSoundFinished);
        }
    }
}

// Called every frame
void AMoldBrush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FVector WorldLocation, WorldDirection;
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        // Deproject screen position to world
        PC->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

        // Perform a trace to find the hit position on the world surface
        FVector Start = WorldLocation;
        FVector End = Start + (WorldDirection * 5000.f); // Large distance to ensure it reaches the floor

        FHitResult Hit;
        FCollisionQueryParams TraceParams;
        TraceParams.AddIgnoredActor(this); // Ignore the brush itself

        bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

        if (bHit)
        {
            // Set brush position to the exact hit location
            SetActorLocation(Hit.Location + FVector(0.f, 0.f, 5.f)); // Slight offset above surface
        }
    }

    CheckForMold();

}

void AMoldBrush::SetBrushSize(EBrushSize NewSize)
{
    CurrentBrushSize = NewSize;
    UpdateCursorMesh();
}

void AMoldBrush::CheckForMold()
{

    if (!bCanBrush || !BrushSound) return;

    FVector Start = GetActorLocation();
    FVector End = Start - FVector(0, 0, 50);
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        AMold* HitMold = Cast<AMold>(Hit.GetActor());
        if (HitMold)
        {
            UE_LOG(LogTemp, Warning, TEXT("Brush hovering over mold!"));

            if (BrushAudioComponent)
            {
                BrushAudioComponent->Play();
            }
            else
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), BrushSound, GetActorLocation());
            }

            bCanBrush = false;
            HitMold->OnBrushed(CurrentBrushSize);
        }
    }

   // DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0.1f, 0, 1);
}

void AMoldBrush::OnBrushSoundFinished()
{
    bCanBrush = true;
   // bHasBrushedThisStroke = false;
}

void AMoldBrush::UpdateCursorMesh()
{
    if (BrushMesh)
    {
        if (CurrentBrushSize == EBrushSize::Small && SmallBrushMesh)
        {
            UE_LOG(LogTemp, Warning, TEXT("Switching to Small Brush"));
            BrushMesh->SetStaticMesh(SmallBrushMesh);
            BrushMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
        }
        else if (CurrentBrushSize == EBrushSize::Big && BigBrushMesh)
        {
            UE_LOG(LogTemp, Warning, TEXT("Switching to Big Brush"));
            BrushMesh->SetStaticMesh(BigBrushMesh);
            BrushMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
        }

        // Apply rotation so bristles point downward
       FRotator NewRotation = FRotator(315.0f, 0.0f, 0.0f); // Adjust if needed
        BrushMesh->SetRelativeRotation(NewRotation);
    }
}