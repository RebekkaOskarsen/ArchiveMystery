// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MinigameExitWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameExitWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMinigameExitWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMinigameExitWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UMinigameExitWidget Function RefreshScores
struct Z_Construct_UFunction_UMinigameExitWidget_RefreshScores_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameExitWidget_RefreshScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameExitWidget, nullptr, "RefreshScores", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameExitWidget_RefreshScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameExitWidget_RefreshScores_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMinigameExitWidget_RefreshScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameExitWidget_RefreshScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameExitWidget::execRefreshScores)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshScores();
	P_NATIVE_END;
}
// End Class UMinigameExitWidget Function RefreshScores

// Begin Class UMinigameExitWidget
void UMinigameExitWidget::StaticRegisterNativesUMinigameExitWidget()
{
	UClass* Class = UMinigameExitWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RefreshScores", &UMinigameExitWidget::execRefreshScores },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinigameExitWidget);
UClass* Z_Construct_UClass_UMinigameExitWidget_NoRegister()
{
	return UMinigameExitWidget::StaticClass();
}
struct Z_Construct_UClass_UMinigameExitWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mold/MinigameExitWidget.h" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText0_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bind these to your 5 text blocks in WBP_MinigameExit\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind these to your 5 text blocks in WBP_MinigameExit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText4_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewScoreButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MinigameExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewScoreButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameExitWidget_RefreshScores, "RefreshScores" }, // 1361440894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameExitWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText0 = { "ScoreText0", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ScoreText0), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText0_MetaData), NewProp_ScoreText0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText1 = { "ScoreText1", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ScoreText1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText1_MetaData), NewProp_ScoreText1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText2 = { "ScoreText2", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ScoreText2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText2_MetaData), NewProp_ScoreText2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText3 = { "ScoreText3", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ScoreText3), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText3_MetaData), NewProp_ScoreText3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText4 = { "ScoreText4", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ScoreText4), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText4_MetaData), NewProp_ScoreText4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ViewScoreButton = { "ViewScoreButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameExitWidget, ViewScoreButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewScoreButton_MetaData), NewProp_ViewScoreButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameExitWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ScoreText4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameExitWidget_Statics::NewProp_ViewScoreButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameExitWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameExitWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameExitWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameExitWidget_Statics::ClassParams = {
	&UMinigameExitWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinigameExitWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameExitWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameExitWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameExitWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameExitWidget()
{
	if (!Z_Registration_Info_UClass_UMinigameExitWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameExitWidget.OuterSingleton, Z_Construct_UClass_UMinigameExitWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameExitWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UMinigameExitWidget>()
{
	return UMinigameExitWidget::StaticClass();
}
UMinigameExitWidget::UMinigameExitWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameExitWidget);
UMinigameExitWidget::~UMinigameExitWidget() {}
// End Class UMinigameExitWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MinigameExitWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameExitWidget, UMinigameExitWidget::StaticClass, TEXT("UMinigameExitWidget"), &Z_Registration_Info_UClass_UMinigameExitWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameExitWidget), 2742731233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MinigameExitWidget_h_1019056227(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MinigameExitWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MinigameExitWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
