// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldBrush() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldBrush();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldBrush_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EBrushSize();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum EBrushSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushSize;
static UEnum* EBrushSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBrushSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBrushSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_EBrushSize, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("EBrushSize"));
	}
	return Z_Registration_Info_UEnum_EBrushSize.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EBrushSize>()
{
	return EBrushSize_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Big.DisplayName", "Big" },
		{ "Big.Name", "EBrushSize::Big" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "EBrushSize::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBrushSize::Small", (int64)EBrushSize::Small },
		{ "EBrushSize::Big", (int64)EBrushSize::Big },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"EBrushSize",
	"EBrushSize",
	Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_EBrushSize()
{
	if (!Z_Registration_Info_UEnum_EBrushSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushSize.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_EBrushSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBrushSize.InnerSingleton;
}
// End Enum EBrushSize

// Begin Class AMoldBrush Function OnBrushSoundFinished
struct Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldBrush, nullptr, "OnBrushSoundFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldBrush::execOnBrushSoundFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBrushSoundFinished();
	P_NATIVE_END;
}
// End Class AMoldBrush Function OnBrushSoundFinished

// Begin Class AMoldBrush
void AMoldBrush::StaticRegisterNativesAMoldBrush()
{
	UClass* Class = AMoldBrush::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBrushSoundFinished", &AMoldBrush::execOnBrushSoundFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoldBrush);
UClass* Z_Construct_UClass_AMoldBrush_NoRegister()
{
	return AMoldBrush::StaticClass();
}
struct Z_Construct_UClass_AMoldBrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mold/MoldBrush.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMesh_MetaData[] = {
		{ "Category", "Brush" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallBrushMesh_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BigBrushMesh_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/Mold/MoldBrush.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallBrushMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BigBrushMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoldBrush_OnBrushSoundFinished, "OnBrushSoundFinished" }, // 3931673102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoldBrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushAudioComponent = { "BrushAudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldBrush, BrushAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushAudioComponent_MetaData), NewProp_BrushAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushSound = { "BrushSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldBrush, BrushSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSound_MetaData), NewProp_BrushSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushMesh = { "BrushMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldBrush, BrushMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMesh_MetaData), NewProp_BrushMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldBrush_Statics::NewProp_SmallBrushMesh = { "SmallBrushMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldBrush, SmallBrushMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallBrushMesh_MetaData), NewProp_SmallBrushMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldBrush_Statics::NewProp_BigBrushMesh = { "BigBrushMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldBrush, BigBrushMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BigBrushMesh_MetaData), NewProp_BigBrushMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoldBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldBrush_Statics::NewProp_BrushMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldBrush_Statics::NewProp_SmallBrushMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldBrush_Statics::NewProp_BigBrushMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldBrush_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoldBrush_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldBrush_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoldBrush_Statics::ClassParams = {
	&AMoldBrush::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoldBrush_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoldBrush_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldBrush_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoldBrush_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoldBrush()
{
	if (!Z_Registration_Info_UClass_AMoldBrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoldBrush.OuterSingleton, Z_Construct_UClass_AMoldBrush_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoldBrush.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMoldBrush>()
{
	return AMoldBrush::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoldBrush);
AMoldBrush::~AMoldBrush() {}
// End Class AMoldBrush

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBrushSize_StaticEnum, TEXT("EBrushSize"), &Z_Registration_Info_UEnum_EBrushSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2650949295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoldBrush, AMoldBrush::StaticClass, TEXT("AMoldBrush"), &Z_Registration_Info_UClass_AMoldBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoldBrush), 2216688892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_2266564865(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
