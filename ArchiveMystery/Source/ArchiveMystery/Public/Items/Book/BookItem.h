// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Items.h"
#include "BookItem.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API ABookItem : public AItems
{
	GENERATED_BODY()
	
public:
    ABookItem();

    void EquipBook(USceneComponent* InParent, FName InSocketName);

    void UnequipTo(FVector Location, FRotator Rotation);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Book|Mesh")
    USkeletalMeshComponent* BookMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Book|Animation")
    class UAnimSequence* OpeningAnim;     // plays once

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Book|Animation")
    class UAnimSequence* OpenLoopAnim;    // loops while reading

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Book|Animation")
    class UAnimSequence* ClosingAnim;     // plays once

    UFUNCTION(BlueprintCallable, Category = "Book|Animation")
    void PlayOpenAndRead();

    UFUNCTION(BlueprintCallable, Category = "Book|Animation")
    void PlayClose();

    // Query
    UFUNCTION(BlueprintPure, Category = "Book")
    bool IsOpen() const { return bIsOpen; }
protected:
    virtual void OnSphereOverlap(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    ) override;

    virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

private:
    // After OpeningAnim finishes, we switch to OpenLoopAnim
    void SwitchToOpenLoop();

    FTimerHandle OpenLoopTimerHandle;

    // Whether the book is currently considered "open/reading"
    bool bIsOpen = false;
};
