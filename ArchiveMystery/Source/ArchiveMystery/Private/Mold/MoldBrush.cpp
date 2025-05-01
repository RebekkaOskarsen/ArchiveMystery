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
            false, // auto destroy
            1.0f, 1.0f, 0.0f
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

    // FVector WorldLocation, WorldDirection;
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        FHitResult HitResult;
        if (PC->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), false, HitResult))
        {
            SetActorLocation(HitResult.Location + FVector(0.f, 0.f, 5.f)); // Offset if needed
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

    if (!bCanBrush) return;

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

            // Spawn brushing particle
            if (BrushingEffect)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(
                    GetWorld(),
                    BrushingEffect,
                    GetActorLocation() + EffectOffset,
                    GetActorRotation()
                );
            }

            // Play sound
            if (BrushAudioComponent)
            {
                BrushAudioComponent->Play();
            }
            else
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), BrushSound, GetActorLocation());
            }

            // Reset timer fallback
            if (BrushSound)
            {
                GetWorld()->GetTimerManager().SetTimer(
                    FallbackBrushTimerHandle,
                    this,
                    &AMoldBrush::ResetBrushCooldown,
                    BrushSound->GetDuration(),
                    false
                );
            }
            else
            {
                // default fallback in case sound is missing
                GetWorld()->GetTimerManager().SetTimer(
                    FallbackBrushTimerHandle,
                    this,
                    &AMoldBrush::ResetBrushCooldown,
                    0.5f,
                    false
                );
            }

            bCanBrush = false;
            HitMold->OnBrushed(CurrentBrushSize);
        }
    }

   // DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0.1f, 0, 1);
}

void AMoldBrush::ResetBrushCooldown()
{
    bCanBrush = true;
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