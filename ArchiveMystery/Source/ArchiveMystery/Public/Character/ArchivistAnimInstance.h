// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Character/Archivist.h"
#include "ArchivistAnimInstance.generated.h"

UCLASS()
class ARCHIVEMYSTERY_API UArchivistAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	ECharacterState CharacterState;

	//Animation from idle to holding
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHoldingBox;

	//Animation from idle to see watch
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Idle")
	bool bPlayIdleBreak = false;

	UFUNCTION(BlueprintCallable, Category = "Idle")
	void ResetIdleBreak();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayOpenBook = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayReadBook = false;
};
