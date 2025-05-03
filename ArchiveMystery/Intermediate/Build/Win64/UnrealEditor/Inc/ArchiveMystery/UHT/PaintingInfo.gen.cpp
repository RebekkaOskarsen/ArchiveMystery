// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/PaintingInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintingInfo() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UScriptStruct* Z_Construct_UScriptStruct_FPaintingInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin ScriptStruct FPaintingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintingInfo;
class UScriptStruct* FPaintingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintingInfo, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("PaintingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PaintingInfo.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UScriptStruct* StaticStruct<FPaintingInfo>()
{
	return FPaintingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaintingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struktur som representerer en maler (TriggerBox og Widget)\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struktur som representerer en maler (TriggerBox og Widget)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintingTriggerBox_MetaData[] = {
		{ "Category", "Painting" },
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintingWidgetClass_MetaData[] = {
		{ "Category", "Painting" },
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintingInstructionWidgetClass_MetaData[] = {
		{ "Category", "Painting" },
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintingInstructionWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintingWidgetInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Individual widget per painting\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PaintingInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual widget per painting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintingTriggerBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PaintingWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PaintingInstructionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintingInstructionWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintingWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingTriggerBox = { "PaintingTriggerBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintingInfo, PaintingTriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintingTriggerBox_MetaData), NewProp_PaintingTriggerBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingWidgetClass = { "PaintingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintingInfo, PaintingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintingWidgetClass_MetaData), NewProp_PaintingWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingInstructionWidgetClass = { "PaintingInstructionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintingInfo, PaintingInstructionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintingInstructionWidgetClass_MetaData), NewProp_PaintingInstructionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingInstructionWidgetInstance = { "PaintingInstructionWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintingInfo, PaintingInstructionWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintingInstructionWidgetInstance_MetaData), NewProp_PaintingInstructionWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingWidgetInstance = { "PaintingWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintingInfo, PaintingWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintingWidgetInstance_MetaData), NewProp_PaintingWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingTriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingInstructionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingInstructionWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewProp_PaintingWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	&NewStructOps,
	"PaintingInfo",
	Z_Construct_UScriptStruct_FPaintingInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintingInfo_Statics::PropPointers),
	sizeof(FPaintingInfo),
	alignof(FPaintingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaintingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaintingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PaintingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintingInfo.InnerSingleton, Z_Construct_UScriptStruct_FPaintingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaintingInfo.InnerSingleton;
}
// End ScriptStruct FPaintingInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_PaintingInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaintingInfo::StaticStruct, Z_Construct_UScriptStruct_FPaintingInfo_Statics::NewStructOps, TEXT("PaintingInfo"), &Z_Registration_Info_UScriptStruct_PaintingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintingInfo), 2745162639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_PaintingInfo_h_1835602769(TEXT("/Script/ArchiveMystery"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_PaintingInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_PaintingInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
