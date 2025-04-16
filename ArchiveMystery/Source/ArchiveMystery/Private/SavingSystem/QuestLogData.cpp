// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingSystem/QuestLogData.h"

UQuestLogData::UQuestLogData()
{
    // Initialiser med standardverdier om nødvendig
}

void UQuestLogData::AddQuest(const FString& QuestName, const FString& QuestDescription)
{
    FQuestData NewQuest;
    NewQuest.QuestName = QuestName;
    NewQuest.QuestDescription = QuestDescription;
    QuestEntries.Add(NewQuest);
}

void UQuestLogData::UpdateQuestStatus(const FString& QuestName, bool bIsCompleted)
{
    for (FQuestData& Quest : QuestEntries)
    {
        if (Quest.QuestName == QuestName)
        {
            Quest.bIsCompleted = bIsCompleted;
            break;
        }
    }
}