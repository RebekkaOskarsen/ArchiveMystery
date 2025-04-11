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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UArchiveGameInstance
void UArchiveGameInstance::StaticRegisterNativesUArchiveGameInstance()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxPlacedBeforeMoldGame_MetaData[] = {
		{ "Category", "ArchiveGameInstance" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShreddedGameComplete_MetaData[] = {
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
#endif // WITH_METADATA
	static void NewProp_bBoxPlacedBeforeMoldGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxPlacedBeforeMoldGame;
	static void NewProp_bShreddedGameComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShreddedGameComplete;
	static void NewProp_bBoxWasPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxWasPlaced;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPlacedLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPlacedRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacedBoxTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchiveGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
void Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced_SetBit(void* Obj)
{
	((UArchiveGameInstance*)Obj)->bBoxWasPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced = { "bBoxWasPlaced", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchiveGameInstance), &Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoxWasPlaced_MetaData), NewProp_bBoxWasPlaced_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedLocation = { "BoxPlacedLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, BoxPlacedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPlacedLocation_MetaData), NewProp_BoxPlacedLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedRotation = { "BoxPlacedRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, BoxPlacedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPlacedRotation_MetaData), NewProp_BoxPlacedRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlacedBoxTransform = { "PlacedBoxTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchiveGameInstance, PlacedBoxTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedBoxTransform_MetaData), NewProp_PlacedBoxTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxPlacedBeforeMoldGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bShreddedGameComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_bBoxWasPlaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_BoxPlacedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchiveGameInstance_Statics::NewProp_PlacedBoxTransform,
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
	nullptr,
	Z_Construct_UClass_UArchiveGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
UArchiveGameInstance::UArchiveGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchiveGameInstance);
UArchiveGameInstance::~UArchiveGameInstance() {}
// End Class UArchiveGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchiveGameInstance, UArchiveGameInstance::StaticClass, TEXT("UArchiveGameInstance"), &Z_Registration_Info_UClass_UArchiveGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchiveGameInstance), 2401158156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_800670996(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
