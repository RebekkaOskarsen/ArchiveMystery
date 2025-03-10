// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Items/Box/OpenBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenBox() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AOpenBox();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AOpenBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AOpenBox
void AOpenBox::StaticRegisterNativesAOpenBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOpenBox);
UClass* Z_Construct_UClass_AOpenBox_NoRegister()
{
	return AOpenBox::StaticClass();
}
struct Z_Construct_UClass_AOpenBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Box/OpenBox.h" },
		{ "ModuleRelativePath", "Public/Items/Box/OpenBox.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOpenBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOpenBox_Statics::ClassParams = {
	&AOpenBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AOpenBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOpenBox()
{
	if (!Z_Registration_Info_UClass_AOpenBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOpenBox.OuterSingleton, Z_Construct_UClass_AOpenBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOpenBox.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AOpenBox>()
{
	return AOpenBox::StaticClass();
}
AOpenBox::AOpenBox() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenBox);
AOpenBox::~AOpenBox() {}
// End Class AOpenBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOpenBox, AOpenBox::StaticClass, TEXT("AOpenBox"), &Z_Registration_Info_UClass_AOpenBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOpenBox), 551377710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_2282580235(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
