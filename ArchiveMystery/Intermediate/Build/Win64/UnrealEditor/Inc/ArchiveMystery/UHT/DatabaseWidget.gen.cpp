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
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UDatabaseWidget Function OnAndTextCommitted
struct Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics
{
	struct DatabaseWidget_eventOnAndTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnAndTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnAndTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnAndTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::DatabaseWidget_eventOnAndTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::DatabaseWidget_eventOnAndTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnAndTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAndTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnAndTextCommitted

// Begin Class UDatabaseWidget Function OnFromTextCommitted
struct Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics
{
	struct DatabaseWidget_eventOnFromTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnFromTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnFromTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnFromTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::DatabaseWidget_eventOnFromTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::DatabaseWidget_eventOnFromTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnFromTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFromTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnFromTextCommitted

// Begin Class UDatabaseWidget Function OnLikeTextCommitted
struct Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics
{
	struct DatabaseWidget_eventOnLikeTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnLikeTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnLikeTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnLikeTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::DatabaseWidget_eventOnLikeTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::DatabaseWidget_eventOnLikeTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnLikeTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLikeTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnLikeTextCommitted

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

// Begin Class UDatabaseWidget Function OnSelectTextCommitted
struct Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics
{
	struct DatabaseWidget_eventOnSelectTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnSelectTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnSelectTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnSelectTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::DatabaseWidget_eventOnSelectTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::DatabaseWidget_eventOnSelectTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnSelectTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnSelectTextCommitted

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

// Begin Class UDatabaseWidget Function OnWhereTextCommitted
struct Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics
{
	struct DatabaseWidget_eventOnWhereTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnWhereTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseWidget_eventOnWhereTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseWidget, nullptr, "OnWhereTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::DatabaseWidget_eventOnWhereTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::DatabaseWidget_eventOnWhereTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseWidget::execOnWhereTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWhereTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UDatabaseWidget Function OnWhereTextCommitted

// Begin Class UDatabaseWidget
void UDatabaseWidget::StaticRegisterNativesUDatabaseWidget()
{
	UClass* Class = UDatabaseWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAndTextCommitted", &UDatabaseWidget::execOnAndTextCommitted },
		{ "OnFromTextCommitted", &UDatabaseWidget::execOnFromTextCommitted },
		{ "OnLikeTextCommitted", &UDatabaseWidget::execOnLikeTextCommitted },
		{ "OnOpenInfoClicked", &UDatabaseWidget::execOnOpenInfoClicked },
		{ "OnSelectTextCommitted", &UDatabaseWidget::execOnSelectTextCommitted },
		{ "OnSubmitClicked", &UDatabaseWidget::execOnSubmitClicked },
		{ "OnWhereTextCommitted", &UDatabaseWidget::execOnWhereTextCommitted },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectInputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromInputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhereInputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LikeInputBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AndInputBox_MetaData[] = {
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Husk \xef\xbf\xbd eksponere til Blueprint hvis du vil tilordne widget i editoren\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DatabaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Husk \xef\xbf\xbd eksponere til Blueprint hvis du vil tilordne widget i editoren" },
#endif
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectInputBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromInputBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhereInputBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LikeInputBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AndInputBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmitButton;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenInfoButton;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfoWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ErrorWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName_Database;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseWidget_OnAndTextCommitted, "OnAndTextCommitted" }, // 3607211291
		{ &Z_Construct_UFunction_UDatabaseWidget_OnFromTextCommitted, "OnFromTextCommitted" }, // 1703198878
		{ &Z_Construct_UFunction_UDatabaseWidget_OnLikeTextCommitted, "OnLikeTextCommitted" }, // 3467987296
		{ &Z_Construct_UFunction_UDatabaseWidget_OnOpenInfoClicked, "OnOpenInfoClicked" }, // 1579017749
		{ &Z_Construct_UFunction_UDatabaseWidget_OnSelectTextCommitted, "OnSelectTextCommitted" }, // 1095590440
		{ &Z_Construct_UFunction_UDatabaseWidget_OnSubmitClicked, "OnSubmitClicked" }, // 2614420774
		{ &Z_Construct_UFunction_UDatabaseWidget_OnWhereTextCommitted, "OnWhereTextCommitted" }, // 583544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SelectInputBox = { "SelectInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, SelectInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectInputBox_MetaData), NewProp_SelectInputBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_FromInputBox = { "FromInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, FromInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromInputBox_MetaData), NewProp_FromInputBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_WhereInputBox = { "WhereInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, WhereInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhereInputBox_MetaData), NewProp_WhereInputBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_LikeInputBox = { "LikeInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, LikeInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LikeInputBox_MetaData), NewProp_LikeInputBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_AndInputBox = { "AndInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, AndInputBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AndInputBox_MetaData), NewProp_AndInputBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SubmitButton = { "SubmitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, SubmitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitButton_MetaData), NewProp_SubmitButton_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ResultWidgetClass = { "ResultWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, ResultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultWidgetClass_MetaData), NewProp_ResultWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_OpenInfoButton = { "OpenInfoButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, OpenInfoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenInfoButton_MetaData), NewProp_OpenInfoButton_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_InfoWidgetClass = { "InfoWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, InfoWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoWidgetClass_MetaData), NewProp_InfoWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_ErrorWidgetClass = { "ErrorWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, ErrorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorWidgetClass_MetaData), NewProp_ErrorWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_Text_PlayerName_Database = { "Text_PlayerName_Database", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatabaseWidget, Text_PlayerName_Database), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PlayerName_Database_MetaData), NewProp_Text_PlayerName_Database_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_SelectInputBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_FromInputBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_WhereInputBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_LikeInputBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseWidget_Statics::NewProp_AndInputBox,
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
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseWidget, UDatabaseWidget::StaticClass, TEXT("UDatabaseWidget"), &Z_Registration_Info_UClass_UDatabaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseWidget), 3183864953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_2971786013(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
