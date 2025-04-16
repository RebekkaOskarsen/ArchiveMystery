// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingSystem/W_QuestLog_Pause.h"
#include "Character/ArchiveGameInstance.h"

void UW_QuestLog_Pause::SaveCheckBoxState()
{
    UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
    if (GameInstance)
    {
        // Hvis checkbox 1 er huket av, lagre tilstanden
        GameInstance->bIsCheckBox1Checked = CheckBox_1->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_2->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_3->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_4->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_5->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_6->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_7->IsChecked();
    }
}

void UW_QuestLog_Pause::LoadCheckBoxState()
{
    // Sørg for at GameInstance er gyldig
    UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
    if (GameInstance)
    {
        // Sjekk om checkboxene er gyldige før vi prøver å bruke dem
        if (CheckBox_1 && CheckBox_2 && CheckBox_3 && CheckBox_4 && CheckBox_5 && CheckBox_6 && CheckBox_7)
        {
            // Sett tilstanden til checkboxene basert på lagret data
            CheckBox_1->SetIsChecked(GameInstance->bIsCheckBox1Checked);  // Sett tilstand for checkbox 1
            CheckBox_2->SetIsChecked(GameInstance->bIsCheckBox2Checked);  // Sett tilstand for checkbox 2
            CheckBox_3->SetIsChecked(GameInstance->bIsCheckBox3Checked);  // Sett tilstand for checkbox 3
            CheckBox_4->SetIsChecked(GameInstance->bIsCheckBox4Checked);  // Sett tilstand for checkbox 4
            CheckBox_5->SetIsChecked(GameInstance->bIsCheckBox5Checked);  // Sett tilstand for checkbox 5
            CheckBox_6->SetIsChecked(GameInstance->bIsCheckBox6Checked);  // Sett tilstand for checkbox 6
            CheckBox_7->SetIsChecked(GameInstance->bIsCheckBox7Checked);  // Sett tilstand for checkbox 7
        }
        else
        {
            // Hvis en av checkboxene er invalid, logg en feilmelding for debugging
            UE_LOG(LogTemp, Error, TEXT("CheckBox is invalid!"));
        }
    }
    else
    {
        // Hvis GameInstance er invalid, logg en feilmelding
        UE_LOG(LogTemp, Error, TEXT("GameInstance is invalid!"));
    }
}
