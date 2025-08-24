// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/InformationShelves/ArchivePopupWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivePopupWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchivePopupWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UArchivePopupWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UArchivePopupWidget Function CloseWidget
struct Z_Construct_UFunction_UArchivePopupWidget_CloseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchivePopupWidget_CloseWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchivePopupWidget, nullptr, "CloseWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePopupWidget_CloseWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchivePopupWidget_CloseWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchivePopupWidget_CloseWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchivePopupWidget_CloseWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchivePopupWidget::execCloseWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseWidget();
	P_NATIVE_END;
}
// End Class UArchivePopupWidget Function CloseWidget

// Begin Class UArchivePopupWidget Function ShowNextPage
struct Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchivePopupWidget, nullptr, "ShowNextPage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchivePopupWidget::execShowNextPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowNextPage();
	P_NATIVE_END;
}
// End Class UArchivePopupWidget Function ShowNextPage

// Begin Class UArchivePopupWidget Function ShowPreviousPage
struct Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchivePopupWidget, nullptr, "ShowPreviousPage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchivePopupWidget::execShowPreviousPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPreviousPage();
	P_NATIVE_END;
}
// End Class UArchivePopupWidget Function ShowPreviousPage

// Begin Class UArchivePopupWidget
void UArchivePopupWidget::StaticRegisterNativesUArchivePopupWidget()
{
	UClass* Class = UArchivePopupWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseWidget", &UArchivePopupWidget::execCloseWidget },
		{ "ShowNextPage", &UArchivePopupWidget::execShowNextPage },
		{ "ShowPreviousPage", &UArchivePopupWidget::execShowPreviousPage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchivePopupWidget);
UClass* Z_Construct_UClass_UArchivePopupWidget_NoRegister()
{
	return UArchivePopupWidget::StaticClass();
}
struct Z_Construct_UClass_UArchivePopupWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InformationShelves/ArchivePopupWidget.h" },
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InformationShelves/ArchivePopupWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageSwitcher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchivePopupWidget_CloseWidget, "CloseWidget" }, // 57141779
		{ &Z_Construct_UFunction_UArchivePopupWidget_ShowNextPage, "ShowNextPage" }, // 3825631769
		{ &Z_Construct_UFunction_UArchivePopupWidget_ShowPreviousPage, "ShowPreviousPage" }, // 590655955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivePopupWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchivePopupWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseButton_MetaData), NewProp_CloseButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchivePopupWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchivePopupWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevButton_MetaData), NewProp_PrevButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_PageSwitcher = { "PageSwitcher", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchivePopupWidget, PageSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSwitcher_MetaData), NewProp_PageSwitcher_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchivePopupWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_CloseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_PrevButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchivePopupWidget_Statics::NewProp_PageSwitcher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePopupWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArchivePopupWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePopupWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchivePopupWidget_Statics::ClassParams = {
	&UArchivePopupWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArchivePopupWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePopupWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePopupWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchivePopupWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchivePopupWidget()
{
	if (!Z_Registration_Info_UClass_UArchivePopupWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchivePopupWidget.OuterSingleton, Z_Construct_UClass_UArchivePopupWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchivePopupWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UArchivePopupWidget>()
{
	return UArchivePopupWidget::StaticClass();
}
UArchivePopupWidget::UArchivePopupWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivePopupWidget);
UArchivePopupWidget::~UArchivePopupWidget() {}
// End Class UArchivePopupWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_InformationShelves_ArchivePopupWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchivePopupWidget, UArchivePopupWidget::StaticClass, TEXT("UArchivePopupWidget"), &Z_Registration_Info_UClass_UArchivePopupWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchivePopupWidget), 3717517755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_InformationShelves_ArchivePopupWidget_h_3596742407(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_InformationShelves_ArchivePopupWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_InformationShelves_ArchivePopupWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
