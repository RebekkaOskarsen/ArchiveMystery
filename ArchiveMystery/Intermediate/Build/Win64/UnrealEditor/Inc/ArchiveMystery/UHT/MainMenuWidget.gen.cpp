// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/HUD/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMainMenuWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UMainMenuWidget Function OnCreditsClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnCreditsClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnCreditsClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCreditsClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnCreditsClicked

// Begin Class UMainMenuWidget Function OnExitGameClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bind denne funksjonen til \"Exit Game\"-knappen\n" },
#endif
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind denne funksjonen til \"Exit Game\"-knappen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnExitGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnExitGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitGameClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnExitGameClicked

// Begin Class UMainMenuWidget Function OnStartGameClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bind denne funksjonen til \"Start Game\"-knappen\n" },
#endif
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind denne funksjonen til \"Start Game\"-knappen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnStartGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnStartGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartGameClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnStartGameClicked

// Begin Class UMainMenuWidget
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCreditsClicked", &UMainMenuWidget::execOnCreditsClicked },
		{ "OnExitGameClicked", &UMainMenuWidget::execOnExitGameClicked },
		{ "OnStartGameClicked", &UMainMenuWidget::execOnStartGameClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreditsWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til \"Start Game\"-knappen (sett i Blueprint)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til \"Start Game\"-knappen (sett i Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitGameButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til \"Exit Game\"-knappen (sett i Blueprint)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til \"Exit Game\"-knappen (sett i Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Credits_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CreditsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Credits_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnCreditsClicked, "OnCreditsClicked" }, // 2822108257
		{ &Z_Construct_UFunction_UMainMenuWidget_OnExitGameClicked, "OnExitGameClicked" }, // 2747378228
		{ &Z_Construct_UFunction_UMainMenuWidget_OnStartGameClicked, "OnStartGameClicked" }, // 399123295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_CreditsWidgetClass = { "CreditsWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, CreditsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreditsWidgetClass_MetaData), NewProp_CreditsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, StartGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameButton_MetaData), NewProp_StartGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton = { "ExitGameButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, ExitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitGameButton_MetaData), NewProp_ExitGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Credits_Button = { "Credits_Button", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Credits_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Credits_Button_MetaData), NewProp_Credits_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_CreditsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Credits_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UMainMenuWidget>()
{
	return UMainMenuWidget::StaticClass();
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// End Class UMainMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MainMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 1404454019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MainMenuWidget_h_1102714250(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_HUD_MainMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
