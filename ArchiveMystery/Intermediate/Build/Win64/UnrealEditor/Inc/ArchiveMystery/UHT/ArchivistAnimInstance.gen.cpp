// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/ArchivistAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivistAnimInstance() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchivistAnimInstance();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchivistAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UArchivistAnimInstance
void UArchivistAnimInstance::StaticRegisterNativesUArchivistAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchivistAnimInstance);
UClass* Z_Construct_UClass_UArchivistAnimInstance_NoRegister()
{
	return UArchivistAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UArchivistAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/ArchivistAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/ArchivistAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivistAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArchivistAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivistAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchivistAnimInstance_Statics::ClassParams = {
	&UArchivistAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivistAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchivistAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchivistAnimInstance()
{
	if (!Z_Registration_Info_UClass_UArchivistAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchivistAnimInstance.OuterSingleton, Z_Construct_UClass_UArchivistAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchivistAnimInstance.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UArchivistAnimInstance>()
{
	return UArchivistAnimInstance::StaticClass();
}
UArchivistAnimInstance::UArchivistAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivistAnimInstance);
UArchivistAnimInstance::~UArchivistAnimInstance() {}
// End Class UArchivistAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchivistAnimInstance, UArchivistAnimInstance::StaticClass, TEXT("UArchivistAnimInstance"), &Z_Registration_Info_UClass_UArchivistAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchivistAnimInstance), 2866737895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_698366759(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
