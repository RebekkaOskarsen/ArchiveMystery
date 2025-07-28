// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/SavingSystem/W_QuestLog_Pause.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_QuestLog_Pause() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UW_QuestLog_Pause();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UW_QuestLog_Pause_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UW_QuestLog_Pause Function LoadCheckBoxState
struct Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_QuestLog_Pause, nullptr, "LoadCheckBoxState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_QuestLog_Pause::execLoadCheckBoxState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadCheckBoxState();
	P_NATIVE_END;
}
// End Class UW_QuestLog_Pause Function LoadCheckBoxState

// Begin Class UW_QuestLog_Pause Function SaveCheckBoxState
struct Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Log" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_QuestLog_Pause, nullptr, "SaveCheckBoxState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_QuestLog_Pause::execSaveCheckBoxState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCheckBoxState();
	P_NATIVE_END;
}
// End Class UW_QuestLog_Pause Function SaveCheckBoxState

// Begin Class UW_QuestLog_Pause
void UW_QuestLog_Pause::StaticRegisterNativesUW_QuestLog_Pause()
{
	UClass* Class = UW_QuestLog_Pause::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadCheckBoxState", &UW_QuestLog_Pause::execLoadCheckBoxState },
		{ "SaveCheckBoxState", &UW_QuestLog_Pause::execSaveCheckBoxState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_QuestLog_Pause);
UClass* Z_Construct_UClass_UW_QuestLog_Pause_NoRegister()
{
	return UW_QuestLog_Pause::StaticClass();
}
struct Z_Construct_UClass_UW_QuestLog_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SavingSystem/W_QuestLog_Pause.h" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_1_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Binds the checkboxes in the UI \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binds the checkboxes in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_4_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_5_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_6_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_7_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_8_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_9_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_10_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_11_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SavingSystem/W_QuestLog_Pause.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_5;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_6;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_7;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_8;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_9;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_10;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_11;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_QuestLog_Pause_LoadCheckBoxState, "LoadCheckBoxState" }, // 2529393876
		{ &Z_Construct_UFunction_UW_QuestLog_Pause_SaveCheckBoxState, "SaveCheckBoxState" }, // 3986405486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_QuestLog_Pause>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_1 = { "CheckBox_1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_1), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_1_MetaData), NewProp_CheckBox_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_2 = { "CheckBox_2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_2), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_2_MetaData), NewProp_CheckBox_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_3 = { "CheckBox_3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_3), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_3_MetaData), NewProp_CheckBox_3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_4 = { "CheckBox_4", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_4), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_4_MetaData), NewProp_CheckBox_4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_5 = { "CheckBox_5", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_5), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_5_MetaData), NewProp_CheckBox_5_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_6 = { "CheckBox_6", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_6), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_6_MetaData), NewProp_CheckBox_6_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_7 = { "CheckBox_7", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_7), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_7_MetaData), NewProp_CheckBox_7_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_8 = { "CheckBox_8", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_8), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_8_MetaData), NewProp_CheckBox_8_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_9 = { "CheckBox_9", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_9), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_9_MetaData), NewProp_CheckBox_9_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_10 = { "CheckBox_10", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_10), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_10_MetaData), NewProp_CheckBox_10_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_11 = { "CheckBox_11", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_QuestLog_Pause, CheckBox_11), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_11_MetaData), NewProp_CheckBox_11_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_QuestLog_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_QuestLog_Pause_Statics::NewProp_CheckBox_11,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_QuestLog_Pause_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_QuestLog_Pause_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_QuestLog_Pause_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_QuestLog_Pause_Statics::ClassParams = {
	&UW_QuestLog_Pause::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_QuestLog_Pause_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_QuestLog_Pause_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_QuestLog_Pause_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_QuestLog_Pause_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_QuestLog_Pause()
{
	if (!Z_Registration_Info_UClass_UW_QuestLog_Pause.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_QuestLog_Pause.OuterSingleton, Z_Construct_UClass_UW_QuestLog_Pause_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_QuestLog_Pause.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UW_QuestLog_Pause>()
{
	return UW_QuestLog_Pause::StaticClass();
}
UW_QuestLog_Pause::UW_QuestLog_Pause(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_QuestLog_Pause);
UW_QuestLog_Pause::~UW_QuestLog_Pause() {}
// End Class UW_QuestLog_Pause

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_W_QuestLog_Pause_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_QuestLog_Pause, UW_QuestLog_Pause::StaticClass, TEXT("UW_QuestLog_Pause"), &Z_Registration_Info_UClass_UW_QuestLog_Pause, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_QuestLog_Pause), 1268741501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_W_QuestLog_Pause_h_3292750705(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_W_QuestLog_Pause_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_W_QuestLog_Pause_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
