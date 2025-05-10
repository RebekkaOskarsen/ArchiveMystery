// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/NextPaper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNextPaper() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UNextPaper();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UNextPaper_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UNextPaper Function OnArrowClicked
struct Z_Construct_UFunction_UNextPaper_OnArrowClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/NextPaper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNextPaper_OnArrowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNextPaper, nullptr, "OnArrowClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNextPaper_OnArrowClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNextPaper_OnArrowClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNextPaper_OnArrowClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNextPaper_OnArrowClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNextPaper::execOnArrowClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnArrowClicked();
	P_NATIVE_END;
}
// End Class UNextPaper Function OnArrowClicked

// Begin Class UNextPaper
void UNextPaper::StaticRegisterNativesUNextPaper()
{
	UClass* Class = UNextPaper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnArrowClicked", &UNextPaper::execOnArrowClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNextPaper);
UClass* Z_Construct_UClass_UNextPaper_NoRegister()
{
	return UNextPaper::StaticClass();
}
struct Z_Construct_UClass_UNextPaper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mold/NextPaper.h" },
		{ "ModuleRelativePath", "Public/Mold/NextPaper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNextPaper_OnArrowClicked, "OnArrowClicked" }, // 1935493046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNextPaper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNextPaper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNextPaper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNextPaper_Statics::ClassParams = {
	&UNextPaper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNextPaper_Statics::Class_MetaDataParams), Z_Construct_UClass_UNextPaper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNextPaper()
{
	if (!Z_Registration_Info_UClass_UNextPaper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNextPaper.OuterSingleton, Z_Construct_UClass_UNextPaper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNextPaper.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UNextPaper>()
{
	return UNextPaper::StaticClass();
}
UNextPaper::UNextPaper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNextPaper);
UNextPaper::~UNextPaper() {}
// End Class UNextPaper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_NextPaper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNextPaper, UNextPaper::StaticClass, TEXT("UNextPaper"), &Z_Registration_Info_UClass_UNextPaper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNextPaper), 3534749308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_NextPaper_h_2304924936(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_NextPaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_NextPaper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
