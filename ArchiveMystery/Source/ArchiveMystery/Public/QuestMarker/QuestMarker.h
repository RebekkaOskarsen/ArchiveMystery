// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ArchiveGameInstance.h"
#include "GameFramework/Actor.h"
#include "QuestMarker.generated.h"

UCLASS()
class ARCHIVEMYSTERY_API AQuestMarker : public AActor
{
	GENERATED_BODY()
	
public:	
	AQuestMarker();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
    bool bStartActive = false;

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void ActivateMarker();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UWidgetComponent* MarkerWidget;

    UPROPERTY(EditAnywhere)
    int32 MarkerID = 1;
 
    bool IsCompleted(const UArchiveGameInstance* GI) const;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* Trigger;

protected:

    virtual void BeginPlay() override;

private:

    UFUNCTION()
    void OnTriggerEnter(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 BodyIdx, bool bFromSweep, const FHitResult& Hit);

};
