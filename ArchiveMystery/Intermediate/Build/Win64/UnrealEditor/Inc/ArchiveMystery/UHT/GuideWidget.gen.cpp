// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/HUD/GuideWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuideWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UGuideWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UGuideWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UGuideWidget Function OnNextClicked
struct Z_Construct_UFunction_UGuideWidget_OnNextClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuideWidget_OnNextClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuideWidget, nullptr, "OnNextClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuideWidget_OnNextClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuideWidget_OnNextClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGuideWidget_OnNextClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuideWidget_OnNextClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGuideWidget::execOnNextClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextClicked();
	P_NATIVE_END;
}
// End Class UGuideWidget Function OnNextClicked

// Begin Class UGuideWidget Function OnPrevClicked
struct Z_Construct_UFunction_UGuideWidget_OnPrevClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuideWidget_OnPrevClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuideWidget, nullptr, "OnPrevClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuideWidget_OnPrevClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuideWidget_OnPrevClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGuideWidget_OnPrevClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuideWidget_OnPrevClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGuideWidget::execOnPrevClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrevClicked();
	P_NATIVE_END;
}
// End Class UGuideWidget Function OnPrevClicked

// Begin Class UGuideWidget
void UGuideWidget::StaticRegisterNativesUGuideWidget()
{
	UClass* Class = UGuideWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnNextClicked", &UGuideWidget::execOnNextClicked },
		{ "OnPrevClicked", &UGuideWidget::execOnPrevClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGuideWidget);
UClass* Z_Construct_UClass_UGuideWidget_NoRegister()
{
	return UGuideWidget::StaticClass();
}
struct Z_Construct_UClass_UGuideWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/GuideWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroSwitcher_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bind these names to your Blueprint buttons & switcher\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind these names to your Blueprint buttons & switcher" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/GuideWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGuideWidget_OnNextClicked, "OnNextClicked" }, // 269142699
		{ &Z_Construct_UFunction_UGuideWidget_OnPrevClicked, "OnPrevClicked" }, // 993757414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGuideWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGuideWidget_Statics::NewProp_IntroSwitcher = { "IntroSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuideWidget, IntroSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroSwitcher_MetaData), NewProp_IntroSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGuideWidget_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuideWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevButton_MetaData), NewProp_PrevButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGuideWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGuideWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGuideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuideWidget_Statics::NewProp_IntroSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuideWidget_Statics::NewProp_PrevButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGuideWidget_Statics::NewProp_NextButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuideWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGuideWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuideWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGuideWidget_Statics::ClassParams = {
	&UGuideWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGuideWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGuideWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuideWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGuideWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGuideWidget()
{
	if (!Z_Registration_Info_UClass_UGuideWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGuideWidget.OuterSingleton, Z_Construct_UClass_UGuideWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGuideWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UGuideWidget>()
{
	return UGuideWidget::StaticClass();
}
UGuideWidget::UGuideWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGuideWidget);
UGuideWidget::~UGuideWidget() {}
// End Class UGuideWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGuideWidget, UGuideWidget::StaticClass, TEXT("UGuideWidget"), &Z_Registration_Info_UClass_UGuideWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGuideWidget), 309184977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_3331209463(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
