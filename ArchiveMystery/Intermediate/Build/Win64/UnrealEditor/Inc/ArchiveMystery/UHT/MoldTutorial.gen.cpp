// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldTutorial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldTutorial() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMoldTutorial();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMoldTutorial_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UMoldTutorial Function StartGame
struct Z_Construct_UFunction_UMoldTutorial_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldTutorial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoldTutorial_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoldTutorial, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoldTutorial_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoldTutorial_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMoldTutorial_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoldTutorial_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoldTutorial::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class UMoldTutorial Function StartGame

// Begin Class UMoldTutorial
void UMoldTutorial::StaticRegisterNativesUMoldTutorial()
{
	UClass* Class = UMoldTutorial::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartGame", &UMoldTutorial::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoldTutorial);
UClass* Z_Construct_UClass_UMoldTutorial_NoRegister()
{
	return UMoldTutorial::StaticClass();
}
struct Z_Construct_UClass_UMoldTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mold/MoldTutorial.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldTutorial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoldTutorial_StartGame, "StartGame" }, // 300380472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoldTutorial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoldTutorial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoldTutorial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoldTutorial_Statics::ClassParams = {
	&UMoldTutorial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoldTutorial_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoldTutorial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoldTutorial()
{
	if (!Z_Registration_Info_UClass_UMoldTutorial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoldTutorial.OuterSingleton, Z_Construct_UClass_UMoldTutorial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoldTutorial.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UMoldTutorial>()
{
	return UMoldTutorial::StaticClass();
}
UMoldTutorial::UMoldTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoldTutorial);
UMoldTutorial::~UMoldTutorial() {}
// End Class UMoldTutorial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldTutorial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoldTutorial, UMoldTutorial::StaticClass, TEXT("UMoldTutorial"), &Z_Registration_Info_UClass_UMoldTutorial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoldTutorial), 645767327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldTutorial_h_2347917611(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldTutorial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldTutorial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
