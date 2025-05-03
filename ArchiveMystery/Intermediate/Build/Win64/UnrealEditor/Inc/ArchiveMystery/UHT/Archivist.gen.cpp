// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Character/Archivist.h"
#include "ArchiveMystery/Public/Character/PaintingInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivist() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchivist();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AArchivist_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADocumentItem_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AOpenBox_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_ECharacterState();
ARCHIVEMYSTERY_API UScriptStruct* Z_Construct_UScriptStruct_FPaintingInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_ECharacterState, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_EquippedOneHandedBox.DisplayName", "Equipped One-Handed Box" },
		{ "ECS_EquippedOneHandedBox.Name", "ECharacterState::ECS_EquippedOneHandedBox" },
		{ "ECS_Unequipped.DisplayName", "Unequipped" },
		{ "ECS_Unequipped.Name", "ECharacterState::ECS_Unequipped" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Unequipped", (int64)ECharacterState::ECS_Unequipped },
		{ "ECharacterState::ECS_EquippedOneHandedBox", (int64)ECharacterState::ECS_EquippedOneHandedBox },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Class AArchivist Function DeliverDocuments
struct Z_Construct_UFunction_AArchivist_DeliverDocuments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_DeliverDocuments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "DeliverDocuments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_DeliverDocuments_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_DeliverDocuments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArchivist_DeliverDocuments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_DeliverDocuments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execDeliverDocuments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeliverDocuments();
	P_NATIVE_END;
}
// End Class AArchivist Function DeliverDocuments

