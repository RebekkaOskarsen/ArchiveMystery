// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingSystem/QuestLogData.h"

UQuestLogData::UQuestLogData()
{
    
}

//Adds a new quest with a name and description to the quest log
void UQuestLogData::AddQuest(const FString& QuestName, const FString& QuestDescription)
{
    FQuestData NewQuest;
    NewQuest.QuestName = QuestName;
    NewQuest.QuestDescription = QuestDescription;
    QuestEntries.Add(NewQuest);
}

//Updates if the quest is completed or not 
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