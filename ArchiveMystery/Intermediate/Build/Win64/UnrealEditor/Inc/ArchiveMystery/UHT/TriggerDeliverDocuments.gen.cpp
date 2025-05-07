// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Scanner/TriggerDeliverDocuments.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDeliverDocuments() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ATriggerDeliverDocuments();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ATriggerDeliverDocuments_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class ATriggerDeliverDocuments Function OnOverlapBegin
struct Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics
{
	struct TriggerDeliverDocuments_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions for overlap\n" },
#endif
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions for overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerDeliverDocuments_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerDeliverDocuments_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDeliverDocuments, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::TriggerDeliverDocuments_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::TriggerDeliverDocuments_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerDeliverDocuments::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ATriggerDeliverDocuments Function OnOverlapBegin

// Begin Class ATriggerDeliverDocuments Function OnOverlapEnd
struct Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics
{
	struct TriggerDeliverDocuments_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerDeliverDocuments_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerDeliverDocuments, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::TriggerDeliverDocuments_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::TriggerDeliverDocuments_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerDeliverDocuments::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ATriggerDeliverDocuments Function OnOverlapEnd

// Begin Class ATriggerDeliverDocuments
void ATriggerDeliverDocuments::StaticRegisterNativesATriggerDeliverDocuments()
{
	UClass* Class = ATriggerDeliverDocuments::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ATriggerDeliverDocuments::execOnOverlapBegin },
		{ "OnOverlapEnd", &ATriggerDeliverDocuments::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerDeliverDocuments);
UClass* Z_Construct_UClass_ATriggerDeliverDocuments_NoRegister()
{
	return ATriggerDeliverDocuments::StaticClass();
}
struct Z_Construct_UClass_ATriggerDeliverDocuments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Scanner/TriggerDeliverDocuments.h" },
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "TriggerDeliverDocuments" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliverDocumentsWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliverDocumentsWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressEWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Scanner/TriggerDeliverDocuments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeliverDocumentsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeliverDocumentsWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressEWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapBegin, "OnOverlapBegin" }, // 2744915002
		{ &Z_Construct_UFunction_ATriggerDeliverDocuments_OnOverlapEnd, "OnOverlapEnd" }, // 904150268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerDeliverDocuments>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDeliverDocuments, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_DeliverDocumentsWidgetClass = { "DeliverDocumentsWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDeliverDocuments, DeliverDocumentsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliverDocumentsWidgetClass_MetaData), NewProp_DeliverDocumentsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_DeliverDocumentsWidgetInstance = { "DeliverDocumentsWidgetInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDeliverDocuments, DeliverDocumentsWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliverDocumentsWidgetInstance_MetaData), NewProp_DeliverDocumentsWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_PressEWidgetClass = { "PressEWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDeliverDocuments, PressEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetClass_MetaData), NewProp_PressEWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerDeliverDocuments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_DeliverDocumentsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_DeliverDocumentsWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDeliverDocuments_Statics::NewProp_PressEWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDeliverDocuments_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATriggerDeliverDocuments_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDeliverDocuments_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerDeliverDocuments_Statics::ClassParams = {
	&ATriggerDeliverDocuments::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATriggerDeliverDocuments_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDeliverDocuments_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDeliverDocuments_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerDeliverDocuments_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATriggerDeliverDocuments()
{
	if (!Z_Registration_Info_UClass_ATriggerDeliverDocuments.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerDeliverDocuments.OuterSingleton, Z_Construct_UClass_ATriggerDeliverDocuments_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerDeliverDocuments.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ATriggerDeliverDocuments>()
{
	return ATriggerDeliverDocuments::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerDeliverDocuments);
ATriggerDeliverDocuments::~ATriggerDeliverDocuments() {}
// End Class ATriggerDeliverDocuments

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerDeliverDocuments_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerDeliverDocuments, ATriggerDeliverDocuments::StaticClass, TEXT("ATriggerDeliverDocuments"), &Z_Registration_Info_UClass_ATriggerDeliverDocuments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerDeliverDocuments), 2747872581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerDeliverDocuments_h_979371008(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerDeliverDocuments_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerDeliverDocuments_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