// Begin Class AArchivist Function OnDropZoneBeginOverlap
struct Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics
{
	struct Archivist_eventOnDropZoneBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnDropZoneBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnDropZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnDropZoneBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::Archivist_eventOnDropZoneBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::Archivist_eventOnDropZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnDropZoneBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropZoneBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnDropZoneBeginOverlap

// Begin Class AArchivist Function OnDropZoneEndOverlap
struct Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics
{
	struct Archivist_eventOnDropZoneEndOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnDropZoneEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnDropZoneEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnDropZoneEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::Archivist_eventOnDropZoneEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::Archivist_eventOnDropZoneEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnDropZoneEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropZoneEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnDropZoneEndOverlap

// Begin Class AArchivist Function OnOverlapBegin
struct Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics
{
	struct Archivist_eventOnOverlapBegin_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::Archivist_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::Archivist_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnOverlapBegin

// Begin Class AArchivist Function OnOverlapEnd
struct Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics
{
	struct Archivist_eventOnOverlapEnd_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::Archivist_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::Archivist_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnOverlapEnd)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnOverlapEnd

// Begin Class AArchivist Function OnPaintingTriggerBeginOverlap
struct Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics
{
	struct Archivist_eventOnPaintingTriggerBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnPaintingTriggerBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnPaintingTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnPaintingTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::Archivist_eventOnPaintingTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::Archivist_eventOnPaintingTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnPaintingTriggerBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPaintingTriggerBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnPaintingTriggerBeginOverlap

// Begin Class AArchivist Function OnPaintingTriggerEndOverlap
struct Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics
{
	struct Archivist_eventOnPaintingTriggerEndOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnPaintingTriggerEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Archivist_eventOnPaintingTriggerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "OnPaintingTriggerEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::Archivist_eventOnPaintingTriggerEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::Archivist_eventOnPaintingTriggerEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execOnPaintingTriggerEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPaintingTriggerEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AArchivist Function OnPaintingTriggerEndOverlap

// Begin Class AArchivist Function RestoreGameplayInput
struct Z_Construct_UFunction_AArchivist_RestoreGameplayInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchivist_RestoreGameplayInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchivist, nullptr, "RestoreGameplayInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchivist_RestoreGameplayInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchivist_RestoreGameplayInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArchivist_RestoreGameplayInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchivist_RestoreGameplayInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchivist::execRestoreGameplayInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreGameplayInput();
	P_NATIVE_END;
}
// End Class AArchivist Function RestoreGameplayInput

// Begin Class AArchivist
void AArchivist::StaticRegisterNativesAArchivist()
{
	UClass* Class = AArchivist::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeliverDocuments", &AArchivist::execDeliverDocuments },
		{ "OnDropZoneBeginOverlap", &AArchivist::execOnDropZoneBeginOverlap },
		{ "OnDropZoneEndOverlap", &AArchivist::execOnDropZoneEndOverlap },
		{ "OnOverlapBegin", &AArchivist::execOnOverlapBegin },
		{ "OnOverlapEnd", &AArchivist::execOnOverlapEnd },
		{ "OnPaintingTriggerBeginOverlap", &AArchivist::execOnPaintingTriggerBeginOverlap },
		{ "OnPaintingTriggerEndOverlap", &AArchivist::execOnPaintingTriggerEndOverlap },
		{ "RestoreGameplayInput", &AArchivist::execRestoreGameplayInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchivist);
UClass* Z_Construct_UClass_AArchivist_NoRegister()
{
	return AArchivist::StaticClass();
}
struct Z_Construct_UClass_AArchivist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Archivist.h" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[] = {
		{ "Category", "Archivist" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSnapTarget_MetaData[] = {
		{ "Category", "Drop Zone" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlacedBox_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedShreddedPaperMinigame_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedMoldMinigame_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasScannedDocuments_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til Widget Blueprint-klassen for startmenyen\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til Widget Blueprint-klassen for startmenyen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxToPlaceBeforeMinigame_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Archivist" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera properties\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItems_MetaData[] = {
		{ "Category", "Archivist" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterMinigameAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameTriggerBox_MetaData[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigamePromptWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtPaintingAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legg til en ny InputAction\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legg til en ny InputAction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paintings_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variabel som holder en liste over malere\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variabel som holder en liste over malere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legg til en ny InputAction\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legg til en ny InputAction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropZone_MetaData[] = {
		{ "Category", "Drop Zone" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentPopupWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget to show document info\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget to show document info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondDocumentPopupWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget to show second document info\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget to show second document info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpDocument1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Document references\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Document references" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpDocument2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomActor_MetaData[] = {
		{ "Category", "Archivist" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til pause-menyen\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til pause-menyen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referanse til Widget Blueprint-klassen for pause-menyen\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Archivist.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referanse til Widget Blueprint-klassen for pause-menyen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxSnapTarget;
	static void NewProp_bHasPlacedBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlacedBox;
	static void NewProp_bHasFinishedShreddedPaperMinigame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedShreddedPaperMinigame;
	static void NewProp_bHasFinishedMoldMinigame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedMoldMinigame;
	static void NewProp_bHasScannedDocuments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasScannedDocuments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxToPlaceBeforeMinigame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterMinigameAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameTriggerBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MinigamePromptWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSavedLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAtPaintingAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Paintings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paintings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropZone;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DocumentPopupWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SecondDocumentPopupWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickedUpDocument1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickedUpDocument2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchivist_DeliverDocuments, "DeliverDocuments" }, // 1406114458
		{ &Z_Construct_UFunction_AArchivist_OnDropZoneBeginOverlap, "OnDropZoneBeginOverlap" }, // 4250170403
		{ &Z_Construct_UFunction_AArchivist_OnDropZoneEndOverlap, "OnDropZoneEndOverlap" }, // 3078359314
		{ &Z_Construct_UFunction_AArchivist_OnOverlapBegin, "OnOverlapBegin" }, // 2319463320
		{ &Z_Construct_UFunction_AArchivist_OnOverlapEnd, "OnOverlapEnd" }, // 3670328540
		{ &Z_Construct_UFunction_AArchivist_OnPaintingTriggerBeginOverlap, "OnPaintingTriggerBeginOverlap" }, // 3783532402
		{ &Z_Construct_UFunction_AArchivist_OnPaintingTriggerEndOverlap, "OnPaintingTriggerEndOverlap" }, // 3220247766
		{ &Z_Construct_UFunction_AArchivist_RestoreGameplayInput, "RestoreGameplayInput" }, // 2310878573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchivist>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewCamera_MetaData), NewProp_ViewCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_BoxSnapTarget = { "BoxSnapTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, BoxSnapTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSnapTarget_MetaData), NewProp_BoxSnapTarget_MetaData) };
void Z_Construct_UClass_AArchivist_Statics::NewProp_bHasPlacedBox_SetBit(void* Obj)
{
	((AArchivist*)Obj)->bHasPlacedBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_bHasPlacedBox = { "bHasPlacedBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArchivist), &Z_Construct_UClass_AArchivist_Statics::NewProp_bHasPlacedBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPlacedBox_MetaData), NewProp_bHasPlacedBox_MetaData) };
void Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedShreddedPaperMinigame_SetBit(void* Obj)
{
	((AArchivist*)Obj)->bHasFinishedShreddedPaperMinigame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedShreddedPaperMinigame = { "bHasFinishedShreddedPaperMinigame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArchivist), &Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedShreddedPaperMinigame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFinishedShreddedPaperMinigame_MetaData), NewProp_bHasFinishedShreddedPaperMinigame_MetaData) };
void Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedMoldMinigame_SetBit(void* Obj)
{
	((AArchivist*)Obj)->bHasFinishedMoldMinigame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedMoldMinigame = { "bHasFinishedMoldMinigame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArchivist), &Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedMoldMinigame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFinishedMoldMinigame_MetaData), NewProp_bHasFinishedMoldMinigame_MetaData) };
void Z_Construct_UClass_AArchivist_Statics::NewProp_bHasScannedDocuments_SetBit(void* Obj)
{
	((AArchivist*)Obj)->bHasScannedDocuments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_bHasScannedDocuments = { "bHasScannedDocuments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArchivist), &Z_Construct_UClass_AArchivist_Statics::NewProp_bHasScannedDocuments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasScannedDocuments_MetaData), NewProp_bHasScannedDocuments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_CharacterMappingContext = { "CharacterMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, CharacterMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMappingContext_MetaData), NewProp_CharacterMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_RunAction = { "RunAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, RunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAction_MetaData), NewProp_RunAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PickUpAction = { "PickUpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PickUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpAction_MetaData), NewProp_PickUpAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, MainMenuWidget), Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_BoxToPlaceBeforeMinigame = { "BoxToPlaceBeforeMinigame", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, BoxToPlaceBeforeMinigame), Z_Construct_UClass_AOpenBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxToPlaceBeforeMinigame_MetaData), NewProp_BoxToPlaceBeforeMinigame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_OverlappingItems = { "OverlappingItems", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, OverlappingItems), Z_Construct_UClass_AItems_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingItems_MetaData), NewProp_OverlappingItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_EnterMinigameAction = { "EnterMinigameAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, EnterMinigameAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterMinigameAction_MetaData), NewProp_EnterMinigameAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_MinigameTriggerBox = { "MinigameTriggerBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, MinigameTriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameTriggerBox_MetaData), NewProp_MinigameTriggerBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_MinigamePromptWidgetClass = { "MinigamePromptWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, MinigamePromptWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigamePromptWidgetClass_MetaData), NewProp_MinigamePromptWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_LastSavedLocation = { "LastSavedLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, LastSavedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSavedLocation_MetaData), NewProp_LastSavedLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_LookAtPaintingAction = { "LookAtPaintingAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, LookAtPaintingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtPaintingAction_MetaData), NewProp_LookAtPaintingAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_Paintings_Inner = { "Paintings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaintingInfo, METADATA_PARAMS(0, nullptr) }; // 2745162639
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_Paintings = { "Paintings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, Paintings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paintings_MetaData), NewProp_Paintings_MetaData) }; // 2745162639
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseAction_MetaData), NewProp_PauseAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_DropZone = { "DropZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, DropZone), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropZone_MetaData), NewProp_DropZone_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_DocumentPopupWidgetClass = { "DocumentPopupWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, DocumentPopupWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentPopupWidgetClass_MetaData), NewProp_DocumentPopupWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_SecondDocumentPopupWidgetClass = { "SecondDocumentPopupWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, SecondDocumentPopupWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondDocumentPopupWidgetClass_MetaData), NewProp_SecondDocumentPopupWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PickedUpDocument1 = { "PickedUpDocument1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PickedUpDocument1), Z_Construct_UClass_ADocumentItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickedUpDocument1_MetaData), NewProp_PickedUpDocument1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PickedUpDocument2 = { "PickedUpDocument2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PickedUpDocument2), Z_Construct_UClass_ADocumentItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickedUpDocument2_MetaData), NewProp_PickedUpDocument2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_CustomActor = { "CustomActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, CustomActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomActor_MetaData), NewProp_CustomActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PauseMenuWidget = { "PauseMenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PauseMenuWidget), Z_Construct_UClass_UPauseMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidget_MetaData), NewProp_PauseMenuWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchivist_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchivist, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPauseMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchivist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_BoxSnapTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_bHasPlacedBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedShreddedPaperMinigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_bHasFinishedMoldMinigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_bHasScannedDocuments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_CharacterMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_RunAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PickUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_MainMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_BoxToPlaceBeforeMinigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_OverlappingItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_EnterMinigameAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_MinigameTriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_MinigamePromptWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_LastSavedLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_LookAtPaintingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_Paintings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_Paintings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PauseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_DropZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_DocumentPopupWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_SecondDocumentPopupWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PickedUpDocument1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PickedUpDocument2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_CustomActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PauseMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchivist_Statics::NewProp_PauseMenuWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchivist_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArchivist_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchivist_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchivist_Statics::ClassParams = {
	&AArchivist::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArchivist_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArchivist_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchivist_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchivist_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchivist()
{
	if (!Z_Registration_Info_UClass_AArchivist.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchivist.OuterSingleton, Z_Construct_UClass_AArchivist_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchivist.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AArchivist>()
{
	return AArchivist::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchivist);
AArchivist::~AArchivist() {}
// End Class AArchivist

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 328310748U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchivist, AArchivist::StaticClass, TEXT("AArchivist"), &Z_Registration_Info_UClass_AArchivist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchivist), 2837639226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_1320651735(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
