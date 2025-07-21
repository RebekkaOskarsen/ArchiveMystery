// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/QuestMarker/QuestMarker.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestMarker() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AQuestMarker();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AQuestMarker_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AQuestMarker Function ActivateMarker
struct Z_Construct_UFunction_AQuestMarker_ActivateMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestMarker_ActivateMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestMarker, nullptr, "ActivateMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestMarker_ActivateMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuestMarker_ActivateMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AQuestMarker_ActivateMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestMarker_ActivateMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuestMarker::execActivateMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateMarker();
	P_NATIVE_END;
}
// End Class AQuestMarker Function ActivateMarker

// Begin Class AQuestMarker Function OnTriggerEnter
struct Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics
{
	struct QuestMarker_eventOnTriggerEnter_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 BodyIdx;
		bool bFromSweep;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyIdx;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestMarker_eventOnTriggerEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestMarker_eventOnTriggerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestMarker_eventOnTriggerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_BodyIdx = { "BodyIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestMarker_eventOnTriggerEnter_Parms, BodyIdx), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((QuestMarker_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestMarker_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestMarker_eventOnTriggerEnter_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_BodyIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestMarker, nullptr, "OnTriggerEnter", nullptr, nullptr, Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::QuestMarker_eventOnTriggerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::QuestMarker_eventOnTriggerEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQuestMarker_OnTriggerEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestMarker_OnTriggerEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQuestMarker::execOnTriggerEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_BodyIdx);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_BodyIdx,Z_Param_bFromSweep,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AQuestMarker Function OnTriggerEnter

// Begin Class AQuestMarker
void AQuestMarker::StaticRegisterNativesAQuestMarker()
{
	UClass* Class = AQuestMarker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateMarker", &AQuestMarker::execActivateMarker },
		{ "OnTriggerEnter", &AQuestMarker::execOnTriggerEnter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestMarker);
UClass* Z_Construct_UClass_AQuestMarker_NoRegister()
{
	return AQuestMarker::StaticClass();
}
struct Z_Construct_UClass_AQuestMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "QuestMarker/QuestMarker.h" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartActive_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerWidget_MetaData[] = {
		{ "Category", "QuestMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerID_MetaData[] = {
		{ "Category", "QuestMarker" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "QuestMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[] = {
		{ "Category", "QuestMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestMarker/QuestMarker.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStartActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestMarker_ActivateMarker, "ActivateMarker" }, // 3475406206
		{ &Z_Construct_UFunction_AQuestMarker_OnTriggerEnter, "OnTriggerEnter" }, // 1585472081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AQuestMarker_Statics::NewProp_bStartActive_SetBit(void* Obj)
{
	((AQuestMarker*)Obj)->bStartActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestMarker_Statics::NewProp_bStartActive = { "bStartActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQuestMarker), &Z_Construct_UClass_AQuestMarker_Statics::NewProp_bStartActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartActive_MetaData), NewProp_bStartActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestMarker_Statics::NewProp_MarkerWidget = { "MarkerWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuestMarker, MarkerWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerWidget_MetaData), NewProp_MarkerWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AQuestMarker_Statics::NewProp_MarkerID = { "MarkerID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuestMarker, MarkerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerID_MetaData), NewProp_MarkerID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestMarker_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuestMarker, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestMarker_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuestMarker, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trigger_MetaData), NewProp_Trigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestMarker_Statics::NewProp_bStartActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestMarker_Statics::NewProp_MarkerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestMarker_Statics::NewProp_MarkerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestMarker_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestMarker_Statics::NewProp_Trigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AQuestMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestMarker_Statics::ClassParams = {
	&AQuestMarker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AQuestMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AQuestMarker_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuestMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuestMarker()
{
	if (!Z_Registration_Info_UClass_AQuestMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestMarker.OuterSingleton, Z_Construct_UClass_AQuestMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuestMarker.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AQuestMarker>()
{
	return AQuestMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestMarker);
AQuestMarker::~AQuestMarker() {}
// End Class AQuestMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_QuestMarker_QuestMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuestMarker, AQuestMarker::StaticClass, TEXT("AQuestMarker"), &Z_Registration_Info_UClass_AQuestMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestMarker), 3701399956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_QuestMarker_QuestMarker_h_1332372996(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_QuestMarker_QuestMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_QuestMarker_QuestMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
