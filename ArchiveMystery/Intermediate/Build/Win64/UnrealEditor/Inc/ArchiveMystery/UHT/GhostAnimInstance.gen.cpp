// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/GhostAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostAnimInstance() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UGhostAnimInstance();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UGhostAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UGhostAnimInstance
void UGhostAnimInstance::StaticRegisterNativesUGhostAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGhostAnimInstance);
UClass* Z_Construct_UClass_UGhostAnimInstance_NoRegister()
{
	return UGhostAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGhostAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/GhostAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/GhostAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[] = {
		{ "Category", "GhostAnimation" },
		{ "ModuleRelativePath", "Public/Character/GhostAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTalking_MetaData[] = {
		{ "Category", "GhostAnimation" },
		{ "ModuleRelativePath", "Public/Character/GhostAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasWalkingBeforeTalking_MetaData[] = {
		{ "Category", "GhostAnimation" },
		{ "ModuleRelativePath", "Public/Character/GhostAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
	static void NewProp_bIsTalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
	static void NewProp_bWasWalkingBeforeTalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasWalkingBeforeTalking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsWalking_SetBit(void* Obj)
{
	((UGhostAnimInstance*)Obj)->bIsWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGhostAnimInstance), &Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalking_MetaData), NewProp_bIsWalking_MetaData) };
void Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsTalking_SetBit(void* Obj)
{
	((UGhostAnimInstance*)Obj)->bIsTalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGhostAnimInstance), &Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTalking_MetaData), NewProp_bIsTalking_MetaData) };
void Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bWasWalkingBeforeTalking_SetBit(void* Obj)
{
	((UGhostAnimInstance*)Obj)->bWasWalkingBeforeTalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bWasWalkingBeforeTalking = { "bWasWalkingBeforeTalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGhostAnimInstance), &Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bWasWalkingBeforeTalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasWalkingBeforeTalking_MetaData), NewProp_bWasWalkingBeforeTalking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bIsTalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostAnimInstance_Statics::NewProp_bWasWalkingBeforeTalking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGhostAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGhostAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGhostAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGhostAnimInstance_Statics::ClassParams = {
	&UGhostAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGhostAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGhostAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGhostAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGhostAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGhostAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGhostAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGhostAnimInstance.OuterSingleton, Z_Construct_UClass_UGhostAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGhostAnimInstance.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UGhostAnimInstance>()
{
	return UGhostAnimInstance::StaticClass();
}
UGhostAnimInstance::UGhostAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostAnimInstance);
UGhostAnimInstance::~UGhostAnimInstance() {}
// End Class UGhostAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_GhostAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGhostAnimInstance, UGhostAnimInstance::StaticClass, TEXT("UGhostAnimInstance"), &Z_Registration_Info_UClass_UGhostAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGhostAnimInstance), 370610277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_GhostAnimInstance_h_3784029731(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_GhostAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_GhostAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
