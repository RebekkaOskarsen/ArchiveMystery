// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Door/KeycardItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeycardItem() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AKeycardItem();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AKeycardItem_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EKeycardType();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum EKeycardType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeycardType;
static UEnum* EKeycardType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKeycardType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKeycardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_EKeycardType, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("EKeycardType"));
	}
	return Z_Registration_Info_UEnum_EKeycardType.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EKeycardType>()
{
	return EKeycardType_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoubleDoor.Name", "EKeycardType::DoubleDoor" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKeycardType::DoubleDoor", (int64)EKeycardType::DoubleDoor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"EKeycardType",
	"EKeycardType",
	Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_EKeycardType()
{
	if (!Z_Registration_Info_UEnum_EKeycardType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeycardType.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_EKeycardType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKeycardType.InnerSingleton;
}
// End Enum EKeycardType

// Begin Class AKeycardItem
void AKeycardItem::StaticRegisterNativesAKeycardItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeycardItem);
UClass* Z_Construct_UClass_AKeycardItem_NoRegister()
{
	return AKeycardItem::StaticClass();
}
struct Z_Construct_UClass_AKeycardItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door/KeycardItem.h" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeycardType_MetaData[] = {
		{ "Category", "Keycard" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeycardText_MetaData[] = {
		{ "Category", "KeycardItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Text\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressEWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Press E Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Press E Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sparkle_MetaData[] = {
		{ "Category", "KeycardItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particle\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeycardType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeycardType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeycardText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressEWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sparkle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeycardItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType = { "KeycardType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, KeycardType), Z_Construct_UEnum_ArchiveMystery_EKeycardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeycardType_MetaData), NewProp_KeycardType_MetaData) }; // 3089706930
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardText = { "KeycardText", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, KeycardText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeycardText_MetaData), NewProp_KeycardText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetClass = { "PressEWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, PressEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetClass_MetaData), NewProp_PressEWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_Sparkle = { "Sparkle", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, Sparkle), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sparkle_MetaData), NewProp_Sparkle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeycardItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_Sparkle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeycardItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeycardItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeycardItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeycardItem_Statics::ClassParams = {
	&AKeycardItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKeycardItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeycardItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeycardItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeycardItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeycardItem()
{
	if (!Z_Registration_Info_UClass_AKeycardItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeycardItem.OuterSingleton, Z_Construct_UClass_AKeycardItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeycardItem.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AKeycardItem>()
{
	return AKeycardItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeycardItem);
AKeycardItem::~AKeycardItem() {}
// End Class AKeycardItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKeycardType_StaticEnum, TEXT("EKeycardType"), &Z_Registration_Info_UEnum_EKeycardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3089706930U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeycardItem, AKeycardItem::StaticClass, TEXT("AKeycardItem"), &Z_Registration_Info_UClass_AKeycardItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeycardItem), 1986141364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_2001807195(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
