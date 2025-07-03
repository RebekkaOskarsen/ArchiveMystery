// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/Mold.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMold() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMold();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMold_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldMinigame_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EMoldSize();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum EMoldSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoldSize;
static UEnum* EMoldSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoldSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoldSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_EMoldSize, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("EMoldSize"));
	}
	return Z_Registration_Info_UEnum_EMoldSize.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EMoldSize>()
{
	return EMoldSize_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Big.DisplayName", "Big" },
		{ "Big.Name", "EMoldSize::Big" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "EMoldSize::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoldSize::Small", (int64)EMoldSize::Small },
		{ "EMoldSize::Big", (int64)EMoldSize::Big },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"EMoldSize",
	"EMoldSize",
	Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_EMoldSize()
{
	if (!Z_Registration_Info_UEnum_EMoldSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoldSize.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_EMoldSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoldSize.InnerSingleton;
}
// End Enum EMoldSize

// Begin Class AMold
void AMold::StaticRegisterNativesAMold()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMold);
UClass* Z_Construct_UClass_AMold_NoRegister()
{
	return AMold::StaticClass();
}
struct Z_Construct_UClass_AMold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mold/Mold.h" },
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldMesh_MetaData[] = {
		{ "Category", "Mold" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldHealth_MetaData[] = {
		{ "Category", "Mold" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Mold" },
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHealth_MetaData[] = {
		{ "Category", "Mold" },
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaperIndex_MetaData[] = {
		{ "Category", "Mold" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores which paper this mold belongs to\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores which paper this mold belongs to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldMinigameRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparkleEffect_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Particle: Isnt sparkle anymore, but more like dust\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/Mold.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle: Isnt sparkle anymore, but more like dust" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PaperIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldMinigameRef;
	static void NewProp_bIsDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparkleEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMold>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_MoldMesh = { "MoldMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, MoldMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldMesh_MetaData), NewProp_MoldMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_MoldHealth = { "MoldHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, MoldHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldHealth_MetaData), NewProp_MoldHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_MinHealth = { "MinHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, MinHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHealth_MetaData), NewProp_MinHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_PaperIndex = { "PaperIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, PaperIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaperIndex_MetaData), NewProp_PaperIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_MoldMinigameRef = { "MoldMinigameRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, MoldMinigameRef), Z_Construct_UClass_AMoldMinigame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldMinigameRef_MetaData), NewProp_MoldMinigameRef_MetaData) };
void Z_Construct_UClass_AMold_Statics::NewProp_bIsDestroyed_SetBit(void* Obj)
{
	((AMold*)Obj)->bIsDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_bIsDestroyed = { "bIsDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMold), &Z_Construct_UClass_AMold_Statics::NewProp_bIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDestroyed_MetaData), NewProp_bIsDestroyed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMold_Statics::NewProp_SparkleEffect = { "SparkleEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMold, SparkleEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparkleEffect_MetaData), NewProp_SparkleEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_MoldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_MoldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_MinHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_PaperIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_MoldMinigameRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_bIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMold_Statics::NewProp_SparkleEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMold_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMold_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMold_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMold_Statics::ClassParams = {
	&AMold::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMold_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMold_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMold_Statics::Class_MetaDataParams), Z_Construct_UClass_AMold_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMold()
{
	if (!Z_Registration_Info_UClass_AMold.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMold.OuterSingleton, Z_Construct_UClass_AMold_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMold.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMold>()
{
	return AMold::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMold);
AMold::~AMold() {}
// End Class AMold

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoldSize_StaticEnum, TEXT("EMoldSize"), &Z_Registration_Info_UEnum_EMoldSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851508461U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMold, AMold::StaticClass, TEXT("AMold"), &Z_Registration_Info_UClass_AMold, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMold), 189272060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_550287536(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_torsdag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
