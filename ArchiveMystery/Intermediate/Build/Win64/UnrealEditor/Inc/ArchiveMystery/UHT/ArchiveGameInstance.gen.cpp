// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/ArchiveGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveGameInstance() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchiveGameInstance();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchiveGameInstance_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UArchiveGameInstance Function LoadQuestLogData
struct Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveGameInstance, nullptr, "LoadQuestLogData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchiveGameInstance::execLoadQuestLogData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadQuestLogData();
	P_NATIVE_END;
}
// End Class UArchiveGameInstance Function LoadQuestLogData

// Begin Class UArchiveGameInstance Function ResetAllProgress
struct Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveGameInstance, nullptr, "ResetAllProgress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchiveGameInstance::execResetAllProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllProgress();
	P_NATIVE_END;
}
// End Class UArchiveGameInstance Function ResetAllProgress

// Begin Class UArchiveGameInstance Function SaveQuestLogData
struct Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveGameInstance, nullptr, "SaveQuestLogData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchiveGameInstance::execSaveQuestLogData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveQuestLogData();
	P_NATIVE_END;
}
// End Class UArchiveGameInstance Function SaveQuestLogData

// Begin Class UArchiveGameInstance Function SetLastLevelName
struct Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics
{
	struct ArchiveGameInstance_eventSetLastLevelName_Parms
	{
		FString LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGameInstance_eventSetLastLevelName_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveGameInstance, nullptr, "SetLastLevelName", nullptr, nullptr, Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::ArchiveGameInstance_eventSetLastLevelName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::ArchiveGameInstance_eventSetLastLevelName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchiveGameInstance::execSetLastLevelName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLastLevelName(Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class UArchiveGameInstance Function SetLastLevelName

// Begin Class UArchiveGameInstance Function SetSavedPlayerLocation
struct Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics
{
	struct ArchiveGameInstance_eventSetSavedPlayerLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGameInstance_eventSetSavedPlayerLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchiveGameInstance, nullptr, "SetSavedPlayerLocation", nullptr, nullptr, Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::ArchiveGameInstance_eventSetSavedPlayerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::ArchiveGameInstance_eventSetSavedPlayerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchiveGameInstance::execSetSavedPlayerLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSavedPlayerLocation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UArchiveGameInstance Function SetSavedPlayerLocation

// Begin Class UArchiveGameInstance
void UArchiveGameInstance::StaticRegisterNativesUArchiveGameInstance()
{
	UClass* Class = UArchiveGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadQuestLogData", &UArchiveGameInstance::execLoadQuestLogData },
		{ "ResetAllProgress", &UArchiveGameInstance::execResetAllProgress },
		{ "SaveQuestLogData", &UArchiveGameInstance::execSaveQuestLogData },
		{ "SetLastLevelName", &UArchiveGameInstance::execSetLastLevelName },
		{ "SetSavedPlayerLocation", &UArchiveGameInstance::execSetSavedPlayerLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchiveGameInstance);
UClass* Z_Construct_UClass_UArchiveGameInstance_NoRegister()
{
	return UArchiveGameInstance::StaticClass();
}
struct Z_Construct_UClass_UArchiveGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/ArchiveGameInstance.h" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLevelName_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLogData_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxPlacedBeforeMoldGame_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Saving the order of the tasks in the game\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saving the order of the tasks in the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShreddedGameComplete_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoldGameComplete_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxWasPlaced_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxPlacedLocation_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxPlacedRotation_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacedBoxTransform_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFoundDocument1_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Documents\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Documents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFoundDocument2_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox1Checked_MetaData[] = {
		{ "Category", "Quest Log" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkboxes in the quest system \n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkboxes in the quest system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox2Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox3Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox4Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox5Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox6Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox7Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomized_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor1_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Saving of skin color\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saving of skin color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor2_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor3_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor4_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor5_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor6_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor7_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor8_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor9_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor10_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor11_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor12_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor13_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedSkinColor14_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor1_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Watch\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Watch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor2_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor3_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor4_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor5_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor6_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor7_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor8_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor9_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizedWatchColor10_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker1_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Markers \n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Markers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker2_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker3_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker4_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker5_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker6_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker7_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker8_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker9_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker10_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker11_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker12_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasKeycard_MetaData[] = {
		{ "Category", "Keycards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Keycards \n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keycards" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedSelect_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lagrede SQL-inputverdier\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lagrede SQL-inputverdier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedFrom_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedWhere_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedLike_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAnd_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIntroCutscenePlayed_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Intro sequence\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intro sequence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTutorialPlayed_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Saving the name of the player in the database\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saving the name of the player in the database" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastLevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestLogData;
	static void NewProp_bBoxPlacedBeforeMoldGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxPlacedBeforeMoldGame;
	static void NewProp_bShreddedGameComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShreddedGameComplete;
	static void NewProp_bMoldGameComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoldGameComplete;
	static void NewProp_bBoxWasPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxWasPlaced;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPlacedLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPlacedRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacedBoxTransform;
	static void NewProp_bHasFoundDocument1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFoundDocument1;
	static void NewProp_bHasFoundDocument2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFoundDocument2;
	static void NewProp_bIsCheckBox1Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox1Checked;
	static void NewProp_bIsCheckBox2Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox2Checked;
	static void NewProp_bIsCheckBox3Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox3Checked;
	static void NewProp_bIsCheckBox4Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox4Checked;
	static void NewProp_bIsCheckBox5Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox5Checked;
	static void NewProp_bIsCheckBox6Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox6Checked;
	static void NewProp_bIsCheckBox7Checked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckBox7Checked;
	static void NewProp_bIsCustomized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomized;
	static void NewProp_bIsCustomizedSkinColor1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor1;
	static void NewProp_bIsCustomizedSkinColor2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor2;
	static void NewProp_bIsCustomizedSkinColor3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor3;
	static void NewProp_bIsCustomizedSkinColor4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor4;
	static void NewProp_bIsCustomizedSkinColor5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor5;
	static void NewProp_bIsCustomizedSkinColor6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor6;
	static void NewProp_bIsCustomizedSkinColor7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor7;
	static void NewProp_bIsCustomizedSkinColor8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor8;
	static void NewProp_bIsCustomizedSkinColor9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor9;
	static void NewProp_bIsCustomizedSkinColor10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor10;
	static void NewProp_bIsCustomizedSkinColor11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor11;
	static void NewProp_bIsCustomizedSkinColor12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor12;
	static void NewProp_bIsCustomizedSkinColor13_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor13;
	static void NewProp_bIsCustomizedSkinColor14_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedSkinColor14;
	static void NewProp_bIsCustomizedWatchColor1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor1;
	static void NewProp_bIsCustomizedWatchColor2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor2;
	static void NewProp_bIsCustomizedWatchColor3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor3;
	static void NewProp_bIsCustomizedWatchColor4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor4;
	static void NewProp_bIsCustomizedWatchColor5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor5;
	static void NewProp_bIsCustomizedWatchColor6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor6;
	static void NewProp_bIsCustomizedWatchColor7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor7;
	static void NewProp_bIsCustomizedWatchColor8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor8;
	static void NewProp_bIsCustomizedWatchColor9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor9;
	static void NewProp_bIsCustomizedWatchColor10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizedWatchColor10;
	static void NewProp_bIsMarker1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker1;
	static void NewProp_bIsMarker2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker2;
	static void NewProp_bIsMarker3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker3;
	static void NewProp_bIsMarker4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker4;
	static void NewProp_bIsMarker5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker5;
	static void NewProp_bIsMarker6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker6;
	static void NewProp_bIsMarker7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker7;
	static void NewProp_bIsMarker8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker8;
	static void NewProp_bIsMarker9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker9;
	static void NewProp_bIsMarker10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker10;
	static void NewProp_bIsMarker11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker11;
	static void NewProp_bIsMarker12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarker12;
	static void NewProp_bHasKeycard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasKeycard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedSelect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedFrom;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedWhere;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedLike;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedAnd;
	static void NewProp_bIntroCutscenePlayed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntroCutscenePlayed;
	static void NewProp_bTutorialPlayed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTutorialPlayed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData, "LoadQuestLogData" }, // 427427999
		{ &Z_Construct_UFunction_UArchiveGameInstance_ResetAllProgress, "ResetAllProgress" }, // 3746417979
		{ &Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData, "SaveQuestLogData" }, // 539202874
		{ &Z_Construct_UFunction_UArchiveGameInstance_SetLastLevelName, "SetLastLevelName" }, // 218968815
		{ &Z_Construct_UFunction_UArchiveGameInstance_SetSavedPlayerLocation, "SetSavedPlayerLocation" }, // 1038586729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_LastLevelName = { "LastLevelName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, LastLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLevelName_MetaData), NewProp_LastLevelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_QuestLogData = { "QuestLogData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, QuestLogData), Z_Construct_UClass_UQuestLogData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestLogData_MetaData), NewProp_QuestLogData_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bBoxPlacedBeforeMoldGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame = { "bBoxPlacedBeforeMoldGame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoxPlacedBeforeMoldGame_MetaData), NewProp_bBoxPlacedBeforeMoldGame_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bShreddedGameComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete = { "bShreddedGameComplete", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShreddedGameComplete_MetaData), NewProp_bShreddedGameComplete_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bMoldGameComplete_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bMoldGameComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bMoldGameComplete = { "bMoldGameComplete", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bMoldGameComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoldGameComplete_MetaData), NewProp_bMoldGameComplete_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bBoxWasPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced = { "bBoxWasPlaced", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoxWasPlaced_MetaData), NewProp_bBoxWasPlaced_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedLocation = { "BoxPlacedLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, BoxPlacedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPlacedLocation_MetaData), NewProp_BoxPlacedLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedRotation = { "BoxPlacedRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, BoxPlacedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPlacedRotation_MetaData), NewProp_BoxPlacedRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlacedBoxTransform = { "PlacedBoxTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, PlacedBoxTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedBoxTransform_MetaData), NewProp_PlacedBoxTransform_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument1_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasFoundDocument1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument1 = { "bHasFoundDocument1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFoundDocument1_MetaData), NewProp_bHasFoundDocument1_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument2_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasFoundDocument2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument2 = { "bHasFoundDocument2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFoundDocument2_MetaData), NewProp_bHasFoundDocument2_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox1Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox1Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox1Checked = { "bIsCheckBox1Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox1Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox1Checked_MetaData), NewProp_bIsCheckBox1Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox2Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox2Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox2Checked = { "bIsCheckBox2Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox2Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox2Checked_MetaData), NewProp_bIsCheckBox2Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox3Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox3Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox3Checked = { "bIsCheckBox3Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox3Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox3Checked_MetaData), NewProp_bIsCheckBox3Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox4Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox4Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox4Checked = { "bIsCheckBox4Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox4Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox4Checked_MetaData), NewProp_bIsCheckBox4Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox5Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox5Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox5Checked = { "bIsCheckBox5Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox5Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox5Checked_MetaData), NewProp_bIsCheckBox5Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox6Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox6Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox6Checked = { "bIsCheckBox6Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox6Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox6Checked_MetaData), NewProp_bIsCheckBox6Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox7Checked_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCheckBox7Checked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox7Checked = { "bIsCheckBox7Checked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox7Checked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckBox7Checked_MetaData), NewProp_bIsCheckBox7Checked_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomized_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomized = { "bIsCustomized", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomized_MetaData), NewProp_bIsCustomized_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor1_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor1 = { "bIsCustomizedSkinColor1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor1_MetaData), NewProp_bIsCustomizedSkinColor1_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor2_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor2 = { "bIsCustomizedSkinColor2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor2_MetaData), NewProp_bIsCustomizedSkinColor2_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor3_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor3 = { "bIsCustomizedSkinColor3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor3_MetaData), NewProp_bIsCustomizedSkinColor3_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor4_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor4 = { "bIsCustomizedSkinColor4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor4_MetaData), NewProp_bIsCustomizedSkinColor4_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor5_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor5 = { "bIsCustomizedSkinColor5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor5_MetaData), NewProp_bIsCustomizedSkinColor5_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor6_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor6 = { "bIsCustomizedSkinColor6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor6_MetaData), NewProp_bIsCustomizedSkinColor6_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor7_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor7 = { "bIsCustomizedSkinColor7", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor7_MetaData), NewProp_bIsCustomizedSkinColor7_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor8_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor8 = { "bIsCustomizedSkinColor8", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor8_MetaData), NewProp_bIsCustomizedSkinColor8_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor9_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor9 = { "bIsCustomizedSkinColor9", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor9_MetaData), NewProp_bIsCustomizedSkinColor9_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor10_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor10 = { "bIsCustomizedSkinColor10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor10_MetaData), NewProp_bIsCustomizedSkinColor10_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor11_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor11 = { "bIsCustomizedSkinColor11", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor11_MetaData), NewProp_bIsCustomizedSkinColor11_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor12_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor12 = { "bIsCustomizedSkinColor12", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor12_MetaData), NewProp_bIsCustomizedSkinColor12_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor13_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor13 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor13 = { "bIsCustomizedSkinColor13", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor13_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor13_MetaData), NewProp_bIsCustomizedSkinColor13_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor14_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedSkinColor14 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor14 = { "bIsCustomizedSkinColor14", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor14_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedSkinColor14_MetaData), NewProp_bIsCustomizedSkinColor14_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor1_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor1 = { "bIsCustomizedWatchColor1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor1_MetaData), NewProp_bIsCustomizedWatchColor1_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor2_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor2 = { "bIsCustomizedWatchColor2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor2_MetaData), NewProp_bIsCustomizedWatchColor2_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor3_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor3 = { "bIsCustomizedWatchColor3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor3_MetaData), NewProp_bIsCustomizedWatchColor3_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor4_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor4 = { "bIsCustomizedWatchColor4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor4_MetaData), NewProp_bIsCustomizedWatchColor4_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor5_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor5 = { "bIsCustomizedWatchColor5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor5_MetaData), NewProp_bIsCustomizedWatchColor5_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor6_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor6 = { "bIsCustomizedWatchColor6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor6_MetaData), NewProp_bIsCustomizedWatchColor6_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor7_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor7 = { "bIsCustomizedWatchColor7", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor7_MetaData), NewProp_bIsCustomizedWatchColor7_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor8_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor8 = { "bIsCustomizedWatchColor8", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor8_MetaData), NewProp_bIsCustomizedWatchColor8_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor9_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor9 = { "bIsCustomizedWatchColor9", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor9_MetaData), NewProp_bIsCustomizedWatchColor9_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor10_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsCustomizedWatchColor10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor10 = { "bIsCustomizedWatchColor10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCustomizedWatchColor10_MetaData), NewProp_bIsCustomizedWatchColor10_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker1_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker1 = { "bIsMarker1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker1_MetaData), NewProp_bIsMarker1_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker2_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker2 = { "bIsMarker2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker2_MetaData), NewProp_bIsMarker2_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker3_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker3 = { "bIsMarker3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker3_MetaData), NewProp_bIsMarker3_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker4_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker4 = { "bIsMarker4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker4_MetaData), NewProp_bIsMarker4_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker5_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker5 = { "bIsMarker5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker5_MetaData), NewProp_bIsMarker5_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker6_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker6 = { "bIsMarker6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker6_MetaData), NewProp_bIsMarker6_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker7_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker7 = { "bIsMarker7", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker7_MetaData), NewProp_bIsMarker7_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker8_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker8 = { "bIsMarker8", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker8_MetaData), NewProp_bIsMarker8_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker9_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker9 = { "bIsMarker9", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker9_MetaData), NewProp_bIsMarker9_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker10_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker10 = { "bIsMarker10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker10_MetaData), NewProp_bIsMarker10_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker11_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker11 = { "bIsMarker11", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker11_MetaData), NewProp_bIsMarker11_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker12_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIsMarker12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker12 = { "bIsMarker12", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarker12_MetaData), NewProp_bIsMarker12_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasKeycard_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasKeycard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasKeycard = { "bHasKeycard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasKeycard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasKeycard_MetaData), NewProp_bHasKeycard_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedSelect = { "SavedSelect", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, SavedSelect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedSelect_MetaData), NewProp_SavedSelect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedFrom = { "SavedFrom", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, SavedFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedFrom_MetaData), NewProp_SavedFrom_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedWhere = { "SavedWhere", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, SavedWhere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedWhere_MetaData), NewProp_SavedWhere_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedLike = { "SavedLike", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, SavedLike), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedLike_MetaData), NewProp_SavedLike_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedAnd = { "SavedAnd", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, SavedAnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAnd_MetaData), NewProp_SavedAnd_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIntroCutscenePlayed_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bIntroCutscenePlayed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIntroCutscenePlayed = { "bIntroCutscenePlayed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIntroCutscenePlayed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIntroCutscenePlayed_MetaData), NewProp_bIntroCutscenePlayed_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bTutorialPlayed_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bTutorialPlayed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bTutorialPlayed = { "bTutorialPlayed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bTutorialPlayed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTutorialPlayed_MetaData), NewProp_bTutorialPlayed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_LastLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_QuestLogData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bMoldGameComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlacedBoxTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasFoundDocument2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox1Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox2Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox3Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox4Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox5Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox6Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox7Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedSkinColor14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomizedWatchColor10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasKeycard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedWhere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedLike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_SavedAnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIntroCutscenePlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bTutorialPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArchiveGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchiveGameInstance_Statics::ClassParams = {
	&UArchiveGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchiveGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchiveGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchiveGameInstance()
{
	if (!Z_Registration_Info_UClass_UArchiveGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchiveGameInstance.OuterSingleton, Z_Construct_UClass_UArchiveGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchiveGameInstance.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UArchiveGameInstance>()
{
	return UArchiveGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveGameInstance);
UArchiveGameInstance::~UArchiveGameInstance() {}
// End Class UArchiveGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchiveGameInstance, UArchiveGameInstance::StaticClass, TEXT("UArchiveGameInstance"), &Z_Registration_Info_UClass_UArchiveGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchiveGameInstance), 4038466899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_783552348(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
