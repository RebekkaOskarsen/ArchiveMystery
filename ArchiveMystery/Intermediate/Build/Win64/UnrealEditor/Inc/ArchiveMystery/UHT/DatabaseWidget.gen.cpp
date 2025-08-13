// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/DatabaseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UDatabaseWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UDatabaseWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UDatabaseWidget Function OnOpenInfoClicked
struct Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnOpenInfoClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnOpenInfoClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOpenInfoClicked();
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnOpenInfoClicked

// Begin Class UDatabaseWidget Function OnSubmitClicked
struct Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnSubmitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnSubmitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSubmitClicked();
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnSubmitClicked

// Begin Class UDatabaseWidget
void UDatabaseWidget::StaticRegisterNativesUDatabaseWidget()
{
	UClass* Class = UDatabaseWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOpenInfoClicked", &UDatabaseWidget::execOnOpenInfoClicked },
		{ "OnSubmitClicked", &UDatabaseWidget::execOnSubmitClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatabaseWidget);
UClass* Z_Construct_UClass_UDatabaseWidget_NoRegister()
{
	return UDatabaseWidget::StaticClass();
}
struct Z_Construct_UClass_UDatabaseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/DatabaseWidget.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhereComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LikeComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AndComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenInfoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PlayerName_Database_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhereComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LikeComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AndComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmitButton;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenInfoButton;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfoWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ErrorWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName_Database;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked, "OnOpenInfoClicked" }, // 1579017749
		{ &Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked, "OnSubmitClicked" }, // 2614420774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SelectComboBox = { "SelectComboBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, SelectComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectComboBox_MetaData), NewProp_SelectComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_FromComboBox = { "FromComboBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, FromComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromComboBox_MetaData), NewProp_FromComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_WhereComboBox = { "WhereComboBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, WhereComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhereComboBox_MetaData), NewProp_WhereComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_LikeComboBox = { "LikeComboBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, LikeComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LikeComboBox_MetaData), NewProp_LikeComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_AndComboBox = { "AndComboBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, AndComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AndComboBox_MetaData), NewProp_AndComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SubmitButton = { "SubmitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, SubmitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitButton_MetaData), NewProp_SubmitButton_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ResultWidgetClass = { "ResultWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, ResultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultWidgetClass_MetaData), NewProp_ResultWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_OpenInfoButton = { "OpenInfoButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, OpenInfoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenInfoButton_MetaData), NewProp_OpenInfoButton_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_InfoWidgetClass = { "InfoWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, InfoWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoWidgetClass_MetaData), NewProp_InfoWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ErrorWidgetClass = { "ErrorWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, ErrorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorWidgetClass_MetaData), NewProp_ErrorWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_Text_PlayerName_Database = { "Text_PlayerName_Database", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, Text_PlayerName_Database), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PlayerName_Database_MetaData), NewProp_Text_PlayerName_Database_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SelectComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_FromComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_WhereComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_LikeComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_AndComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SubmitButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ResultWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_OpenInfoButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_InfoWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ErrorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_Text_PlayerName_Database,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatabaseWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseWidget_Statics::ClassParams = {
	&UDatabaseWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDatabaseWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatabaseWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatabaseWidget()
{
	if (!Z_Registration_Info_UClass_UDatabaseWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatabaseWidget.OuterSingleton, Z_Construct_UClass_UDatabaseWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatabaseWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UDatabaseWidget>()
{
	return UDatabaseWidget::StaticClass();
}
UDatabaseWidget::UDatabaseWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseWidget);
UDatabaseWidget::~UDatabaseWidget() {}
// End Class UDatabaseWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseWidget, UDatabaseWidget::StaticClass, TEXT("UDatabaseWidget"), &Z_Registration_Info_UClass_UDatabaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseWidget), 1794776456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_2980515546(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
