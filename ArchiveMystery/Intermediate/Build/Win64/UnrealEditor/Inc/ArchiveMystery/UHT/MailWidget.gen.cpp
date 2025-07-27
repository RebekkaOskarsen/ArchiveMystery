// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/MailWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMailWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMailWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMailWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UMailWidget Function OnSeeScannedDocumentsClicked
struct Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMailWidget, nullptr, "OnSeeScannedDocumentsClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMailWidget::execOnSeeScannedDocumentsClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeeScannedDocumentsClicked();
	P_NATIVE_END;
}
// End Class UMailWidget Function OnSeeScannedDocumentsClicked

// Begin Class UMailWidget Function OnSendButtonClicked
struct Z_Construct_UFunction_UMailWidget_OnSendButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMailWidget_OnSendButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMailWidget, nullptr, "OnSendButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMailWidget_OnSendButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMailWidget_OnSendButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMailWidget_OnSendButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMailWidget_OnSendButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMailWidget::execOnSendButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSendButtonClicked();
	P_NATIVE_END;
}
// End Class UMailWidget Function OnSendButtonClicked

// Begin Class UMailWidget Function ShowSendButton
struct Z_Construct_UFunction_UMailWidget_ShowSendButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMailWidget_ShowSendButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMailWidget, nullptr, "ShowSendButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMailWidget_ShowSendButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMailWidget_ShowSendButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMailWidget_ShowSendButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMailWidget_ShowSendButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMailWidget::execShowSendButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowSendButton();
	P_NATIVE_END;
}
// End Class UMailWidget Function ShowSendButton

// Begin Class UMailWidget
void UMailWidget::StaticRegisterNativesUMailWidget()
{
	UClass* Class = UMailWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSeeScannedDocumentsClicked", &UMailWidget::execOnSeeScannedDocumentsClicked },
		{ "OnSendButtonClicked", &UMailWidget::execOnSendButtonClicked },
		{ "ShowSendButton", &UMailWidget::execShowSendButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMailWidget);
UClass* Z_Construct_UClass_UMailWidget_NoRegister()
{
	return UMailWidget::StaticClass();
}
struct Z_Construct_UClass_UMailWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/MailWidget.h" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PlayerName_Mail_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_SeeScannedDocuments_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Send_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionMessageWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Klassen til scannede dokument-widgeten (sett i Blueprint)\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Klassen til scannede dokument-widgeten (sett i Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScannedDocumentWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScannedDocumentWidgetInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instans n\xef\xbf\xbdr den er vist\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/MailWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instans n\xef\xbf\xbdr den er vist" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName_Mail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_SeeScannedDocuments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Send;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompletionMessageWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScannedDocumentWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScannedDocumentWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMailWidget_OnSeeScannedDocumentsClicked, "OnSeeScannedDocumentsClicked" }, // 3882627852
		{ &Z_Construct_UFunction_UMailWidget_OnSendButtonClicked, "OnSendButtonClicked" }, // 4223381828
		{ &Z_Construct_UFunction_UMailWidget_ShowSendButton, "ShowSendButton" }, // 2419479662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMailWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_Text_PlayerName_Mail = { "Text_PlayerName_Mail", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, Text_PlayerName_Mail), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PlayerName_Mail_MetaData), NewProp_Text_PlayerName_Mail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_Button_SeeScannedDocuments = { "Button_SeeScannedDocuments", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, Button_SeeScannedDocuments), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_SeeScannedDocuments_MetaData), NewProp_Button_SeeScannedDocuments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_Button_Send = { "Button_Send", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, Button_Send), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Send_MetaData), NewProp_Button_Send_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_CompletionMessageWidgetClass = { "CompletionMessageWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, CompletionMessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionMessageWidgetClass_MetaData), NewProp_CompletionMessageWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_ScannedDocumentWidgetClass = { "ScannedDocumentWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, ScannedDocumentWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScannedDocumentWidgetClass_MetaData), NewProp_ScannedDocumentWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMailWidget_Statics::NewProp_ScannedDocumentWidgetInstance = { "ScannedDocumentWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMailWidget, ScannedDocumentWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScannedDocumentWidgetInstance_MetaData), NewProp_ScannedDocumentWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMailWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_Text_PlayerName_Mail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_Button_SeeScannedDocuments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_Button_Send,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_CompletionMessageWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_ScannedDocumentWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMailWidget_Statics::NewProp_ScannedDocumentWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMailWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMailWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMailWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMailWidget_Statics::ClassParams = {
	&UMailWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMailWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMailWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMailWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMailWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMailWidget()
{
	if (!Z_Registration_Info_UClass_UMailWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMailWidget.OuterSingleton, Z_Construct_UClass_UMailWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMailWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UMailWidget>()
{
	return UMailWidget::StaticClass();
}
UMailWidget::UMailWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMailWidget);
UMailWidget::~UMailWidget() {}
// End Class UMailWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_Database_MailWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMailWidget, UMailWidget::StaticClass, TEXT("UMailWidget"), &Z_Registration_Info_UClass_UMailWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMailWidget), 261298470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_Database_MailWidget_h_4263442739(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_Database_MailWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_Database_MailWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
