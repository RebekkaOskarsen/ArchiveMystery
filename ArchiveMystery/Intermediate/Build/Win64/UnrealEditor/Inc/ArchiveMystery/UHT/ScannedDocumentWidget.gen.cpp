// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/ScannedDocumentWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScannedDocumentWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMailWidget_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UScannedDocumentWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UScannedDocumentWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UScannedDocumentWidget Function OnBackToMailClicked
struct Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/ScannedDocumentWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannedDocumentWidget, nullptr, "OnBackToMailClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannedDocumentWidget::execOnBackToMailClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackToMailClicked();
	P_NATIVE_END;
}
// End Class UScannedDocumentWidget Function OnBackToMailClicked

// Begin Class UScannedDocumentWidget
void UScannedDocumentWidget::StaticRegisterNativesUScannedDocumentWidget()
{
	UClass* Class = UScannedDocumentWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackToMailClicked", &UScannedDocumentWidget::execOnBackToMailClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScannedDocumentWidget);
UClass* Z_Construct_UClass_UScannedDocumentWidget_NoRegister()
{
	return UScannedDocumentWidget::StaticClass();
}
struct Z_Construct_UClass_UScannedDocumentWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/ScannedDocumentWidget.h" },
		{ "ModuleRelativePath", "Public/Database/ScannedDocumentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_BackToMail_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ScannedDocumentWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMailWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Referanse til MailWidget som \xef\xbf\xbdpnet oss */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ScannedDocumentWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til MailWidget som \xef\xbf\xbdpnet oss" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_BackToMail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMailWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScannedDocumentWidget_OnBackToMailClicked, "OnBackToMailClicked" }, // 992569227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScannedDocumentWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScannedDocumentWidget_Statics::NewProp_Button_BackToMail = { "Button_BackToMail", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScannedDocumentWidget, Button_BackToMail), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_BackToMail_MetaData), NewProp_Button_BackToMail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScannedDocumentWidget_Statics::NewProp_ParentMailWidget = { "ParentMailWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScannedDocumentWidget, ParentMailWidget), Z_Construct_UClass_UMailWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMailWidget_MetaData), NewProp_ParentMailWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScannedDocumentWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScannedDocumentWidget_Statics::NewProp_Button_BackToMail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScannedDocumentWidget_Statics::NewProp_ParentMailWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScannedDocumentWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScannedDocumentWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScannedDocumentWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScannedDocumentWidget_Statics::ClassParams = {
	&UScannedDocumentWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScannedDocumentWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScannedDocumentWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScannedDocumentWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScannedDocumentWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScannedDocumentWidget()
{
	if (!Z_Registration_Info_UClass_UScannedDocumentWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScannedDocumentWidget.OuterSingleton, Z_Construct_UClass_UScannedDocumentWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScannedDocumentWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UScannedDocumentWidget>()
{
	return UScannedDocumentWidget::StaticClass();
}
UScannedDocumentWidget::UScannedDocumentWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScannedDocumentWidget);
UScannedDocumentWidget::~UScannedDocumentWidget() {}
// End Class UScannedDocumentWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ScannedDocumentWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScannedDocumentWidget, UScannedDocumentWidget::StaticClass, TEXT("UScannedDocumentWidget"), &Z_Registration_Info_UClass_UScannedDocumentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScannedDocumentWidget), 3522132809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ScannedDocumentWidget_h_4195964866(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ScannedDocumentWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ScannedDocumentWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
