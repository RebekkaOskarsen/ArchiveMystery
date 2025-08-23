// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/ShreddedPaper/ExitWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExitWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UExitWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UExitWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UExitWidget Function OnViewScoreClicked
struct Z_Construct_UFunction_UExitWidget_OnViewScoreClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExitWidget_OnViewScoreClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExitWidget, nullptr, "OnViewScoreClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExitWidget_OnViewScoreClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExitWidget_OnViewScoreClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UExitWidget_OnViewScoreClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExitWidget_OnViewScoreClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExitWidget::execOnViewScoreClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnViewScoreClicked();
	P_NATIVE_END;
}
// End Class UExitWidget Function OnViewScoreClicked

// Begin Class UExitWidget Function RefreshScores
struct Z_Construct_UFunction_UExitWidget_RefreshScores_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scores" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExitWidget_RefreshScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExitWidget, nullptr, "RefreshScores", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExitWidget_RefreshScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExitWidget_RefreshScores_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UExitWidget_RefreshScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExitWidget_RefreshScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExitWidget::execRefreshScores)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshScores();
	P_NATIVE_END;
}
// End Class UExitWidget Function RefreshScores

// Begin Class UExitWidget Function TestPing
struct Z_Construct_UFunction_UExitWidget_TestPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExitWidget_TestPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExitWidget, nullptr, "TestPing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExitWidget_TestPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExitWidget_TestPing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UExitWidget_TestPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExitWidget_TestPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExitWidget::execTestPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestPing();
	P_NATIVE_END;
}
// End Class UExitWidget Function TestPing

// Begin Class UExitWidget
void UExitWidget::StaticRegisterNativesUExitWidget()
{
	UClass* Class = UExitWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnViewScoreClicked", &UExitWidget::execOnViewScoreClicked },
		{ "RefreshScores", &UExitWidget::execRefreshScores },
		{ "TestPing", &UExitWidget::execTestPing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExitWidget);
UClass* Z_Construct_UClass_UExitWidget_NoRegister()
{
	return UExitWidget::StaticClass();
}
struct Z_Construct_UClass_UExitWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShreddedPaper/ExitWidget.h" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewScoreButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText0_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText4_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/ExitWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewScoreButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExitWidget_OnViewScoreClicked, "OnViewScoreClicked" }, // 3661976177
		{ &Z_Construct_UFunction_UExitWidget_RefreshScores, "RefreshScores" }, // 3119081789
		{ &Z_Construct_UFunction_UExitWidget_TestPing, "TestPing" }, // 3567824880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExitWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ViewScoreButton = { "ViewScoreButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ViewScoreButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewScoreButton_MetaData), NewProp_ViewScoreButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText0 = { "ScoreText0", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ScoreText0), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText0_MetaData), NewProp_ScoreText0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText1 = { "ScoreText1", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ScoreText1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText1_MetaData), NewProp_ScoreText1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText2 = { "ScoreText2", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ScoreText2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText2_MetaData), NewProp_ScoreText2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText3 = { "ScoreText3", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ScoreText3), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText3_MetaData), NewProp_ScoreText3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText4 = { "ScoreText4", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExitWidget, ScoreText4), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText4_MetaData), NewProp_ScoreText4_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExitWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ViewScoreButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExitWidget_Statics::NewProp_ScoreText4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExitWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExitWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExitWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExitWidget_Statics::ClassParams = {
	&UExitWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExitWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExitWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExitWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UExitWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExitWidget()
{
	if (!Z_Registration_Info_UClass_UExitWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExitWidget.OuterSingleton, Z_Construct_UClass_UExitWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExitWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UExitWidget>()
{
	return UExitWidget::StaticClass();
}
UExitWidget::UExitWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExitWidget);
UExitWidget::~UExitWidget() {}
// End Class UExitWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_ExitWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExitWidget, UExitWidget::StaticClass, TEXT("UExitWidget"), &Z_Registration_Info_UClass_UExitWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExitWidget), 1299360295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_ExitWidget_h_702630720(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_ExitWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_ExitWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
