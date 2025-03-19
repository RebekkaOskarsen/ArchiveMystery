// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/BrushSelectionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushSelectionWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UBrushSelectionWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UBrushSelectionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UBrushSelectionWidget
void UBrushSelectionWidget::StaticRegisterNativesUBrushSelectionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushSelectionWidget);
UClass* Z_Construct_UClass_UBrushSelectionWidget_NoRegister()
{
	return UBrushSelectionWidget::StaticClass();
}
struct Z_Construct_UClass_UBrushSelectionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mold/BrushSelectionWidget.h" },
		{ "ModuleRelativePath", "Public/Mold/BrushSelectionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_SmallBrush_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Border for Small Brush\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/BrushSelectionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Border for Small Brush" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_BigBrush_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Border for Big Brush\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/BrushSelectionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Border for Big Brush" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_SmallBrush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_BigBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushSelectionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushSelectionWidget_Statics::NewProp_Border_SmallBrush = { "Border_SmallBrush", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushSelectionWidget, Border_SmallBrush), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_SmallBrush_MetaData), NewProp_Border_SmallBrush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushSelectionWidget_Statics::NewProp_Border_BigBrush = { "Border_BigBrush", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushSelectionWidget, Border_BigBrush), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_BigBrush_MetaData), NewProp_Border_BigBrush_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushSelectionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushSelectionWidget_Statics::NewProp_Border_SmallBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushSelectionWidget_Statics::NewProp_Border_BigBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushSelectionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushSelectionWidget_Statics::ClassParams = {
	&UBrushSelectionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushSelectionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushSelectionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushSelectionWidget()
{
	if (!Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton, Z_Construct_UClass_UBrushSelectionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UBrushSelectionWidget>()
{
	return UBrushSelectionWidget::StaticClass();
}
UBrushSelectionWidget::UBrushSelectionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushSelectionWidget);
UBrushSelectionWidget::~UBrushSelectionWidget() {}
// End Class UBrushSelectionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushSelectionWidget, UBrushSelectionWidget::StaticClass, TEXT("UBrushSelectionWidget"), &Z_Registration_Info_UClass_UBrushSelectionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushSelectionWidget), 2000896202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_2585793608(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_minas_OneDrive_Dokumenter_Personal_Projects_NGA_2025_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
