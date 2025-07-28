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

// Begin Class UArchivistAnimInstance Function ResetIdleBreak
struct Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Idle" },
		{ "ModuleRelativePath", "Public/Character/ArchivistAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchivistAnimInstance, nullptr, "ResetIdleBreak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchivistAnimInstance::execResetIdleBreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetIdleBreak();
	P_NATIVE_END;
}
// End Class UArchivistAnimInstance Function ResetIdleBreak

// Begin Class UArchivistAnimInstance
void UArchivistAnimInstance::StaticRegisterNativesUArchivistAnimInstance()
{
	UClass* Class = UArchivistAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetIdleBreak", &UArchivistAnimInstance::execResetIdleBreak },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/ArchivistAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/ArchivistAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoldingBox_MetaData[] = {
		{ "Category", "ArchivistAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation from idle to holding\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchivistAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation from idle to holding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayIdleBreak_MetaData[] = {
		{ "Category", "Idle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation from idle to see watch\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchivistAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation from idle to see watch" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsHoldingBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoldingBox;
	static void NewProp_bPlayIdleBreak_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayIdleBreak;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchivistAnimInstance_ResetIdleBreak, "ResetIdleBreak" }, // 4155972715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivistAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bIsHoldingBox_SetBit(void* Obj)
{
	((UArchivistAnimInstance*)Obj)->bIsHoldingBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bIsHoldingBox = { "bIsHoldingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchivistAnimInstance), &Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bIsHoldingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoldingBox_MetaData), NewProp_bIsHoldingBox_MetaData) };
void Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bPlayIdleBreak_SetBit(void* Obj)
{
	((UArchivistAnimInstance*)Obj)->bPlayIdleBreak = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bPlayIdleBreak = { "bPlayIdleBreak", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchivistAnimInstance), &Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bPlayIdleBreak_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayIdleBreak_MetaData), NewProp_bPlayIdleBreak_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchivistAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bIsHoldingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivistAnimInstance_Statics::NewProp_bPlayIdleBreak,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivistAnimInstance_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UArchivistAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchivistAnimInstance_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchivistAnimInstance, UArchivistAnimInstance::StaticClass, TEXT("UArchivistAnimInstance"), &Z_Registration_Info_UClass_UArchivistAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchivistAnimInstance), 4266637134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_3399547062(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchivistAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
