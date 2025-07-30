// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/InfoBookWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfoBookWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UInfoBookWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UInfoBookWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UInfoBookWidget Function OnBackToDatabaseClicked
struct Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoBookWidget, nullptr, "OnBackToDatabaseClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoBookWidget::execOnBackToDatabaseClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackToDatabaseClicked();
	P_NATIVE_END;
}
// End Class UInfoBookWidget Function OnBackToDatabaseClicked

// Begin Class UInfoBookWidget Function OnNextClicked
struct Z_Construct_UFunction_UInfoBookWidget_OnNextClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoBookWidget_OnNextClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoBookWidget, nullptr, "OnNextClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoBookWidget_OnNextClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoBookWidget_OnNextClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInfoBookWidget_OnNextClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoBookWidget_OnNextClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoBookWidget::execOnNextClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextClicked();
	P_NATIVE_END;
}
// End Class UInfoBookWidget Function OnNextClicked

// Begin Class UInfoBookWidget Function OnPrevClicked
struct Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoBookWidget, nullptr, "OnPrevClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoBookWidget::execOnPrevClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrevClicked();
	P_NATIVE_END;
}
// End Class UInfoBookWidget Function OnPrevClicked

// Begin Class UInfoBookWidget
void UInfoBookWidget::StaticRegisterNativesUInfoBookWidget()
{
	UClass* Class = UInfoBookWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackToDatabaseClicked", &UInfoBookWidget::execOnBackToDatabaseClicked },
		{ "OnNextClicked", &UInfoBookWidget::execOnNextClicked },
		{ "OnPrevClicked", &UInfoBookWidget::execOnPrevClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInfoBookWidget);
UClass* Z_Construct_UClass_UInfoBookWidget_NoRegister()
{
	return UInfoBookWidget::StaticClass();
}
struct Z_Construct_UClass_UInfoBookWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/InfoBookWidget.h" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackToDatabaseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipPageAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For \xef\xbf\xbd kontrollere UMG-animasjoner\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For \xef\xbf\xbd kontrollere UMG-animasjoner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Database/InfoBookWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackToDatabaseButton;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DatabaseWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipPageAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfoBookWidget_OnBackToDatabaseClicked, "OnBackToDatabaseClicked" }, // 3109191508
		{ &Z_Construct_UFunction_UInfoBookWidget_OnNextClicked, "OnNextClicked" }, // 2656652045
		{ &Z_Construct_UFunction_UInfoBookWidget_OnPrevClicked, "OnPrevClicked" }, // 209445512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfoBookWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_PageSwitcher = { "PageSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, PageSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSwitcher_MetaData), NewProp_PageSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevButton_MetaData), NewProp_PrevButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_BackToDatabaseButton = { "BackToDatabaseButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, BackToDatabaseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackToDatabaseButton_MetaData), NewProp_BackToDatabaseButton_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_DatabaseWidgetClass = { "DatabaseWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, DatabaseWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseWidgetClass_MetaData), NewProp_DatabaseWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_FlipPageAnim = { "FlipPageAnim", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, FlipPageAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipPageAnim_MetaData), NewProp_FlipPageAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_FlipSound = { "FlipSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoBookWidget, FlipSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipSound_MetaData), NewProp_FlipSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfoBookWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_PageSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_PrevButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_BackToDatabaseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_DatabaseWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_FlipPageAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoBookWidget_Statics::NewProp_FlipSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoBookWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInfoBookWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoBookWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInfoBookWidget_Statics::ClassParams = {
	&UInfoBookWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInfoBookWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInfoBookWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoBookWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInfoBookWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInfoBookWidget()
{
	if (!Z_Registration_Info_UClass_UInfoBookWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInfoBookWidget.OuterSingleton, Z_Construct_UClass_UInfoBookWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInfoBookWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UInfoBookWidget>()
{
	return UInfoBookWidget::StaticClass();
}
UInfoBookWidget::UInfoBookWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInfoBookWidget);
UInfoBookWidget::~UInfoBookWidget() {}
// End Class UInfoBookWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInfoBookWidget, UInfoBookWidget::StaticClass, TEXT("UInfoBookWidget"), &Z_Registration_Info_UClass_UInfoBookWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInfoBookWidget), 3281315266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_3767849832(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
