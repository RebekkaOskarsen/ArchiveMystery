// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestLogData.generated.h"

// Struktur som representerer hver quest
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

    // Legg til en unik ID for hver quest
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString QuestID;  // Bruk en unik streng som "Quest1", "Quest2" etc.
};

UCLASS(BlueprintType)
class YOURGAME_API UQuestLogData : public UObject
{
    GENERATED_BODY()

public:
    // Liste over alle quests i loggen
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest Log")
    TArray<FQuestData> QuestEntries;

    UFUNCTION(BlueprintCallable, Category = "Quest Log")
    const TArray<FQuestData>& GetQuestEntries() const { return QuestEntries; }

    // Konstruktør
    UQuestLogData();

    // Funksjon for å legge til en quest
    void AddQuest(const FString& QuestName, const FString& QuestDescription);

    UFUNCTION(BlueprintCallable, Category = "Quest Log")
    void UpdateQuestStatus(const FString& QuestName, bool bIsCompleted);
};
