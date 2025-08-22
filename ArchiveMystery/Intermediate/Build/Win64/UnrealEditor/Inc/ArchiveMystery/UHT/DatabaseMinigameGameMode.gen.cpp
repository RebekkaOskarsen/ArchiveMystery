// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/DatabaseMinigameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseMinigameGameMode() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADatabaseMinigameGameMode();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADatabaseMinigameGameMode_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class ADatabaseMinigameGameMode
void ADatabaseMinigameGameMode::StaticRegisterNativesADatabaseMinigameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatabaseMinigameGameMode);
UClass* Z_Construct_UClass_ADatabaseMinigameGameMode_NoRegister()
{
	return ADatabaseMinigameGameMode::StaticClass();
}
struct Z_Construct_UClass_ADatabaseMinigameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Database/DatabaseMinigameGameMode.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseMinigameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/DatabaseMinigameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DatabaseWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatabaseMinigameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::NewProp_DatabaseWidgetClass = { "DatabaseWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatabaseMinigameGameMode, DatabaseWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseWidgetClass_MetaData), NewProp_DatabaseWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::NewProp_DatabaseWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::ClassParams = {
	&ADatabaseMinigameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADatabaseMinigameGameMode()
{
	if (!Z_Registration_Info_UClass_ADatabaseMinigameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatabaseMinigameGameMode.OuterSingleton, Z_Construct_UClass_ADatabaseMinigameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADatabaseMinigameGameMode.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ADatabaseMinigameGameMode>()
{
	return ADatabaseMinigameGameMode::StaticClass();
}
ADatabaseMinigameGameMode::ADatabaseMinigameGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADatabaseMinigameGameMode);
ADatabaseMinigameGameMode::~ADatabaseMinigameGameMode() {}
// End Class ADatabaseMinigameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseMinigameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADatabaseMinigameGameMode, ADatabaseMinigameGameMode::StaticClass, TEXT("ADatabaseMinigameGameMode"), &Z_Registration_Info_UClass_ADatabaseMinigameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatabaseMinigameGameMode), 68300384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseMinigameGameMode_h_2823212733(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseMinigameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseMinigameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
