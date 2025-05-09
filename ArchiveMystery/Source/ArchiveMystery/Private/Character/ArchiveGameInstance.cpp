// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchiveGameInstance.h"
#include "SavingSystem/W_QuestLog_Pause.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"


UArchiveGameInstance::UArchiveGameInstance()
{
    QuestLogData = CreateDefaultSubobject<UQuestLogData>(TEXT("QuestLogData"));

    bIsCheckBox1Checked = false;
    bIsCheckBox2Checked = false;
    bIsCheckBox3Checked = false;
    bIsCheckBox4Checked = false;
    bIsCheckBox5Checked = false;
    bIsCheckBox6Checked = false;
    bIsCheckBox7Checked = false;

    bIsCustomized = false;

    bIsMarker1 = false;
    bIsMarker2 = false;
    bIsMarker3 = false;
    bIsMarker4 = false;
    bIsMarker5 = false;
    bIsMarker6 = false;

    bHasGarageKeycard = false;
    bHasArchiveKeycard = false;
    bHasEquipmentKeycard = false; 
}

//Saves the data to a JSON file 
void UArchiveGameInstance::SaveQuestLogData()
{
    if (QuestLogData == nullptr)
    {
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    TArray<TSharedPtr<FJsonValue>> QuestArray;

    for (const FQuestData& Quest : QuestLogData->QuestEntries)
    {
        TSharedPtr<FJsonObject> QuestJson = MakeShareable(new FJsonObject());
        QuestJson->SetStringField("QuestName", Quest.QuestName);
        QuestJson->SetBoolField("bIsCompleted", Quest.bIsCompleted);
        QuestJson->SetStringField("QuestDescription", Quest.QuestDescription);
        QuestArray.Add(MakeShareable(new FJsonValueObject(QuestJson)));
    }

    JsonObject->SetArrayField("Quests", QuestArray);

    JsonObject->SetBoolField("IsCheckBox1Checked", bIsCheckBox1Checked);
    JsonObject->SetBoolField("IsCheckBox2Checked", bIsCheckBox2Checked);
    JsonObject->SetBoolField("IsCheckBox3Checked", bIsCheckBox3Checked);
    JsonObject->SetBoolField("IsCheckBox4Checked", bIsCheckBox4Checked);
    JsonObject->SetBoolField("IsCheckBox5Checked", bIsCheckBox5Checked);
    JsonObject->SetBoolField("IsCheckBox6Checked", bIsCheckBox6Checked);
    JsonObject->SetBoolField("IsCheckBox7Checked", bIsCheckBox7Checked);

    JsonObject->SetBoolField("bIsCustomized", bIsCustomized);

    JsonObject->SetBoolField("bIsMarker1", bIsMarker1);
    JsonObject->SetBoolField("bIsMarker2", bIsMarker2);
    JsonObject->SetBoolField("bIsMarker3", bIsMarker3);
    JsonObject->SetBoolField("bIsMarker4", bIsMarker4);
    JsonObject->SetBoolField("bIsMarker5", bIsMarker5);
    JsonObject->SetBoolField("bIsMarker6", bIsMarker6);

    JsonObject->SetBoolField("bHasGarageKeycard", bHasGarageKeycard);
    JsonObject->SetBoolField("bHasArchiveKeycard", bHasArchiveKeycard);
    JsonObject->SetBoolField("bHasEquipmentKeycard", bHasEquipmentKeycard);

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    FString SavePath = FPaths::ProjectSavedDir() + "QuestLog.json"; 
    UE_LOG(LogTemp, Warning, TEXT("Saving QuestLog to: %s"), *SavePath);
    FFileHelper::SaveStringToFile(OutputString, *SavePath);
}

//Loads the data from a JSON file 
void UArchiveGameInstance::LoadQuestLogData()
{
    if (QuestLogData)
    {
        FString LoadPath = FPaths::ProjectSavedDir() + "QuestLog.json"; 

        FString LoadedData;
        if (FFileHelper::LoadFileToString(LoadedData, *LoadPath))
        {
            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LoadedData);

            if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
            {
                QuestLogData->QuestEntries.Empty();

                const TArray<TSharedPtr<FJsonValue>> QuestArray = JsonObject->GetArrayField("Quests");

                for (const TSharedPtr<FJsonValue>& QuestValue : QuestArray)
                {
                    TSharedPtr<FJsonObject> QuestJson = QuestValue->AsObject();
                    FQuestData LoadedQuest;
                    LoadedQuest.QuestName = QuestJson->GetStringField("QuestName");
                    LoadedQuest.bIsCompleted = QuestJson->GetBoolField("bIsCompleted");
                    LoadedQuest.QuestDescription = QuestJson->GetStringField("QuestDescription");

                    QuestLogData->QuestEntries.Add(LoadedQuest);
                }


                bIsCheckBox1Checked = JsonObject->GetBoolField("IsCheckBox1Checked");
                bIsCheckBox2Checked = JsonObject->GetBoolField("IsCheckBox2Checked");
                bIsCheckBox3Checked = JsonObject->GetBoolField("IsCheckBox3Checked");
                bIsCheckBox4Checked = JsonObject->GetBoolField("IsCheckBox4Checked");
                bIsCheckBox5Checked = JsonObject->GetBoolField("IsCheckBox5Checked");
                bIsCheckBox5Checked = JsonObject->GetBoolField("IsCheckBox6Checked");
                bIsCheckBox7Checked = JsonObject->GetBoolField("IsCheckBox7Checked");

                bIsCustomized = JsonObject->GetBoolField("bIsCustomized");

                bIsMarker1 = JsonObject->GetBoolField("bIsMarker1");
                bIsMarker2 = JsonObject->GetBoolField("bIsMarker2");
                bIsMarker3 = JsonObject->GetBoolField("bIsMarker3");
                bIsMarker4 = JsonObject->GetBoolField("bIsMarker4");
                bIsMarker5 = JsonObject->GetBoolField("bIsMarker5");
                bIsMarker6 = JsonObject->GetBoolField("bIsMarker6");

                bHasGarageKeycard = JsonObject->GetBoolField("bHasGarageKeycard");
                bHasArchiveKeycard = JsonObject->GetBoolField("bHasArchiveKeycard");
                bHasEquipmentKeycard = JsonObject->GetBoolField("bHasEquipmentKeycard");
            }
        }
    }
}
