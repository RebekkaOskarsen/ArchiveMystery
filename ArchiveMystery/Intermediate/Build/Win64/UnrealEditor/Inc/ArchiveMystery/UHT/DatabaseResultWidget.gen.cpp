// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Database/DatabaseResultWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseResultWidget() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UDatabaseResultWidget();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UDatabaseResultWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class UDatabaseResultWidget
void UDatabaseResultWidget::StaticRegisterNativesUDatabaseResultWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatabaseResultWidget);
UClass* Z_Construct_UClass_UDatabaseResultWidget_NoRegister()
{
	return UDatabaseResultWidget::StaticClass();
}
struct Z_Construct_UClass_UDatabaseResultWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Database/DatabaseResultWidget.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseResultWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseResultWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatabaseResultWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseResultWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseResultWidget_Statics::ClassParams = {
	&UDatabaseResultWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseResultWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatabaseResultWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatabaseResultWidget()
{
	if (!Z_Registration_Info_UClass_UDatabaseResultWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatabaseResultWidget.OuterSingleton, Z_Construct_UClass_UDatabaseResultWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatabaseResultWidget.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<UDatabaseResultWidget>()
{
	return UDatabaseResultWidget::StaticClass();
}
UDatabaseResultWidget::UDatabaseResultWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseResultWidget);
UDatabaseResultWidget::~UDatabaseResultWidget() {}
// End Class UDatabaseResultWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseResultWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseResultWidget, UDatabaseResultWidget::StaticClass, TEXT("UDatabaseResultWidget"), &Z_Registration_Info_UClass_UDatabaseResultWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseResultWidget), 4090252388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseResultWidget_h_1753957138(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseResultWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Database_DatabaseResultWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
