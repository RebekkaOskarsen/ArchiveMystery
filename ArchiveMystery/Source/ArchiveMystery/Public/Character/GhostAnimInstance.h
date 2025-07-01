// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GhostAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UGhostAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GhostAnimation")
	bool bIsWalking = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GhostAnimation")
	bool bIsTalking = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GhostAnimation")
	bool bWasWalkingBeforeTalking = false;
};
