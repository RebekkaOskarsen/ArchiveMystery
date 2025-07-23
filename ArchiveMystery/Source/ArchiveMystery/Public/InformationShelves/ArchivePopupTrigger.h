// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "ArchivePopupTrigger.generated.h"

class UBoxComponent;
class UArchivePopupWidget;

UCLASS()
class ARCHIVEMYSTERY_API AArchivePopupTrigger : public AActor
{
	GENERATED_BODY()
	
public:
    AArchivePopupTrigger();

    void ResetTrigger();

    bool bCanTrigger;

    FTimerHandle TriggerCooldownTimer;

    UPROPERTY(EditAnywhere, Category = "Trigger")
    float CooldownTime = 2.0f; // halvt sekund pause etter resume

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> PopupWidgetClass;

private:
    UPROPERTY(VisibleAnywhere)
    UBoxComponent* TriggerBox;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* VisibleMesh;

    UPROPERTY()
    UUserWidget* ActiveWidget;

};
