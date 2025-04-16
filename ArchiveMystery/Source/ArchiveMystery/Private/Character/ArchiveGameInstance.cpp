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
}

void UArchiveGameInstance::SaveQuestLogData()
{
    if (QuestLogData == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("QuestLogData is nullptr!"));
        return;
    }

    // Lag et JsonObject
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    // Lag en array for alle questene
    TArray<TSharedPtr<FJsonValue>> QuestArray;

    for (const FQuestData& Quest : QuestLogData->QuestEntries)
    {
        TSharedPtr<FJsonObject> QuestJson = MakeShareable(new FJsonObject());
        QuestJson->SetStringField("QuestName", Quest.QuestName);
        QuestJson->SetBoolField("bIsCompleted", Quest.bIsCompleted);
        QuestJson->SetStringField("QuestDescription", Quest.QuestDescription);
        QuestArray.Add(MakeShareable(new FJsonValueObject(QuestJson)));
    }

    // Legg til arrayet med questene i hoved-jsonen
    JsonObject->SetArrayField("Quests", QuestArray);

    JsonObject->SetBoolField("IsCheckBox1Checked", bIsCheckBox1Checked);
    JsonObject->SetBoolField("IsCheckBox2Checked", bIsCheckBox2Checked);
    JsonObject->SetBoolField("IsCheckBox3Checked", bIsCheckBox3Checked);
    JsonObject->SetBoolField("IsCheckBox4Checked", bIsCheckBox4Checked);
    JsonObject->SetBoolField("IsCheckBox5Checked", bIsCheckBox5Checked);
    JsonObject->SetBoolField("IsCheckBox6Checked", bIsCheckBox6Checked);
    JsonObject->SetBoolField("IsCheckBox7Checked", bIsCheckBox7Checked);


    // Serialiser jsonen til en streng
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    // Lagre den som en fil på disk
    FString SavePath = FPaths::ProjectSavedDir() + "QuestLog.json"; // Eller en annen ønsket plassering
    UE_LOG(LogTemp, Warning, TEXT("Saving QuestLog to: %s"), *SavePath);
    FFileHelper::SaveStringToFile(OutputString, *SavePath);
}


void UArchiveGameInstance::LoadQuestLogData()
{
    if (QuestLogData)
    {
        FString LoadPath = FPaths::ProjectSavedDir() + "QuestLog.json"; // Samme som lagringsstedet

        FString LoadedData;
        if (FFileHelper::LoadFileToString(LoadedData, *LoadPath))
        {
            // Parser JSON-strengen
            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LoadedData);

            if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
            {
                // Tøm nåværende quests før vi laster de nye
                QuestLogData->QuestEntries.Empty();

                // Hent arrayet med quests fra jsonen
                const TArray<TSharedPtr<FJsonValue>> QuestArray = JsonObject->GetArrayField("Quests");

                for (const TSharedPtr<FJsonValue>& QuestValue : QuestArray)
                {
                    TSharedPtr<FJsonObject> QuestJson = QuestValue->AsObject();
                    FQuestData LoadedQuest;
                    LoadedQuest.QuestName = QuestJson->GetStringField("QuestName");
                    LoadedQuest.bIsCompleted = QuestJson->GetBoolField("bIsCompleted");
                    LoadedQuest.QuestDescription = QuestJson->GetStringField("QuestDescription");

                    // Legg til den lastede questen
                    QuestLogData->QuestEntries.Add(LoadedQuest);
                }


                bIsCheckBox1Checked = JsonObject->GetBoolField("IsCheckBox1Checked");
                bIsCheckBox2Checked = JsonObject->GetBoolField("IsCheckBox2Checked");
                bIsCheckBox3Checked = JsonObject->GetBoolField("IsCheckBox3Checked");
                bIsCheckBox4Checked = JsonObject->GetBoolField("IsCheckBox4Checked");
                bIsCheckBox5Checked = JsonObject->GetBoolField("IsCheckBox5Checked");
                bIsCheckBox5Checked = JsonObject->GetBoolField("IsCheckBox6Checked");
                bIsCheckBox7Checked = JsonObject->GetBoolField("IsCheckBox7Checked");


            }
        }
    }
}
