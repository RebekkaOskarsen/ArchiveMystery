// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchivistAnimInstance.h"

void UArchivistAnimInstance::ResetIdleBreak()
{
	bPlayIdleBreak = false;

	UE_LOG(LogTemp, Warning, TEXT("Idle break reset via Notify"));
}
