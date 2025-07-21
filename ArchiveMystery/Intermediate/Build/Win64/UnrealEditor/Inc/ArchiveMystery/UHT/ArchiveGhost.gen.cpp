// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/ArchiveGhost.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveGhost() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchiveGhost();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchiveGhost_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AArchiveGhost Function OnPlayerEnter
struct Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics
{
	struct ArchiveGhost_eventOnPlayerEnter_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overlap functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ArchiveGhost_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchiveGhost_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchiveGhost, nullptr, "OnPlayerEnter", nullptr, nullptr, Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::ArchiveGhost_eventOnPlayerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::ArchiveGhost_eventOnPlayerEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchiveGhost::execOnPlayerEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AArchiveGhost Function OnPlayerEnter

// Begin Class AArchiveGhost Function OnPlayerExit
struct Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics
{
	struct ArchiveGhost_eventOnPlayerExit_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerExit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchiveGhost_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchiveGhost, nullptr, "OnPlayerExit", nullptr, nullptr, Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::ArchiveGhost_eventOnPlayerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::ArchiveGhost_eventOnPlayerExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchiveGhost_OnPlayerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchiveGhost_OnPlayerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchiveGhost::execOnPlayerExit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerExit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AArchiveGhost Function OnPlayerExit

// Begin Class AArchiveGhost
void AArchiveGhost::StaticRegisterNativesAArchiveGhost()
{
	UClass* Class = AArchiveGhost::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerEnter", &AArchiveGhost::execOnPlayerEnter },
		{ "OnPlayerExit", &AArchiveGhost::execOnPlayerExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchiveGhost);
UClass* Z_Construct_UClass_AArchiveGhost_NoRegister()
{
	return AArchiveGhost::StaticClass();
}
struct Z_Construct_UClass_AArchiveGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/ArchiveGhost.h" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseDuration_MetaData[] = {
		{ "Category", "Ghost Patrol" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsule_MetaData[] = {
		{ "Category", "Ghost" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ArchiveGhost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PauseDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchiveGhost_OnPlayerEnter, "OnPlayerEnter" }, // 20039480
		{ &Z_Construct_UFunction_AArchiveGhost_OnPlayerExit, "OnPlayerExit" }, // 576745513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchiveGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoints_MetaData), NewProp_TargetPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_PauseDuration = { "PauseDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, PauseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseDuration_MetaData), NewProp_PauseDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchiveGhost_Statics::NewProp_CollisionCapsule = { "CollisionCapsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchiveGhost, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCapsule_MetaData), NewProp_CollisionCapsule_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchiveGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_TargetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_PauseDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchiveGhost_Statics::NewProp_CollisionCapsule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArchiveGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchiveGhost_Statics::ClassParams = {
	&AArchiveGhost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArchiveGhost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchiveGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchiveGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchiveGhost()
{
	if (!Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton, Z_Construct_UClass_AArchiveGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchiveGhost.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AArchiveGhost>()
{
	return AArchiveGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchiveGhost);
AArchiveGhost::~AArchiveGhost() {}
// End Class AArchiveGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchiveGhost, AArchiveGhost::StaticClass, TEXT("AArchiveGhost"), &Z_Registration_Info_UClass_AArchiveGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchiveGhost), 4273072188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_656729759(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Character_ArchiveGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
