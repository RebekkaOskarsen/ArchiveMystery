// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldMinigame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldMinigame() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldMinigame();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldMinigame_NoRegister();
ARCHIVEMYSTERY_API UEnum* Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Enum EMoldDifficulty
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoldDifficulty;
static UEnum* EMoldDifficulty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoldDifficulty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoldDifficulty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty, (UObject*)Z_Construct_UPackage__Script_ArchiveMystery(), TEXT("EMoldDifficulty"));
	}
	return Z_Registration_Info_UEnum_EMoldDifficulty.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EMoldDifficulty>()
{
	return EMoldDifficulty_StaticEnum();
}
struct Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Easy.DisplayName", "Easy" },
		{ "Easy.Name", "EMoldDifficulty::Easy" },
		{ "Hard.DisplayName", "Hard" },
		{ "Hard.Name", "EMoldDifficulty::Hard" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoldDifficulty::Easy", (int64)EMoldDifficulty::Easy },
		{ "EMoldDifficulty::Hard", (int64)EMoldDifficulty::Hard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchiveMystery,
	nullptr,
	"EMoldDifficulty",
	"EMoldDifficulty",
	Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty()
{
	if (!Z_Registration_Info_UEnum_EMoldDifficulty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoldDifficulty.InnerSingleton, Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoldDifficulty.InnerSingleton;
}
// End Enum EMoldDifficulty

// Begin Class AMoldMinigame Function EnableBrushing
struct Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "EnableBrushing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_EnableBrushing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execEnableBrushing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableBrushing();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function EnableBrushing

// Begin Class AMoldMinigame Function OnExitClicked
struct Z_Construct_UFunction_AMoldMinigame_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function OnExitClicked

// Begin Class AMoldMinigame Function OnHardModeTimeExpired
struct Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "OnHardModeTimeExpired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execOnHardModeTimeExpired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHardModeTimeExpired();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function OnHardModeTimeExpired

// Begin Class AMoldMinigame Function OnResumeClicked
struct Z_Construct_UFunction_AMoldMinigame_OnResumeClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "OnResumeClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_OnResumeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_OnResumeClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_OnResumeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_OnResumeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execOnResumeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResumeClicked();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function OnResumeClicked

// Begin Class AMoldMinigame Function OnTryAgainClicked
struct Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "OnTryAgainClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execOnTryAgainClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTryAgainClicked();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function OnTryAgainClicked

// Begin Class AMoldMinigame Function ShowTutorial
struct Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "ShowTutorial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_ShowTutorial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execShowTutorial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTutorial();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function ShowTutorial

// Begin Class AMoldMinigame Function StartGame
struct Z_Construct_UFunction_AMoldMinigame_StartGame_Statics
{
	struct MoldMinigame_eventStartGame_Parms
	{
		EMoldDifficulty Difficulty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoldMinigame_eventStartGame_Parms, Difficulty), Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty, METADATA_PARAMS(0, nullptr) }; // 4088753855
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::NewProp_Difficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::NewProp_Difficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "StartGame", nullptr, nullptr, Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::MoldMinigame_eventStartGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::MoldMinigame_eventStartGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoldMinigame_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execStartGame)
{
	P_GET_ENUM(EMoldDifficulty,Z_Param_Difficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame(EMoldDifficulty(Z_Param_Difficulty));
	P_NATIVE_END;
}
// End Class AMoldMinigame Function StartGame

// Begin Class AMoldMinigame Function SwitchToPaper2
struct Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "SwitchToPaper2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execSwitchToPaper2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToPaper2();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function SwitchToPaper2

// Begin Class AMoldMinigame
void AMoldMinigame::StaticRegisterNativesAMoldMinigame()
{
	UClass* Class = AMoldMinigame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableBrushing", &AMoldMinigame::execEnableBrushing },
		{ "OnExitClicked", &AMoldMinigame::execOnExitClicked },
		{ "OnHardModeTimeExpired", &AMoldMinigame::execOnHardModeTimeExpired },
		{ "OnResumeClicked", &AMoldMinigame::execOnResumeClicked },
		{ "OnTryAgainClicked", &AMoldMinigame::execOnTryAgainClicked },
		{ "ShowTutorial", &AMoldMinigame::execShowTutorial },
		{ "StartGame", &AMoldMinigame::execStartGame },
		{ "SwitchToPaper2", &AMoldMinigame::execSwitchToPaper2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoldMinigame);
UClass* Z_Construct_UClass_AMoldMinigame_NoRegister()
{
	return AMoldMinigame::StaticClass();
}
struct Z_Construct_UClass_AMoldMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mold/MoldMinigame.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDifficulty_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardModeTimeLimit_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TryAgainWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TryAgainWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paper1_MetaData[] = {
		{ "Category", "Papers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------References to the Paper 1 and Paper 2---------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------References to the Paper 1 and Paper 2---------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paper2_MetaData[] = {
		{ "Category", "Papers" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------Widgets-----------------//\n//Exit\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------Widgets-----------------\nExit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Next paper\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Next paper" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldTutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tutorial\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tutorial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldTutorialWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSelectionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Brush Selection\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brush Selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSelectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pause Menu\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause Menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDifficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HardModeTimeLimit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CountdownWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TryAgainWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TryAgainWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paper1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paper2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExitWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ArrowWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MoldTutorialWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldTutorialWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushSelectionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushSelectionWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoldMinigame_EnableBrushing, "EnableBrushing" }, // 640753379
		{ &Z_Construct_UFunction_AMoldMinigame_OnExitClicked, "OnExitClicked" }, // 3486596592
		{ &Z_Construct_UFunction_AMoldMinigame_OnHardModeTimeExpired, "OnHardModeTimeExpired" }, // 800717630
		{ &Z_Construct_UFunction_AMoldMinigame_OnResumeClicked, "OnResumeClicked" }, // 1548515377
		{ &Z_Construct_UFunction_AMoldMinigame_OnTryAgainClicked, "OnTryAgainClicked" }, // 4067825043
		{ &Z_Construct_UFunction_AMoldMinigame_ShowTutorial, "ShowTutorial" }, // 1860915235
		{ &Z_Construct_UFunction_AMoldMinigame_StartGame, "StartGame" }, // 1825152427
		{ &Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2, "SwitchToPaper2" }, // 605437631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoldMinigame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CurrentDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CurrentDifficulty = { "CurrentDifficulty", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, CurrentDifficulty), Z_Construct_UEnum_ArchiveMystery_EMoldDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDifficulty_MetaData), NewProp_CurrentDifficulty_MetaData) }; // 4088753855
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_HardModeTimeLimit = { "HardModeTimeLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, HardModeTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardModeTimeLimit_MetaData), NewProp_HardModeTimeLimit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownWidgetClass = { "CountdownWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, CountdownWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownWidgetClass_MetaData), NewProp_CountdownWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownWidget = { "CountdownWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, CountdownWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownWidget_MetaData), NewProp_CountdownWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, CountdownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownTime_MetaData), NewProp_CountdownTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_TryAgainWidgetClass = { "TryAgainWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, TryAgainWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TryAgainWidgetClass_MetaData), NewProp_TryAgainWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_TryAgainWidget = { "TryAgainWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, TryAgainWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TryAgainWidget_MetaData), NewProp_TryAgainWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldCamera = { "MoldCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldCamera_MetaData), NewProp_MoldCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper1 = { "Paper1", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, Paper1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paper1_MetaData), NewProp_Paper1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper2 = { "Paper2", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, Paper2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paper2_MetaData), NewProp_Paper2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidgetClass = { "ExitWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ExitWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidgetClass_MetaData), NewProp_ExitWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidget = { "ExitWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ExitWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidget_MetaData), NewProp_ExitWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidgetClass = { "ArrowWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ArrowWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowWidgetClass_MetaData), NewProp_ArrowWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidget = { "ArrowWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ArrowWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowWidget_MetaData), NewProp_ArrowWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidgetClass = { "MoldTutorialWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldTutorialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldTutorialWidgetClass_MetaData), NewProp_MoldTutorialWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidget = { "MoldTutorialWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldTutorialWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldTutorialWidget_MetaData), NewProp_MoldTutorialWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidgetClass = { "BrushSelectionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, BrushSelectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSelectionWidgetClass_MetaData), NewProp_BrushSelectionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidget = { "BrushSelectionWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, BrushSelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSelectionWidget_MetaData), NewProp_BrushSelectionWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_PauseMenuWidget = { "PauseMenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, PauseMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidget_MetaData), NewProp_PauseMenuWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoldMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CurrentDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CurrentDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_HardModeTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_CountdownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_TryAgainWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_TryAgainWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_PauseMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_PauseMenuWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoldMinigame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoldMinigame_Statics::ClassParams = {
	&AMoldMinigame::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoldMinigame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoldMinigame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoldMinigame()
{
	if (!Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton, Z_Construct_UClass_AMoldMinigame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMoldMinigame>()
{
	return AMoldMinigame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoldMinigame);
AMoldMinigame::~AMoldMinigame() {}
// End Class AMoldMinigame

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoldDifficulty_StaticEnum, TEXT("EMoldDifficulty"), &Z_Registration_Info_UEnum_EMoldDifficulty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4088753855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoldMinigame, AMoldMinigame::StaticClass, TEXT("AMoldMinigame"), &Z_Registration_Info_UClass_AMoldMinigame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoldMinigame), 3561131936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_1553242352(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
