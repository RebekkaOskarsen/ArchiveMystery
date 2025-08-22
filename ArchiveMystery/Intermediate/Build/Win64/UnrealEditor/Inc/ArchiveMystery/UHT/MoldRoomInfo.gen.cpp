// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/HUD/MoldRoomInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldRoomInfo() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMoldRoomInfo();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMoldRoomInfo_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UMoldRoomInfo Function NextPage
struct Z_Construct_UFunction_UMoldRoomInfo_NextPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoldRoomInfo_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoldRoomInfo, nullptr, "NextPage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoldRoomInfo_NextPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoldRoomInfo_NextPage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMoldRoomInfo_NextPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoldRoomInfo_NextPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoldRoomInfo::execNextPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextPage();
	P_NATIVE_END;
}
// End Class UMoldRoomInfo Function NextPage

// Begin Class UMoldRoomInfo Function PrevPage
struct Z_Construct_UFunction_UMoldRoomInfo_PrevPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoldRoomInfo_PrevPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoldRoomInfo, nullptr, "PrevPage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoldRoomInfo_PrevPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoldRoomInfo_PrevPage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMoldRoomInfo_PrevPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoldRoomInfo_PrevPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoldRoomInfo::execPrevPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrevPage();
	P_NATIVE_END;
}
// End Class UMoldRoomInfo Function PrevPage

// Begin Class UMoldRoomInfo
void UMoldRoomInfo::StaticRegisterNativesUMoldRoomInfo()
{
	UClass* Class = UMoldRoomInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextPage", &UMoldRoomInfo::execNextPage },
		{ "PrevPage", &UMoldRoomInfo::execPrevPage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoldRoomInfo);
UClass* Z_Construct_UClass_UMoldRoomInfo_NoRegister()
{
	return UMoldRoomInfo::StaticClass();
}
struct Z_Construct_UClass_UMoldRoomInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/MoldRoomInfo.h" },
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcher_404_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Valgfritt \xef\xbf\xbd bind disse hvis du har piltast-knapper i widgeten\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valgfritt \xef\xbf\xbd bind disse hvis du har piltast-knapper i widgeten" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MoldRoomInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcher_404;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoldRoomInfo_NextPage, "NextPage" }, // 1873905320
		{ &Z_Construct_UFunction_UMoldRoomInfo_PrevPage, "PrevPage" }, // 3939608672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoldRoomInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_WidgetSwitcher_404 = { "WidgetSwitcher_404", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoldRoomInfo, WidgetSwitcher_404), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSwitcher_404_MetaData), NewProp_WidgetSwitcher_404_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoldRoomInfo, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoldRoomInfo, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevButton_MetaData), NewProp_PrevButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_PageText = { "PageText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoldRoomInfo, PageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageText_MetaData), NewProp_PageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoldRoomInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_WidgetSwitcher_404,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_PrevButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoldRoomInfo_Statics::NewProp_PageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoldRoomInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoldRoomInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoldRoomInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoldRoomInfo_Statics::ClassParams = {
	&UMoldRoomInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoldRoomInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoldRoomInfo_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoldRoomInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoldRoomInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoldRoomInfo()
{
	if (!Z_Registration_Info_UClass_UMoldRoomInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoldRoomInfo.OuterSingleton, Z_Construct_UClass_UMoldRoomInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoldRoomInfo.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UMoldRoomInfo>()
{
	return UMoldRoomInfo::StaticClass();
}
UMoldRoomInfo::UMoldRoomInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoldRoomInfo);
UMoldRoomInfo::~UMoldRoomInfo() {}
// End Class UMoldRoomInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MoldRoomInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoldRoomInfo, UMoldRoomInfo::StaticClass, TEXT("UMoldRoomInfo"), &Z_Registration_Info_UClass_UMoldRoomInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoldRoomInfo), 871644658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MoldRoomInfo_h_2579735445(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MoldRoomInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MoldRoomInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
