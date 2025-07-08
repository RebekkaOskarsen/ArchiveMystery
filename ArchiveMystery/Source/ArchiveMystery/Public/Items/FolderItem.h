// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "FolderItem.generated.h"

UCLASS()
class ARCHIVEMYSTERY_API AFolderItem : public AItems
{
	GENERATED_BODY()
	
public:
    AFolderItem();

    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    bool bIsPickedUp;

    void OnPickedUp(USkeletalMeshComponent* AttachToMesh, FName SocketName);

    void OnDropped();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Folder")
    class USphereComponent* OverlapSphere;

    UPROPERTY(EditDefaultsOnly, Category = "Folder|UI")
    TSubclassOf<UUserWidget> PickupPromptWidgetClass;

    UPROPERTY()
    UUserWidget* PickupPromptWidgetInstance;

    UFUNCTION()
    void OnOverlapBegin(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex);
};
