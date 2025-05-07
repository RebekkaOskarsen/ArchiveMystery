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
		{ "Archive.Name", "EKeycardType::Archive" },
		{ "BlueprintType", "true" },
		{ "Equipment.Name", "EKeycardType::Equipment" },
		{ "Garage.Name", "EKeycardType::Garage" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKeycardType::Garage", (int64)EKeycardType::Garage },
		{ "EKeycardType::Archive", (int64)EKeycardType::Archive },
		{ "EKeycardType::Equipment", (int64)EKeycardType::Equipment },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeycardType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeycardType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeycardItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType = { "KeycardType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, KeycardType), Z_Construct_UEnum_ArchiveMystery_EKeycardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeycardType_MetaData), NewProp_KeycardType_MetaData) }; // 1242456910
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeycardItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType,
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
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKeycardType_StaticEnum, TEXT("EKeycardType"), &Z_Registration_Info_UEnum_EKeycardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1242456910U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeycardItem, AKeycardItem::StaticClass, TEXT("AKeycardItem"), &Z_Registration_Info_UClass_AKeycardItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeycardItem), 3551706811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_3997459243(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
