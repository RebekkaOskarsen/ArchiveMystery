// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/BrushSelectionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushSelectionWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UBrushSelectionWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UBrushSelectionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UBrushSelectionWidget Function UpdateBrushSelection
struct Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics
{
	struct BrushSelectionWidget_eventUpdateBrushSelection_Parms
	{
		bool bIsSmallBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/BrushSelectionWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSmallBrush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSmallBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::NewProp_bIsSmallBrush_SetBit(void* Obj)
{
	((BrushSelectionWidget_eventUpdateBrushSelection_Parms*)Obj)->bIsSmallBrush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::NewProp_bIsSmallBrush = { "bIsSmallBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BrushSelectionWidget_eventUpdateBrushSelection_Parms), &Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::NewProp_bIsSmallBrush_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::NewProp_bIsSmallBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrushSelectionWidget, nullptr, "UpdateBrushSelection", nullptr, nullptr, Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::BrushSelectionWidget_eventUpdateBrushSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::BrushSelectionWidget_eventUpdateBrushSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrushSelectionWidget::execUpdateBrushSelection)
{
	P_GET_UBOOL(Z_Param_bIsSmallBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBrushSelection(Z_Param_bIsSmallBrush);
	P_NATIVE_END;
}
// End Class UBrushSelectionWidget Function UpdateBrushSelection

// Begin Class UBrushSelectionWidget
void UBrushSelectionWidget::StaticRegisterNativesUBrushSelectionWidget()
{
	UClass* Class = UBrushSelectionWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateBrushSelection", &UBrushSelectionWidget::execUpdateBrushSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushSelectionWidget);
UClass* Z_Construct_UClass_UBrushSelectionWidget_NoRegister()
{
	return UBrushSelectionWidget::StaticClass();
}
struct Z_Construct_UClass_UBrushSelectionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mold/BrushSelectionWidget.h" },
		{ "ModuleRelativePath", "Public/Mold/BrushSelectionWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrushSelectionWidget_UpdateBrushSelection, "UpdateBrushSelection" }, // 1090969710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushSelectionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBrushSelectionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushSelectionWidget_Statics::ClassParams = {
	&UBrushSelectionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushSelectionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushSelectionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushSelectionWidget()
{
	if (!Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton, Z_Construct_UClass_UBrushSelectionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushSelectionWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UBrushSelectionWidget>()
{
	return UBrushSelectionWidget::StaticClass();
}
UBrushSelectionWidget::UBrushSelectionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushSelectionWidget);
UBrushSelectionWidget::~UBrushSelectionWidget() {}
// End Class UBrushSelectionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushSelectionWidget, UBrushSelectionWidget::StaticClass, TEXT("UBrushSelectionWidget"), &Z_Registration_Info_UClass_UBrushSelectionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushSelectionWidget), 3947595770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_2928078441(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_BrushSelectionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
