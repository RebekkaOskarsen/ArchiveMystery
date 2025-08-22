// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/LoginWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ULoginWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ULoginWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class ULoginWidget Function OnLoginClicked
struct Z_Construct_UFunction_ULoginWidget_OnLoginClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginWidget_OnLoginClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginWidget, nullptr, "OnLoginClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnLoginClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoginWidget_OnLoginClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoginWidget_OnLoginClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoginWidget_OnLoginClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoginWidget::execOnLoginClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoginClicked();
	P_NATIVE_END;
}
// End Class ULoginWidget Function OnLoginClicked

// Begin Class ULoginWidget Function OnNameCommitted
struct Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics
{
	struct LoginWidget_eventOnNameCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginWidget_eventOnNameCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginWidget_eventOnNameCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginWidget, nullptr, "OnNameCommitted", nullptr, nullptr, Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::LoginWidget_eventOnNameCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::LoginWidget_eventOnNameCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoginWidget_OnNameCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoginWidget_OnNameCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoginWidget::execOnNameCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNameCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class ULoginWidget Function OnNameCommitted

// Begin Class ULoginWidget
void ULoginWidget::StaticRegisterNativesULoginWidget()
{
	UClass* Class = ULoginWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLoginClicked", &ULoginWidget::execOnLoginClicked },
		{ "OnNameCommitted", &ULoginWidget::execOnNameCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoginWidget);
UClass* Z_Construct_UClass_ULoginWidget_NoRegister()
{
	return ULoginWidget::StaticClass();
}
struct Z_Construct_UClass_ULoginWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/LoginWidget.h" },
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_ErrorMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Login_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextWidgetClass_MetaData[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/Database/LoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_PlayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_ErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Login;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NextWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoginWidget_OnLoginClicked, "OnLoginClicked" }, // 844802140
		{ &Z_Construct_UFunction_ULoginWidget_OnNameCommitted, "OnNameCommitted" }, // 3443953111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoginWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_EditableTextBox_PlayerName = { "EditableTextBox_PlayerName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginWidget, EditableTextBox_PlayerName), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_PlayerName_MetaData), NewProp_EditableTextBox_PlayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_Text_ErrorMessage = { "Text_ErrorMessage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginWidget, Text_ErrorMessage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_ErrorMessage_MetaData), NewProp_Text_ErrorMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_Button_Login = { "Button_Login", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginWidget, Button_Login), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Login_MetaData), NewProp_Button_Login_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_NextWidgetClass = { "NextWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginWidget, NextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextWidgetClass_MetaData), NewProp_NextWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoginWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_EditableTextBox_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_Text_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_Button_Login,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_NextWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoginWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoginWidget_Statics::ClassParams = {
	&ULoginWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoginWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoginWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoginWidget()
{
	if (!Z_Registration_Info_UClass_ULoginWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoginWidget.OuterSingleton, Z_Construct_UClass_ULoginWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoginWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ULoginWidget>()
{
	return ULoginWidget::StaticClass();
}
ULoginWidget::ULoginWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoginWidget);
ULoginWidget::~ULoginWidget() {}
// End Class ULoginWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoginWidget, ULoginWidget::StaticClass, TEXT("ULoginWidget"), &Z_Registration_Info_UClass_ULoginWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoginWidget), 3567891360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_997456473(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
