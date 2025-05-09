// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestLogData.generated.h"

USTRUCT(BlueprintType)
struct FQuestData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString QuestName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCompleted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString QuestDescription;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString QuestID;  
};

UCLASS(BlueprintType)
class YOURGAME_API UQuestLogData : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
    TArray<FQuestData> QuestEntries;

    UFUNCTION(BlueprintCallable, Category = "Quest Log")
    const TArray<FQuestData>& GetQuestEntries() const { return QuestEntries; }

    UQuestLogData();

    void AddQuest(const FString& QuestName, const FString& QuestDescription);

    UFUNCTION(BlueprintCallable, Category = "Quest Log")
    void UpdateQuestStatus(const FString& QuestName, bool bIsCompleted);
};
