// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldPlayerController() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldBrush_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldPlayerController();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldPlayerController_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UBrushSelectionWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AMoldPlayerController
void AMoldPlayerController::StaticRegisterNativesAMoldPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoldPlayerController);
UClass* Z_Construct_UClass_AMoldPlayerController_NoRegister()
{
	return AMoldPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMoldPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Mold/MoldPlayerController.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldBrush_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSelectionUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI Reference\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldBrush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushSelectionUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoldPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldPlayerController_Statics::NewProp_MoldBrush = { "MoldBrush", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldPlayerController, MoldBrush), Z_Construct_UClass_AMoldBrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldBrush_MetaData), NewProp_MoldBrush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldPlayerController_Statics::NewProp_BrushSelectionUI = { "BrushSelectionUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldPlayerController, BrushSelectionUI), Z_Construct_UClass_UBrushSelectionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSelectionUI_MetaData), NewProp_BrushSelectionUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoldPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldPlayerController_Statics::NewProp_MoldBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldPlayerController_Statics::NewProp_BrushSelectionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoldPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoldPlayerController_Statics::ClassParams = {
	&AMoldPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoldPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoldPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoldPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoldPlayerController()
{
	if (!Z_Registration_Info_UClass_AMoldPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoldPlayerController.OuterSingleton, Z_Construct_UClass_AMoldPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoldPlayerController.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMoldPlayerController>()
{
	return AMoldPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoldPlayerController);
AMoldPlayerController::~AMoldPlayerController() {}
// End Class AMoldPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoldPlayerController, AMoldPlayerController::StaticClass, TEXT("AMoldPlayerController"), &Z_Registration_Info_UClass_AMoldPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoldPlayerController), 1956564652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldPlayerController_h_1028209401(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
