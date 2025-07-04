// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Items/Document/DocumentItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentItem() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADocumentItem();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADocumentItem_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class ADocumentItem
void ADocumentItem::StaticRegisterNativesADocumentItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADocumentItem);
UClass* Z_Construct_UClass_ADocumentItem_NoRegister()
{
	return ADocumentItem::StaticClass();
}
struct Z_Construct_UClass_ADocumentItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Document/DocumentItem.h" },
		{ "ModuleRelativePath", "Public/Items/Document/DocumentItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentID_MetaData[] = {
		{ "Category", "Document" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ID\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Document/DocumentItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Document/DocumentItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DocumentID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PromptWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADocumentItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADocumentItem_Statics::NewProp_DocumentID = { "DocumentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADocumentItem, DocumentID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentID_MetaData), NewProp_DocumentID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADocumentItem_Statics::NewProp_PromptWidgetClass = { "PromptWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADocumentItem, PromptWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetClass_MetaData), NewProp_PromptWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADocumentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentItem_Statics::NewProp_DocumentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentItem_Statics::NewProp_PromptWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADocumentItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADocumentItem_Statics::ClassParams = {
	&ADocumentItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADocumentItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADocumentItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADocumentItem()
{
	if (!Z_Registration_Info_UClass_ADocumentItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADocumentItem.OuterSingleton, Z_Construct_UClass_ADocumentItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADocumentItem.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ADocumentItem>()
{
	return ADocumentItem::StaticClass();
}
ADocumentItem::ADocumentItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADocumentItem);
ADocumentItem::~ADocumentItem() {}
// End Class ADocumentItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Document_DocumentItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADocumentItem, ADocumentItem::StaticClass, TEXT("ADocumentItem"), &Z_Registration_Info_UClass_ADocumentItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADocumentItem), 2676458282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Document_DocumentItem_h_3423272060(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Document_DocumentItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Document_DocumentItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
