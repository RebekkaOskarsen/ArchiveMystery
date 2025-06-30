// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/ArchiveGhost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveGhost() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchiveGhost();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchiveGhost_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AArchiveGhost
void AArchiveGhost::StaticRegisterNativesAArchiveGhost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchiveGhost);
UClass* Z_Construct_UClass_AArchiveGhost_NoRegister()
{
	return AArchiveGhost::StaticClass();
}
struct Z_Construct_UClass_AArchiveGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/ArchiveGhost.h" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseDuration_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PauseDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchiveGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoints_MetaData), NewProp_TargetPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_PauseDuration = { "PauseDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, PauseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseDuration_MetaData), NewProp_PauseDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchiveGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_PauseDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArchiveGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchiveGhost_Statics::ClassParams = {
	&AArchiveGhost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArchiveGhost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchiveGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchiveGhost()
{
	if (!Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton, Z_Construct_UClass_AArchiveGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AArchiveGhost>()
{
	return AArchiveGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchiveGhost);
AArchiveGhost::~AArchiveGhost() {}
// End Class AArchiveGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchiveGhost, AArchiveGhost::StaticClass, TEXT("AArchiveGhost"), &Z_Registration_Info_UClass_AArchiveGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchiveGhost), 2114927217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_1839181715(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
