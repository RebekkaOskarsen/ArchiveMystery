// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/CompletionMessageWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompletionMessageWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UCompletionMessageWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UCompletionMessageWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UCompletionMessageWidget Function OnReturnToMenuClicked
struct Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/CompletionMessageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompletionMessageWidget, nullptr, "OnReturnToMenuClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompletionMessageWidget::execOnReturnToMenuClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnToMenuClicked();
	P_NATIVE_END;
}
// End Class UCompletionMessageWidget Function OnReturnToMenuClicked

// Begin Class UCompletionMessageWidget
void UCompletionMessageWidget::StaticRegisterNativesUCompletionMessageWidget()
{
	UClass* Class = UCompletionMessageWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnReturnToMenuClicked", &UCompletionMessageWidget::execOnReturnToMenuClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompletionMessageWidget);
UClass* Z_Construct_UClass_UCompletionMessageWidget_NoRegister()
{
	return UCompletionMessageWidget::StaticClass();
}
struct Z_Construct_UClass_UCompletionMessageWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/CompletionMessageWidget.h" },
		{ "ModuleRelativePath", "Public/Database/CompletionMessageWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_ReturnToMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/CompletionMessageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_ReturnToMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompletionMessageWidget_OnReturnToMenuClicked, "OnReturnToMenuClicked" }, // 1540164733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompletionMessageWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompletionMessageWidget_Statics::NewProp_Button_ReturnToMenu = { "Button_ReturnToMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompletionMessageWidget, Button_ReturnToMenu), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_ReturnToMenu_MetaData), NewProp_Button_ReturnToMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompletionMessageWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompletionMessageWidget_Statics::NewProp_Button_ReturnToMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompletionMessageWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompletionMessageWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompletionMessageWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompletionMessageWidget_Statics::ClassParams = {
	&UCompletionMessageWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCompletionMessageWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompletionMessageWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompletionMessageWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompletionMessageWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompletionMessageWidget()
{
	if (!Z_Registration_Info_UClass_UCompletionMessageWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompletionMessageWidget.OuterSingleton, Z_Construct_UClass_UCompletionMessageWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompletionMessageWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UCompletionMessageWidget>()
{
	return UCompletionMessageWidget::StaticClass();
}
UCompletionMessageWidget::UCompletionMessageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompletionMessageWidget);
UCompletionMessageWidget::~UCompletionMessageWidget() {}
// End Class UCompletionMessageWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_CompletionMessageWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompletionMessageWidget, UCompletionMessageWidget::StaticClass, TEXT("UCompletionMessageWidget"), &Z_Registration_Info_UClass_UCompletionMessageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompletionMessageWidget), 2917724481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_CompletionMessageWidget_h_644644572(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_CompletionMessageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_CompletionMessageWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
