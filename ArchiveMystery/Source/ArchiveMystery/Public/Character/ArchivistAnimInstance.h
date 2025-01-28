// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Character/Archivist.h"
#include "ArchivistAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARCHIVEMYSTERY_API UArchivistAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	ECharacterState CharacterState;
};
