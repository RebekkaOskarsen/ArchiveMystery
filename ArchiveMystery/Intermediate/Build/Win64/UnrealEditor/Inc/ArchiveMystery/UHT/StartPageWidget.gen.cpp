// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/StartPageWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartPageWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UStartPageWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UStartPageWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UStartPageWidget
void UStartPageWidget::StaticRegisterNativesUStartPageWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStartPageWidget);
UClass* Z_Construct_UClass_UStartPageWidget_NoRegister()
{
	return UStartPageWidget::StaticClass();
}
struct Z_Construct_UClass_UStartPageWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/StartPageWidget.h" },
		{ "ModuleRelativePath", "Public/Database/StartPageWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/StartPageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartPageWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartPageWidget_Statics::NewProp_Text_PlayerName = { "Text_PlayerName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartPageWidget, Text_PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PlayerName_MetaData), NewProp_Text_PlayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartPageWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartPageWidget_Statics::NewProp_Text_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartPageWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStartPageWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartPageWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStartPageWidget_Statics::ClassParams = {
	&UStartPageWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStartPageWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStartPageWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartPageWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStartPageWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStartPageWidget()
{
	if (!Z_Registration_Info_UClass_UStartPageWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStartPageWidget.OuterSingleton, Z_Construct_UClass_UStartPageWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStartPageWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UStartPageWidget>()
{
	return UStartPageWidget::StaticClass();
}
UStartPageWidget::UStartPageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStartPageWidget);
UStartPageWidget::~UStartPageWidget() {}
// End Class UStartPageWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_StartPageWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStartPageWidget, UStartPageWidget::StaticClass, TEXT("UStartPageWidget"), &Z_Registration_Info_UClass_UStartPageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStartPageWidget), 3345334790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_StartPageWidget_h_253523407(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_StartPageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_StartPageWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
