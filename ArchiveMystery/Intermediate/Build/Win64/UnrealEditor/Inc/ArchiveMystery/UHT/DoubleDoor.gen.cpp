// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Door/DoubleDoor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoubleDoor() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADoubleDoor();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ADoubleDoor_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EDoorType();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum EDoorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorType;
static UEnum* EDoorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_EDoorType, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("EDoorType"));
	}
	return Z_Registration_Info_UEnum_EDoorType.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EDoorType>()
{
	return EDoorType_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoubleDoor.Name", "EDoorType::DoubleDoor" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorType::DoubleDoor", (int64)EDoorType::DoubleDoor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"EDoorType",
	"EDoorType",
	Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_EDoorType()
{
	if (!Z_Registration_Info_UEnum_EDoorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorType.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_EDoorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorType.InnerSingleton;
}
// End Enum EDoorType

// Begin Class ADoubleDoor Function OnBoxBeginOverlap
struct Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics
{
	struct DoubleDoor_eventOnBoxBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DoubleDoor_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoubleDoor_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoubleDoor, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::DoubleDoor_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::DoubleDoor_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoubleDoor::execOnBoxBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADoubleDoor Function OnBoxBeginOverlap

// Begin Class ADoubleDoor Function OnBoxEndOverlap
struct Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics
{
	struct DoubleDoor_eventOnBoxEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoubleDoor_eventOnBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoubleDoor, nullptr, "OnBoxEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::DoubleDoor_eventOnBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::DoubleDoor_eventOnBoxEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoubleDoor::execOnBoxEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ADoubleDoor Function OnBoxEndOverlap

// Begin Class ADoubleDoor
void ADoubleDoor::StaticRegisterNativesADoubleDoor()
{
	UClass* Class = ADoubleDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBoxBeginOverlap", &ADoubleDoor::execOnBoxBeginOverlap },
		{ "OnBoxEndOverlap", &ADoubleDoor::execOnBoxEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoubleDoor);
UClass* Z_Construct_UClass_ADoubleDoor_NoRegister()
{
	return ADoubleDoor::StaticClass();
}
struct Z_Construct_UClass_ADoubleDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door/DoubleDoor.h" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
		{ "Category", "DoubleDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[] = {
		{ "Category", "DoubleDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[] = {
		{ "Category", "DoubleDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "Category", "DoubleDoor" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "DoubleDoor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Door opening\n" },
#endif
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door opening" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenSpeed_MetaData[] = {
		{ "Category", "DoubleDoor" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBeforeClose_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionBox_MetaData[] = {
		{ "Category", "DoubleDoor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedText_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Text\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextVisibleDuration_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleDoorLockedText_MetaData[] = {
		{ "Category", "Localization" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericLockedText_MetaData[] = {
		{ "Category", "Localization" },
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressEWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Press E Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Door/DoubleDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Press E Widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBeforeClose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextVisibleDuration;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DoubleDoorLockedText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GenericLockedText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressEWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoubleDoor_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 336364866
		{ &Z_Construct_UFunction_ADoubleDoor_OnBoxEndOverlap, "OnBoxEndOverlap" }, // 1437845858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoubleDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoor_MetaData), NewProp_LeftDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoor_MetaData), NewProp_RightDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorFrame_MetaData), NewProp_DoorFrame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, DoorType), Z_Construct_UEnum_ArchiveMystery_EDoorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) }; // 3810525448
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_OpenSpeed = { "OpenSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, OpenSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenSpeed_MetaData), NewProp_OpenSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_TimeBeforeClose = { "TimeBeforeClose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, TimeBeforeClose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBeforeClose_MetaData), NewProp_TimeBeforeClose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_InteractionBox = { "InteractionBox", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, InteractionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionBox_MetaData), NewProp_InteractionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, InteractingPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingPlayer_MetaData), NewProp_InteractingPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_LockedText = { "LockedText", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, LockedText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedText_MetaData), NewProp_LockedText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_TextVisibleDuration = { "TextVisibleDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, TextVisibleDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextVisibleDuration_MetaData), NewProp_TextVisibleDuration_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoubleDoorLockedText = { "DoubleDoorLockedText", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, DoubleDoorLockedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleDoorLockedText_MetaData), NewProp_DoubleDoorLockedText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_GenericLockedText = { "GenericLockedText", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, GenericLockedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericLockedText_MetaData), NewProp_GenericLockedText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADoubleDoor_Statics::NewProp_PressEWidgetClass = { "PressEWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoubleDoor, PressEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetClass_MetaData), NewProp_PressEWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoubleDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_LeftDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_RightDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_OpenSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_TimeBeforeClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_InteractionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_InteractingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_LockedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_TextVisibleDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_DoubleDoorLockedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_GenericLockedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleDoor_Statics::NewProp_PressEWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoubleDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoubleDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoubleDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoubleDoor_Statics::ClassParams = {
	&ADoubleDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoubleDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoubleDoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoubleDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoubleDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoubleDoor()
{
	if (!Z_Registration_Info_UClass_ADoubleDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoubleDoor.OuterSingleton, Z_Construct_UClass_ADoubleDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoubleDoor.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ADoubleDoor>()
{
	return ADoubleDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoubleDoor);
ADoubleDoor::~ADoubleDoor() {}
// End Class ADoubleDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDoorType_StaticEnum, TEXT("EDoorType"), &Z_Registration_Info_UEnum_EDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3810525448U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoubleDoor, ADoubleDoor::StaticClass, TEXT("ADoubleDoor"), &Z_Registration_Info_UClass_ADoubleDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoubleDoor), 1309104436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_3652328756(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
