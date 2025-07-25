// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ArchiveGameInstance.h"
#include "SavingSystem/W_QuestLog_Pause.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"


void UArchiveGameInstance::SetSavedPlayerLocation(FVector Location)
{
    SavedPlayerLocation = Location;
}

void UArchiveGameInstance::SetLastLevelName(FString LevelName)
{
    LastLevelName = LevelName;
}

void UArchiveGameInstance::ResetAllProgress()
{
    LastLevelName = "";
    SavedPlayerLocation = FVector::ZeroVector;


    //// Reset quest checkboxes
    bIsCheckBox1Checked = false;
    bIsCheckBox2Checked = false;
    bIsCheckBox3Checked = false;
    bIsCheckBox4Checked = false;
    bIsCheckBox5Checked = false;
    bIsCheckBox6Checked = false;
    bIsCheckBox7Checked = false;
    bIsCheckBox8Checked = false;
    bIsCheckBox9Checked = false;
    bIsCheckBox10Checked = false;
    bIsCheckBox11Checked = false;

    // Reset other relevant flags
    bBoxPlacedBeforeMoldGame = false;
    bShreddedGameComplete = false;
    bMoldGameComplete = false;
    bBoxWasPlaced = false;

    bHasKeycard = false;

    bHasFoundDocument1 = false;
    bHasFoundDocument2 = false;

    bHasScannedDocuments = false;

    bIsCustomized = false;

    //Skin color
    bIsCustomizedSkinColor1 = false;
    bIsCustomizedSkinColor2 = false;
    bIsCustomizedSkinColor3 = false;
    bIsCustomizedSkinColor4 = false;
    bIsCustomizedSkinColor5 = false;
    bIsCustomizedSkinColor6 = false;
    bIsCustomizedSkinColor7 = false;
    bIsCustomizedSkinColor8 = false;
    bIsCustomizedSkinColor9 = false;
    bIsCustomizedSkinColor10 = false;
    bIsCustomizedSkinColor11 = false;
    bIsCustomizedSkinColor12 = false;
    bIsCustomizedSkinColor13 = false;
    bIsCustomizedSkinColor14 = false;

    //Clock color
    bIsCustomizedWatchColor1 = false;
    bIsCustomizedWatchColor2 = false;
    bIsCustomizedWatchColor3 = false;
    bIsCustomizedWatchColor4 = false;
    bIsCustomizedWatchColor5 = false;
    bIsCustomizedWatchColor6 = false;
    bIsCustomizedWatchColor7 = false;
    bIsCustomizedWatchColor8 = false;
    bIsCustomizedWatchColor9 = false;
    bIsCustomizedWatchColor10 = false;

    //Markers
    bIsMarker1 = false;
    bIsMarker2 = false;
    bIsMarker3 = false;
    bIsMarker4 = false;
    bIsMarker5 = false;
    bIsMarker6 = false;
    bIsMarker7 = false;
    bIsMarker8 = false;
    bIsMarker9 = false;
    bIsMarker10 = false;
    bIsMarker11 = false;
    bIsMarker12 = false;
    bIsMarker13 = false;
    bIsMarker14 = false;
    bIsMarker15 = false;

    //Sequence
    bIntroCutscenePlayed = false;

    //Tutorial
    bTutorialPlayed = false;

    //Mold
    bHasCompletedMoldEasy = false;

    // Clear quest entries
    if (QuestLogData)
    {
        QuestLogData->QuestEntries.Empty();
    }

    // Delete JSON save file
    FString SavePath = FPaths::ProjectSavedDir() + "QuestLog.json";
    if (FPaths::FileExists(SavePath))
    {
        IFileManager::Get().Delete(*SavePath);
    }
}

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
    bIsCheckBox8Checked = false;
    bIsCheckBox9Checked = false;
    bIsCheckBox10Checked = false;
    bIsCheckBox11Checked = false;

    bIsCustomized = false;
    bIsCustomizedSkinColor1 = false; 
    bIsCustomizedSkinColor2 = false; 
    bIsCustomizedSkinColor3 = false; 
    bIsCustomizedSkinColor4 = false; 
    bIsCustomizedSkinColor5 = false; 
    bIsCustomizedSkinColor6 = false; 
    bIsCustomizedSkinColor7 = false; 
    bIsCustomizedSkinColor8 = false; 
    bIsCustomizedSkinColor9 = false; 
    bIsCustomizedSkinColor10 = false; 
    bIsCustomizedSkinColor11 = false; 
    bIsCustomizedSkinColor12 = false;
    bIsCustomizedSkinColor13 = false;
    bIsCustomizedSkinColor14 = false;

    bIsCustomizedWatchColor1 = false;
    bIsCustomizedWatchColor2 = false;
    bIsCustomizedWatchColor3 = false;
    bIsCustomizedWatchColor4 = false;
    bIsCustomizedWatchColor5 = false;
    bIsCustomizedWatchColor6 = false;
    bIsCustomizedWatchColor7 = false;
    bIsCustomizedWatchColor8 = false;
    bIsCustomizedWatchColor9 = false;
    bIsCustomizedWatchColor10 = false;

    bIsMarker1 = false;
    bIsMarker2 = false;
    bIsMarker3 = false;
    bIsMarker4 = false;
    bIsMarker5 = false;
    bIsMarker6 = false;
    bIsMarker7 = false;
    bIsMarker8 = false;
    bIsMarker9 = false;
    bIsMarker10 = false;
    bIsMarker11 = false;
    bIsMarker12 = false;
    bIsMarker13 = false;
    bIsMarker14 = false;
    bIsMarker15 = false;

    // Reset other relevant flags
    bBoxPlacedBeforeMoldGame = false;
    bShreddedGameComplete = false;
    bMoldGameComplete = false;
    bBoxWasPlaced = false;

    bHasKeycard = false;

    bHasFoundDocument1 = false;
    bHasFoundDocument2 = false;

    bHasScannedDocuments = false;

    bHasCompletedMoldEasy = false;
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
    JsonObject->SetBoolField("IsCheckBox8Checked", bIsCheckBox8Checked);
    JsonObject->SetBoolField("IsCheckBox9Checked", bIsCheckBox9Checked);
    JsonObject->SetBoolField("IsCheckBox10Checked", bIsCheckBox10Checked);
    JsonObject->SetBoolField("IsCheckBox11Checked", bIsCheckBox11Checked);

    JsonObject->SetBoolField("bIsCustomized", bIsCustomized);

    JsonObject->SetBoolField("bIsCustomizedSkinColor1", bIsCustomizedSkinColor1);
    JsonObject->SetBoolField("bIsCustomizedSkinColor2", bIsCustomizedSkinColor2);
    JsonObject->SetBoolField("bIsCustomizedSkinColor3", bIsCustomizedSkinColor3);
    JsonObject->SetBoolField("bIsCustomizedSkinColor4", bIsCustomizedSkinColor4);
    JsonObject->SetBoolField("bIsCustomizedSkinColor5", bIsCustomizedSkinColor5);
    JsonObject->SetBoolField("bIsCustomizedSkinColor6", bIsCustomizedSkinColor6);
    JsonObject->SetBoolField("bIsCustomizedSkinColor7", bIsCustomizedSkinColor7);
    JsonObject->SetBoolField("bIsCustomizedSkinColor8", bIsCustomizedSkinColor8);
    JsonObject->SetBoolField("bIsCustomizedSkinColor9", bIsCustomizedSkinColor9);
    JsonObject->SetBoolField("bIsCustomizedSkinColor10", bIsCustomizedSkinColor10);
    JsonObject->SetBoolField("bIsCustomizedSkinColor11", bIsCustomizedSkinColor11);
    JsonObject->SetBoolField("bIsCustomizedSkinColor12", bIsCustomizedSkinColor12);
    JsonObject->SetBoolField("bIsCustomizedSkinColor13", bIsCustomizedSkinColor13);
    JsonObject->SetBoolField("bIsCustomizedSkinColor14", bIsCustomizedSkinColor14);

    JsonObject->SetBoolField("bIsCustomizedWatchColor1", bIsCustomizedWatchColor1);
    JsonObject->SetBoolField("bIsCustomizedWatchColor2", bIsCustomizedWatchColor2);
    JsonObject->SetBoolField("bIsCustomizedWatchColor3", bIsCustomizedWatchColor3);
    JsonObject->SetBoolField("bIsCustomizedWatchColor4", bIsCustomizedWatchColor4);
    JsonObject->SetBoolField("bIsCustomizedWatchColor5", bIsCustomizedWatchColor5);
    JsonObject->SetBoolField("bIsCustomizedWatchColor6", bIsCustomizedWatchColor6);
    JsonObject->SetBoolField("bIsCustomizedWatchColor7", bIsCustomizedWatchColor7);
    JsonObject->SetBoolField("bIsCustomizedWatchColor8", bIsCustomizedWatchColor8);
    JsonObject->SetBoolField("bIsCustomizedWatchColor9", bIsCustomizedWatchColor9);
    JsonObject->SetBoolField("bIsCustomizedWatchColor10", bIsCustomizedWatchColor10);

    JsonObject->SetBoolField("bIsMarker1", bIsMarker1);
    JsonObject->SetBoolField("bIsMarker2", bIsMarker2);
    JsonObject->SetBoolField("bIsMarker3", bIsMarker3);
    JsonObject->SetBoolField("bIsMarker4", bIsMarker4);
    JsonObject->SetBoolField("bIsMarker5", bIsMarker5);
    JsonObject->SetBoolField("bIsMarker6", bIsMarker6);
    JsonObject->SetBoolField("bIsMarker7", bIsMarker7);
    JsonObject->SetBoolField("bIsMarker8", bIsMarker8);
    JsonObject->SetBoolField("bIsMarker9", bIsMarker9);
    JsonObject->SetBoolField("bIsMarker10", bIsMarker10);
    JsonObject->SetBoolField("bIsMarker11", bIsMarker11);
    JsonObject->SetBoolField("bIsMarker12", bIsMarker12);
    JsonObject->SetBoolField("bIsMarker13", bIsMarker13);
    JsonObject->SetBoolField("bIsMarker14", bIsMarker14);
    JsonObject->SetBoolField("bIsMarker15", bIsMarker15);

    JsonObject->SetBoolField("bHasKeycard", bHasKeycard);

    JsonObject->SetBoolField("bBoxPlacedBeforeMoldGame", bBoxPlacedBeforeMoldGame);
    JsonObject->SetBoolField("bShreddedGameComplete", bShreddedGameComplete);
    JsonObject->SetBoolField("bMoldGameComplete", bMoldGameComplete);

    JsonObject->SetBoolField("bHasFoundDocument1", bHasFoundDocument1);
    JsonObject->SetBoolField("bHasFoundDocument2", bHasFoundDocument2);

    JsonObject->SetBoolField("bHasScannedDocuments", bHasScannedDocuments);

    JsonObject->SetBoolField("bHasCompletedMoldEasy", bHasCompletedMoldEasy);

    // Save position
    FVector Loc = PlacedBoxTransform.GetLocation();
    JsonObject->SetNumberField("BoxLocX", Loc.X);
    JsonObject->SetNumberField("BoxLocY", Loc.Y);
    JsonObject->SetNumberField("BoxLocZ", Loc.Z);

    // Save full quaternion (exact orientation)
    FQuat Quat = PlacedBoxTransform.GetRotation();
    JsonObject->SetNumberField("BoxQuatX", Quat.X);
    JsonObject->SetNumberField("BoxQuatY", Quat.Y);
    JsonObject->SetNumberField("BoxQuatZ", Quat.Z);
    JsonObject->SetNumberField("BoxQuatW", Quat.W);

    FVector Scale = PlacedBoxTransform.GetScale3D();
    JsonObject->SetNumberField("BoxScaleX", Scale.X);
    JsonObject->SetNumberField("BoxScaleY", Scale.Y);
    JsonObject->SetNumberField("BoxScaleZ", Scale.Z);

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
    FString LoadPath = FPaths::ProjectSavedDir() + "QuestLog.json";
    if (!FPaths::FileExists(LoadPath)) return;

    if (QuestLogData)
    {
       // FString LoadPath = FPaths::ProjectSavedDir() + "QuestLog.json"; 

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
                bIsCheckBox8Checked = JsonObject->GetBoolField("IsCheckBox8Checked");
                bIsCheckBox9Checked = JsonObject->GetBoolField("IsCheckBox9Checked");
                bIsCheckBox10Checked = JsonObject->GetBoolField("IsCheckBox10Checked");
                bIsCheckBox11Checked = JsonObject->GetBoolField("IsCheckBox11Checked");

                bIsCustomized = JsonObject->GetBoolField("bIsCustomized");

                bIsCustomizedSkinColor1 = JsonObject->GetBoolField("bIsCustomizedSkinColor1");
                bIsCustomizedSkinColor2 = JsonObject->GetBoolField("bIsCustomizedSkinColor2");
                bIsCustomizedSkinColor3 = JsonObject->GetBoolField("bIsCustomizedSkinColor3");
                bIsCustomizedSkinColor4 = JsonObject->GetBoolField("bIsCustomizedSkinColor4");
                bIsCustomizedSkinColor5 = JsonObject->GetBoolField("bIsCustomizedSkinColor5");
                bIsCustomizedSkinColor6 = JsonObject->GetBoolField("bIsCustomizedSkinColor6");
                bIsCustomizedSkinColor7 = JsonObject->GetBoolField("bIsCustomizedSkinColor7");
                bIsCustomizedSkinColor8 = JsonObject->GetBoolField("bIsCustomizedSkinColor8");
                bIsCustomizedSkinColor9 = JsonObject->GetBoolField("bIsCustomizedSkinColor9");
                bIsCustomizedSkinColor10 = JsonObject->GetBoolField("bIsCustomizedSkinColor10");
                bIsCustomizedSkinColor11 = JsonObject->GetBoolField("bIsCustomizedSkinColor11");
                bIsCustomizedSkinColor12 = JsonObject->GetBoolField("bIsCustomizedSkinColor12");
                bIsCustomizedSkinColor13 = JsonObject->GetBoolField("bIsCustomizedSkinColor13");
                bIsCustomizedSkinColor14 = JsonObject->GetBoolField("bIsCustomizedSkinColor14");

                bIsCustomizedWatchColor1 = JsonObject->GetBoolField("bIsCustomizedWatchColor1");
                bIsCustomizedWatchColor2 = JsonObject->GetBoolField("bIsCustomizedWatchColor2");
                bIsCustomizedWatchColor3 = JsonObject->GetBoolField("bIsCustomizedWatchColor3");
                bIsCustomizedWatchColor4 = JsonObject->GetBoolField("bIsCustomizedWatchColor4");
                bIsCustomizedWatchColor5 = JsonObject->GetBoolField("bIsCustomizedWatchColor5");
                bIsCustomizedWatchColor6 = JsonObject->GetBoolField("bIsCustomizedWatchColor6");
                bIsCustomizedWatchColor7 = JsonObject->GetBoolField("bIsCustomizedWatchColor7");
                bIsCustomizedWatchColor8 = JsonObject->GetBoolField("bIsCustomizedWatchColor8");
                bIsCustomizedWatchColor9 = JsonObject->GetBoolField("bIsCustomizedWatchColor9");
                bIsCustomizedWatchColor10 = JsonObject->GetBoolField("bIsCustomizedWatchColor10");

                bIsMarker1 = JsonObject->GetBoolField("bIsMarker1");
                bIsMarker2 = JsonObject->GetBoolField("bIsMarker2");
                bIsMarker3 = JsonObject->GetBoolField("bIsMarker3");
                bIsMarker4 = JsonObject->GetBoolField("bIsMarker4");
                bIsMarker5 = JsonObject->GetBoolField("bIsMarker5");
                bIsMarker6 = JsonObject->GetBoolField("bIsMarker6");
                bIsMarker7 = JsonObject->GetBoolField("bIsMarker7");
                bIsMarker8 = JsonObject->GetBoolField("bIsMarker8");
                bIsMarker9 = JsonObject->GetBoolField("bIsMarker9");
                bIsMarker10 = JsonObject->GetBoolField("bIsMarker10");
                bIsMarker11 = JsonObject->GetBoolField("bIsMarker11");
                bIsMarker12 = JsonObject->GetBoolField("bIsMarker12");
                bIsMarker13 = JsonObject->GetBoolField("bIsMarker13");
                bIsMarker14 = JsonObject->GetBoolField("bIsMarker14");
                bIsMarker15 = JsonObject->GetBoolField("bIsMarker15");

                bHasKeycard = JsonObject->GetBoolField("bHasKeycard");

                bBoxPlacedBeforeMoldGame = JsonObject->GetBoolField("bBoxPlacedBeforeMoldGame");
                bShreddedGameComplete = JsonObject->GetBoolField("bShreddedGameComplete");
                bMoldGameComplete = JsonObject->GetBoolField("bMoldGameComplete");

                bHasFoundDocument1 = JsonObject->GetBoolField("bHasFoundDocument1");
                bHasFoundDocument2 = JsonObject->GetBoolField("bHasFoundDocument2");

                if (JsonObject->HasField("bHasScannedDocuments"))
                {
                    bHasScannedDocuments = JsonObject->GetBoolField("bHasScannedDocuments");
                }

                bHasCompletedMoldEasy = JsonObject->GetBoolField("bHasCompletedMoldEasy");

                FVector Loc(
                    JsonObject->GetNumberField("BoxLocX"),
                    JsonObject->GetNumberField("BoxLocY"),
                    JsonObject->GetNumberField("BoxLocZ")
                );

    
                FQuat Quat(
                    JsonObject->GetNumberField("BoxQuatX"),
                    JsonObject->GetNumberField("BoxQuatY"),
                    JsonObject->GetNumberField("BoxQuatZ"),
                    JsonObject->GetNumberField("BoxQuatW")
                );


                FVector Scale(
                    JsonObject->GetNumberField("BoxScaleX"),
                    JsonObject->GetNumberField("BoxScaleY"),
                    JsonObject->GetNumberField("BoxScaleZ")
                );

                // Build the transform
                PlacedBoxTransform = FTransform(Quat, Loc, Scale);
            }
        }
    }
}
