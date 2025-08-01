// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/ErrorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UErrorWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UErrorWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UErrorWidget Function OnBackClicked
struct Z_Construct_UFunction_UErrorWidget_OnBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UErrorWidget_OnBackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UErrorWidget, nullptr, "OnBackClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorWidget_OnBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UErrorWidget_OnBackClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UErrorWidget_OnBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UErrorWidget_OnBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UErrorWidget::execOnBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackClicked();
	P_NATIVE_END;
}
// End Class UErrorWidget Function OnBackClicked

// Begin Class UErrorWidget Function ShowSpeechBubble
struct Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UErrorWidget, nullptr, "ShowSpeechBubble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UErrorWidget::execShowSpeechBubble)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowSpeechBubble();
	P_NATIVE_END;
}
// End Class UErrorWidget Function ShowSpeechBubble

// Begin Class UErrorWidget
void UErrorWidget::StaticRegisterNativesUErrorWidget()
{
	UClass* Class = UErrorWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackClicked", &UErrorWidget::execOnBackClicked },
		{ "ShowSpeechBubble", &UErrorWidget::execShowSpeechBubble },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UErrorWidget);
UClass* Z_Construct_UClass_UErrorWidget_NoRegister()
{
	return UErrorWidget::StaticClass();
}
struct Z_Construct_UClass_UErrorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/ErrorWidget.h" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechBubbleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechBubbleBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PlayerName_Error_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/ErrorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DatabaseWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeechBubbleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeechBubbleBackground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UErrorWidget_OnBackClicked, "OnBackClicked" }, // 1748533552
		{ &Z_Construct_UFunction_UErrorWidget_ShowSpeechBubble, "ShowSpeechBubble" }, // 2336961758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UErrorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_DatabaseWidgetClass = { "DatabaseWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, DatabaseWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseWidgetClass_MetaData), NewProp_DatabaseWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_SpeechBubbleText = { "SpeechBubbleText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, SpeechBubbleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechBubbleText_MetaData), NewProp_SpeechBubbleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_SpeechBubbleBackground = { "SpeechBubbleBackground", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, SpeechBubbleBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechBubbleBackground_MetaData), NewProp_SpeechBubbleBackground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_GhostImage = { "GhostImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, GhostImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostImage_MetaData), NewProp_GhostImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UErrorWidget_Statics::NewProp_Text_PlayerName_Error = { "Text_PlayerName_Error", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UErrorWidget, Text_PlayerName_Error), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PlayerName_Error_MetaData), NewProp_Text_PlayerName_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UErrorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_DatabaseWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_SpeechBubbleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_SpeechBubbleBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_GhostImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UErrorWidget_Statics::NewProp_Text_PlayerName_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UErrorWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UErrorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UErrorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UErrorWidget_Statics::ClassParams = {
	&UErrorWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UErrorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UErrorWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UErrorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UErrorWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UErrorWidget()
{
	if (!Z_Registration_Info_UClass_UErrorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UErrorWidget.OuterSingleton, Z_Construct_UClass_UErrorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UErrorWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UErrorWidget>()
{
	return UErrorWidget::StaticClass();
}
UErrorWidget::UErrorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UErrorWidget);
UErrorWidget::~UErrorWidget() {}
// End Class UErrorWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UErrorWidget, UErrorWidget::StaticClass, TEXT("UErrorWidget"), &Z_Registration_Info_UClass_UErrorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UErrorWidget), 2221852384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_1318787812(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
