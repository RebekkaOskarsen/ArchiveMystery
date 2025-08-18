// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldGameMode() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldGameMode();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AMoldGameMode
void AMoldGameMode::StaticRegisterNativesAMoldGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoldGameMode);
UClass* Z_Construct_UClass_AMoldGameMode_NoRegister()
{
	return AMoldGameMode::StaticClass();
}
struct Z_Construct_UClass_AMoldGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Mold/MoldGameMode.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoldGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoldGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoldGameMode_Statics::ClassParams = {
	&AMoldGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoldGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoldGameMode()
{
	if (!Z_Registration_Info_UClass_AMoldGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoldGameMode.OuterSingleton, Z_Construct_UClass_AMoldGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoldGameMode.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMoldGameMode>()
{
	return AMoldGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoldGameMode);
AMoldGameMode::~AMoldGameMode() {}
// End Class AMoldGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoldGameMode, AMoldGameMode::StaticClass, TEXT("AMoldGameMode"), &Z_Registration_Info_UClass_AMoldGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoldGameMode), 2403351701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldGameMode_h_2925579898(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
