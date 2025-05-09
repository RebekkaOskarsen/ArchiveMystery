// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingSystem/W_QuestLog_Pause.h"
#include "Character/ArchiveGameInstance.h"

//Saves the current state of the checkboxes to the ArchiveGameInstance 
void UW_QuestLog_Pause::SaveCheckBoxState()
{
    UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
    if (GameInstance)
    {
        GameInstance->bIsCheckBox1Checked = CheckBox_1->IsChecked();
        GameInstance->bIsCheckBox2Checked = CheckBox_2->IsChecked();
        GameInstance->bIsCheckBox3Checked = CheckBox_3->IsChecked();
        GameInstance->bIsCheckBox4Checked = CheckBox_4->IsChecked();
        GameInstance->bIsCheckBox5Checked = CheckBox_5->IsChecked();
        GameInstance->bIsCheckBox6Checked = CheckBox_6->IsChecked();
        GameInstance->bIsCheckBox7Checked = CheckBox_7->IsChecked();
    }
}

//Loads the current state of the checkboxes to the ArchiveGameInstance 
void UW_QuestLog_Pause::LoadCheckBoxState()
{
    UArchiveGameInstance* GameInstance = Cast<UArchiveGameInstance>(GetGameInstance());
    if (GameInstance)
    {
        if (CheckBox_1 && CheckBox_2 && CheckBox_3 && CheckBox_4 && CheckBox_5 && CheckBox_6 && CheckBox_7)
        {
            CheckBox_1->SetIsChecked(GameInstance->bIsCheckBox1Checked);  
            CheckBox_2->SetIsChecked(GameInstance->bIsCheckBox2Checked);  
            CheckBox_3->SetIsChecked(GameInstance->bIsCheckBox3Checked);  
            CheckBox_4->SetIsChecked(GameInstance->bIsCheckBox4Checked); 
            CheckBox_5->SetIsChecked(GameInstance->bIsCheckBox5Checked); 
            CheckBox_6->SetIsChecked(GameInstance->bIsCheckBox6Checked); 
            CheckBox_7->SetIsChecked(GameInstance->bIsCheckBox7Checked); 
        }
    }
}
