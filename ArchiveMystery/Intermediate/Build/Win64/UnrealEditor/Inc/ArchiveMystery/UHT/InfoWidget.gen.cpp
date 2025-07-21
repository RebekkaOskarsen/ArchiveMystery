// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/InfoWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfoWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UInfoWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UInfoWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UInfoWidget Function OnBackClicked
struct Z_Construct_UFunction_UInfoWidget_OnBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/InfoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoWidget_OnBackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoWidget, nullptr, "OnBackClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoWidget_OnBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoWidget_OnBackClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInfoWidget_OnBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoWidget_OnBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoWidget::execOnBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackClicked();
	P_NATIVE_END;
}
// End Class UInfoWidget Function OnBackClicked

// Begin Class UInfoWidget
void UInfoWidget::StaticRegisterNativesUInfoWidget()
{
	UClass* Class = UInfoWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackClicked", &UInfoWidget::execOnBackClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInfoWidget);
UClass* Z_Construct_UClass_UInfoWidget_NoRegister()
{
	return UInfoWidget::StaticClass();
}
struct Z_Construct_UClass_UInfoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/InfoWidget.h" },
		{ "ModuleRelativePath", "Public/Database/InfoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/InfoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/InfoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DatabaseWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfoWidget_OnBackClicked, "OnBackClicked" }, // 2625678718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInfoWidget_Statics::NewProp_DatabaseWidgetClass = { "DatabaseWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoWidget, DatabaseWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseWidgetClass_MetaData), NewProp_DatabaseWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoWidget_Statics::NewProp_DatabaseWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoWidget_Statics::NewProp_BackButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInfoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInfoWidget_Statics::ClassParams = {
	&UInfoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInfoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInfoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInfoWidget()
{
	if (!Z_Registration_Info_UClass_UInfoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInfoWidget.OuterSingleton, Z_Construct_UClass_UInfoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInfoWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UInfoWidget>()
{
	return UInfoWidget::StaticClass();
}
UInfoWidget::UInfoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInfoWidget);
UInfoWidget::~UInfoWidget() {}
// End Class UInfoWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInfoWidget, UInfoWidget::StaticClass, TEXT("UInfoWidget"), &Z_Registration_Info_UClass_UInfoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInfoWidget), 1970036944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoWidget_h_2387596069(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
