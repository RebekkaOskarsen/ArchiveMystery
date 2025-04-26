// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/HUD/PauseMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenuWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UPauseMenuWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UPauseMenuWidget Function OnBackToMainMenuClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/HUD/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnBackToMainMenuClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnBackToMainMenuClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackToMainMenuClicked();
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnBackToMainMenuClicked

// Begin Class UPauseMenuWidget Function OnContinueGameClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bind denne funksjonen til \"Continue Game\"-knappen\n" },
#endif
		{ "ModuleRelativePath", "Public/HUD/PauseMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind denne funksjonen til \"Continue Game\"-knappen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnContinueGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnContinueGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnContinueGameClicked();
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnContinueGameClicked

// Begin Class UPauseMenuWidget
void UPauseMenuWidget::StaticRegisterNativesUPauseMenuWidget()
{
	UClass* Class = UPauseMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackToMainMenuClicked", &UPauseMenuWidget::execOnBackToMainMenuClicked },
		{ "OnContinueGameClicked", &UPauseMenuWidget::execOnContinueGameClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenuWidget);
UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister()
{
	return UPauseMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UPauseMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/PauseMenuWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueGameButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til \"Continue Game\"-knappen (sett i Blueprint)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PauseMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til \"Continue Game\"-knappen (sett i Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackToMainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackToMainMenuButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnBackToMainMenuClicked, "OnBackToMainMenuClicked" }, // 2074345330
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnContinueGameClicked, "OnContinueGameClicked" }, // 2337373946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ContinueGameButton = { "ContinueGameButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, ContinueGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueGameButton_MetaData), NewProp_ContinueGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_BackToMainMenuButton = { "BackToMainMenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, BackToMainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackToMainMenuButton_MetaData), NewProp_BackToMainMenuButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ContinueGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_BackToMainMenuButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams = {
	&UPauseMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseMenuWidget()
{
	if (!Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton, Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UPauseMenuWidget>()
{
	return UPauseMenuWidget::StaticClass();
}
UPauseMenuWidget::UPauseMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenuWidget);
UPauseMenuWidget::~UPauseMenuWidget() {}
// End Class UPauseMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_githubarchive_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_PauseMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenuWidget, UPauseMenuWidget::StaticClass, TEXT("UPauseMenuWidget"), &Z_Registration_Info_UClass_UPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenuWidget), 2846687309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_githubarchive_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_PauseMenuWidget_h_3148883675(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_githubarchive_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_PauseMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_githubarchive_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_PauseMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
