// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Door/KeycardItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeycardItem() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AKeycardItem();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AKeycardItem_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EKeycardType();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
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

// Begin Class AKeycardItem Function OnOutlineBegin
struct Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics
{
	struct KeycardItem_eventOnOutlineBegin_Parms
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
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((KeycardItem_eventOnOutlineBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeycardItem_eventOnOutlineBegin_Parms), &Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeycardItem, nullptr, "OnOutlineBegin", nullptr, nullptr, Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::KeycardItem_eventOnOutlineBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::KeycardItem_eventOnOutlineBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKeycardItem_OnOutlineBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeycardItem_OnOutlineBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeycardItem::execOnOutlineBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOutlineBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AKeycardItem Function OnOutlineBegin

// Begin Class AKeycardItem Function OnOutlineEnd
struct Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics
{
	struct KeycardItem_eventOnOutlineEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeycardItem_eventOnOutlineEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeycardItem, nullptr, "OnOutlineEnd", nullptr, nullptr, Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::KeycardItem_eventOnOutlineEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::KeycardItem_eventOnOutlineEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKeycardItem_OnOutlineEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeycardItem_OnOutlineEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeycardItem::execOnOutlineEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOutlineEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AKeycardItem Function OnOutlineEnd

// Begin Class AKeycardItem
void AKeycardItem::StaticRegisterNativesAKeycardItem()
{
	UClass* Class = AKeycardItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOutlineBegin", &AKeycardItem::execOnOutlineBegin },
		{ "OnOutlineEnd", &AKeycardItem::execOnOutlineEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressEWidgetComponent_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineTrigger_MetaData[] = {
		{ "Category", "KeycardItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/KeycardItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeycardType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeycardType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeycardText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressEWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressEWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKeycardItem_OnOutlineBegin, "OnOutlineBegin" }, // 805018208
		{ &Z_Construct_UFunction_AKeycardItem_OnOutlineEnd, "OnOutlineEnd" }, // 2929515508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeycardItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType = { "KeycardType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, KeycardType), Z_Construct_UEnum_ArchiveMystery_EKeycardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeycardType_MetaData), NewProp_KeycardType_MetaData) }; // 3089706930
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardText = { "KeycardText", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, KeycardText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeycardText_MetaData), NewProp_KeycardText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetClass = { "PressEWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, PressEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetClass_MetaData), NewProp_PressEWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetComponent = { "PressEWidgetComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, PressEWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetComponent_MetaData), NewProp_PressEWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeycardItem_Statics::NewProp_OutlineTrigger = { "OutlineTrigger", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeycardItem, OutlineTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineTrigger_MetaData), NewProp_OutlineTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeycardItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_KeycardText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_PressEWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeycardItem_Statics::NewProp_OutlineTrigger,
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
	FuncInfo,
	Z_Construct_UClass_AKeycardItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKeycardType_StaticEnum, TEXT("EKeycardType"), &Z_Registration_Info_UEnum_EKeycardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3089706930U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeycardItem, AKeycardItem::StaticClass, TEXT("AKeycardItem"), &Z_Registration_Info_UClass_AKeycardItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeycardItem), 322586207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_2317584334(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
