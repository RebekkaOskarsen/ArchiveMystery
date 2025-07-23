// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/SavingSystem/QuestLogData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestLogData() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UQuestLogData();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister();
ARCHIVEMYSTERY_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin ScriptStruct FQuestData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UScriptStruct* StaticStruct<FQuestData>()
{
	return FQuestData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
void Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQuestData*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestData), &Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	&NewStructOps,
	"QuestData",
	Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
	sizeof(FQuestData),
	alignof(FQuestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton;
}
// End ScriptStruct FQuestData

// Begin Class UQuestLogData Function GetQuestEntries
struct Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics
{
	struct QuestLogData_eventGetQuestEntries_Parms
	{
		TArray<FQuestData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 1402686256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestLogData_eventGetQuestEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1402686256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestLogData, nullptr, "GetQuestEntries", nullptr, nullptr, Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::QuestLogData_eventGetQuestEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::QuestLogData_eventGetQuestEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestLogData_GetQuestEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestLogData_GetQuestEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestLogData::execGetQuestEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FQuestData>*)Z_Param__Result=P_THIS->GetQuestEntries();
	P_NATIVE_END;
}
// End Class UQuestLogData Function GetQuestEntries

// Begin Class UQuestLogData Function UpdateQuestStatus
struct Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics
{
	struct QuestLogData_eventUpdateQuestStatus_Parms
	{
		FString QuestName;
		bool bIsCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestLogData_eventUpdateQuestStatus_Parms, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
void Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((QuestLogData_eventUpdateQuestStatus_Parms*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestLogData_eventUpdateQuestStatus_Parms), &Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::NewProp_bIsCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestLogData, nullptr, "UpdateQuestStatus", nullptr, nullptr, Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::QuestLogData_eventUpdateQuestStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::QuestLogData_eventUpdateQuestStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestLogData::execUpdateQuestStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
	P_GET_UBOOL(Z_Param_bIsCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateQuestStatus(Z_Param_QuestName,Z_Param_bIsCompleted);
	P_NATIVE_END;
}
// End Class UQuestLogData Function UpdateQuestStatus

// Begin Class UQuestLogData
void UQuestLogData::StaticRegisterNativesUQuestLogData()
{
	UClass* Class = UQuestLogData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetQuestEntries", &UQuestLogData::execGetQuestEntries },
		{ "UpdateQuestStatus", &UQuestLogData::execUpdateQuestStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestLogData);
UClass* Z_Construct_UClass_UQuestLogData_NoRegister()
{
	return UQuestLogData::StaticClass();
}
struct Z_Construct_UClass_UQuestLogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SavingSystem/QuestLogData.h" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestEntries_MetaData[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/SavingSystem/QuestLogData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestLogData_GetQuestEntries, "GetQuestEntries" }, // 3416970921
		{ &Z_Construct_UFunction_UQuestLogData_UpdateQuestStatus, "UpdateQuestStatus" }, // 4175318234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestLogData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_Inner = { "QuestEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 1402686256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries = { "QuestEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestLogData, QuestEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestEntries_MetaData), NewProp_QuestEntries_MetaData) }; // 1402686256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestLogData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestLogData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestLogData_Statics::ClassParams = {
	&UQuestLogData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestLogData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestLogData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestLogData()
{
	if (!Z_Registration_Info_UClass_UQuestLogData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestLogData.OuterSingleton, Z_Construct_UClass_UQuestLogData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestLogData.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UQuestLogData>()
{
	return UQuestLogData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestLogData);
UQuestLogData::~UQuestLogData() {}
// End Class UQuestLogData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 1402686256U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestLogData, UQuestLogData::StaticClass, TEXT("UQuestLogData"), &Z_Registration_Info_UClass_UQuestLogData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestLogData), 1648228144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_634362389(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
