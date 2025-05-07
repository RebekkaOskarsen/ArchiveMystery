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

// Begin Class UArchiveGameInstance
void UArchiveGameInstance::StaticRegisterNativesUArchiveGameInstance()
{
	UClass* Class = UArchiveGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadQuestLogData", &UArchiveGameInstance::execLoadQuestLogData },
		{ "SaveQuestLogData", &UArchiveGameInstance::execSaveQuestLogData },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLogData_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxPlacedBeforeMoldGame_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckBox1Checked_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarker1_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGarageKeycard_MetaData[] = {
		{ "Category", "Keycards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Door\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasArchiveKeycard_MetaData[] = {
		{ "Category", "Keycards" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEquipmentKeycard_MetaData[] = {
		{ "Category", "Keycards" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
#endif // WITH_METADATA
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
	static void NewProp_bHasGarageKeycard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGarageKeycard;
	static void NewProp_bHasArchiveKeycard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasArchiveKeycard;
	static void NewProp_bHasEquipmentKeycard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEquipmentKeycard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchiveGameInstance_LoadQuestLogData, "LoadQuestLogData" }, // 427427999
		{ &Z_Construct_UFunction_UArchiveGameInstance_SaveQuestLogData, "SaveQuestLogData" }, // 539202874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasGarageKeycard_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasGarageKeycard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasGarageKeycard = { "bHasGarageKeycard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasGarageKeycard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGarageKeycard_MetaData), NewProp_bHasGarageKeycard_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasArchiveKeycard_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasArchiveKeycard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasArchiveKeycard = { "bHasArchiveKeycard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasArchiveKeycard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasArchiveKeycard_MetaData), NewProp_bHasArchiveKeycard_MetaData) };
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasEquipmentKeycard_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bHasEquipmentKeycard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasEquipmentKeycard = { "bHasEquipmentKeycard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasEquipmentKeycard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEquipmentKeycard_MetaData), NewProp_bHasEquipmentKeycard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_QuestLogData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bMoldGameComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlacedBoxTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox1Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox2Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox3Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox4Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox5Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox6Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCheckBox7Checked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsCustomized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bIsMarker6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasGarageKeycard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasArchiveKeycard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bHasEquipmentKeycard,
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
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchiveGameInstance, UArchiveGameInstance::StaticClass, TEXT("UArchiveGameInstance"), &Z_Registration_Info_UClass_UArchiveGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchiveGameInstance), 318503946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_1949913809(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
