// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/ShreddedPaper/Minigame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigame() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMinigame();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMinigame_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AMinigame Function BeginCutscene
struct Z_Construct_UFunction_AMinigame_BeginCutscene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_BeginCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "BeginCutscene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_BeginCutscene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_BeginCutscene_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_BeginCutscene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_BeginCutscene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execBeginCutscene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginCutscene();
	P_NATIVE_END;
}
// End Class AMinigame Function BeginCutscene

// Begin Class AMinigame Function OnCutsceneFinished
struct Z_Construct_UFunction_AMinigame_OnCutsceneFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnCutsceneFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnCutsceneFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnCutsceneFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnCutsceneFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnCutsceneFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnCutsceneFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnCutsceneFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCutsceneFinished();
	P_NATIVE_END;
}
// End Class AMinigame Function OnCutsceneFinished

// Begin Class AMinigame Function OnEasySelected
struct Z_Construct_UFunction_AMinigame_OnEasySelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnEasySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnEasySelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnEasySelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnEasySelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnEasySelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnEasySelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnEasySelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEasySelected();
	P_NATIVE_END;
}
// End Class AMinigame Function OnEasySelected

// Begin Class AMinigame Function OnExitButtonClicked
struct Z_Construct_UFunction_AMinigame_OnExitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnExitButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnExitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnExitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnExitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitButtonClicked();
	P_NATIVE_END;
}
// End Class AMinigame Function OnExitButtonClicked

// Begin Class AMinigame Function OnExitClicked
struct Z_Construct_UFunction_AMinigame_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class AMinigame Function OnExitClicked

// Begin Class AMinigame Function OnHardSelected
struct Z_Construct_UFunction_AMinigame_OnHardSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnHardSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnHardSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnHardSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnHardSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnHardSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnHardSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnHardSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHardSelected();
	P_NATIVE_END;
}
// End Class AMinigame Function OnHardSelected

// Begin Class AMinigame Function OnIngameTutorialClose
struct Z_Construct_UFunction_AMinigame_OnIngameTutorialClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnIngameTutorialClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnIngameTutorialClose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnIngameTutorialClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnIngameTutorialClose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnIngameTutorialClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnIngameTutorialClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnIngameTutorialClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnIngameTutorialClose();
	P_NATIVE_END;
}
// End Class AMinigame Function OnIngameTutorialClose

// Begin Class AMinigame Function OnMediumSelected
struct Z_Construct_UFunction_AMinigame_OnMediumSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnMediumSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnMediumSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnMediumSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnMediumSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnMediumSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnMediumSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnMediumSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediumSelected();
	P_NATIVE_END;
}
// End Class AMinigame Function OnMediumSelected

// Begin Class AMinigame Function OnResumeClicked
struct Z_Construct_UFunction_AMinigame_OnResumeClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks from the pause menu\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks from the pause menu" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnResumeClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnResumeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnResumeClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnResumeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnResumeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnResumeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResumeClicked();
	P_NATIVE_END;
}
// End Class AMinigame Function OnResumeClicked

// Begin Class AMinigame Function OnTryAgainClicked
struct Z_Construct_UFunction_AMinigame_OnTryAgainClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnTryAgainClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnTryAgainClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnTryAgainClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnTryAgainClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnTryAgainClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnTryAgainClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnTryAgainClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTryAgainClicked();
	P_NATIVE_END;
}
// End Class AMinigame Function OnTryAgainClicked

// Begin Class AMinigame Function OnTutorialContinue
struct Z_Construct_UFunction_AMinigame_OnTutorialContinue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnTutorialContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnTutorialContinue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnTutorialContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnTutorialContinue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnTutorialContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnTutorialContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnTutorialContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTutorialContinue();
	P_NATIVE_END;
}
// End Class AMinigame Function OnTutorialContinue

// Begin Class AMinigame Function OnWhiteoutFinished
struct Z_Construct_UFunction_AMinigame_OnWhiteoutFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_OnWhiteoutFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "OnWhiteoutFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_OnWhiteoutFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_OnWhiteoutFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_OnWhiteoutFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_OnWhiteoutFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execOnWhiteoutFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWhiteoutFinished();
	P_NATIVE_END;
}
// End Class AMinigame Function OnWhiteoutFinished

// Begin Class AMinigame Function ShowGameMenu
struct Z_Construct_UFunction_AMinigame_ShowGameMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_ShowGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "ShowGameMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_ShowGameMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_ShowGameMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_ShowGameMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_ShowGameMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execShowGameMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameMenu();
	P_NATIVE_END;
}
// End Class AMinigame Function ShowGameMenu

// Begin Class AMinigame Function ShowIngameTutorial
struct Z_Construct_UFunction_AMinigame_ShowIngameTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_ShowIngameTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "ShowIngameTutorial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_ShowIngameTutorial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_ShowIngameTutorial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_ShowIngameTutorial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_ShowIngameTutorial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execShowIngameTutorial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowIngameTutorial();
	P_NATIVE_END;
}
// End Class AMinigame Function ShowIngameTutorial

// Begin Class AMinigame Function ShowTutorial
struct Z_Construct_UFunction_AMinigame_ShowTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_ShowTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "ShowTutorial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_ShowTutorial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_ShowTutorial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_ShowTutorial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_ShowTutorial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execShowTutorial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTutorial();
	P_NATIVE_END;
}
// End Class AMinigame Function ShowTutorial

// Begin Class AMinigame Function SkipCutscene
struct Z_Construct_UFunction_AMinigame_SkipCutscene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_SkipCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "SkipCutscene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_SkipCutscene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_SkipCutscene_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_SkipCutscene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_SkipCutscene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execSkipCutscene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SkipCutscene();
	P_NATIVE_END;
}
// End Class AMinigame Function SkipCutscene

// Begin Class AMinigame Function StartGame
struct Z_Construct_UFunction_AMinigame_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------UI & EFFECTS---------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--------------------------------------UI & EFFECTS---------------------------------------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class AMinigame Function StartGame

// Begin Class AMinigame Function StartWhiteoutBeforeEnd
struct Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigame, nullptr, "StartWhiteoutBeforeEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame::execStartWhiteoutBeforeEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWhiteoutBeforeEnd();
	P_NATIVE_END;
}
// End Class AMinigame Function StartWhiteoutBeforeEnd

// Begin Class AMinigame
void AMinigame::StaticRegisterNativesAMinigame()
{
	UClass* Class = AMinigame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginCutscene", &AMinigame::execBeginCutscene },
		{ "OnCutsceneFinished", &AMinigame::execOnCutsceneFinished },
		{ "OnEasySelected", &AMinigame::execOnEasySelected },
		{ "OnExitButtonClicked", &AMinigame::execOnExitButtonClicked },
		{ "OnExitClicked", &AMinigame::execOnExitClicked },
		{ "OnHardSelected", &AMinigame::execOnHardSelected },
		{ "OnIngameTutorialClose", &AMinigame::execOnIngameTutorialClose },
		{ "OnMediumSelected", &AMinigame::execOnMediumSelected },
		{ "OnResumeClicked", &AMinigame::execOnResumeClicked },
		{ "OnTryAgainClicked", &AMinigame::execOnTryAgainClicked },
		{ "OnTutorialContinue", &AMinigame::execOnTutorialContinue },
		{ "OnWhiteoutFinished", &AMinigame::execOnWhiteoutFinished },
		{ "ShowGameMenu", &AMinigame::execShowGameMenu },
		{ "ShowIngameTutorial", &AMinigame::execShowIngameTutorial },
		{ "ShowTutorial", &AMinigame::execShowTutorial },
		{ "SkipCutscene", &AMinigame::execSkipCutscene },
		{ "StartGame", &AMinigame::execStartGame },
		{ "StartWhiteoutBeforeEnd", &AMinigame::execStartWhiteoutBeforeEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinigame);
UClass* Z_Construct_UClass_AMinigame_NoRegister()
{
	return AMinigame::StaticClass();
}
struct Z_Construct_UClass_AMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShreddedPaper/Minigame.h" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------CAMERA---------------------------------------------------//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------CAMERA---------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_DragAndDrop_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------------INPUT-----------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------------------------INPUT-----------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Drag_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Release_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDragging_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------DRAGGING THE PAPER STRIPS----------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------DRAGGING THE PAPER STRIPS----------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDuration_MetaData[] = {
		{ "Category", "Fade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------FADE IN OF THE PAPER SHEET---------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--------------------------FADE IN OF THE PAPER SHEET---------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFadeTime_MetaData[] = {
		{ "Category", "Fade" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFadingIn_MetaData[] = {
		{ "Category", "Fade" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparkNiagaraEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Difficulty widget\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difficulty widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IngameTutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ingame Tutorial\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingame Tutorial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TryAgainWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try again Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try again Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------Cutscene and skip functionality----------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------Cutscene and skip functionality----------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutsceneWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteoutWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutsceneWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteoutWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteoutLeadSeconds_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutsceneLength_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteoutLength_MetaData[] = {
		{ "Category", "Cutscene" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapThreshold_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaperSheet_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------Pause Menu------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------Pause Menu------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaperSheetInitialTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_DragAndDrop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Drag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Release;
	static void NewProp_bIsDragging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDragging;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFadeTime;
	static void NewProp_bIsFadingIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFadingIn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TutorialWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparkNiagaraEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DifficultyWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TimerWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IngameTutorialWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TryAgainWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExitWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CutsceneWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteoutWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutsceneWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteoutWidgetInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteoutLeadSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CutsceneLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteoutLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSheet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransforms_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InitialTransforms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaperSheetInitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigame_BeginCutscene, "BeginCutscene" }, // 2649215126
		{ &Z_Construct_UFunction_AMinigame_OnCutsceneFinished, "OnCutsceneFinished" }, // 3091593573
		{ &Z_Construct_UFunction_AMinigame_OnEasySelected, "OnEasySelected" }, // 3169544647
		{ &Z_Construct_UFunction_AMinigame_OnExitButtonClicked, "OnExitButtonClicked" }, // 1939199824
		{ &Z_Construct_UFunction_AMinigame_OnExitClicked, "OnExitClicked" }, // 3805274764
		{ &Z_Construct_UFunction_AMinigame_OnHardSelected, "OnHardSelected" }, // 3240756149
		{ &Z_Construct_UFunction_AMinigame_OnIngameTutorialClose, "OnIngameTutorialClose" }, // 2614084935
		{ &Z_Construct_UFunction_AMinigame_OnMediumSelected, "OnMediumSelected" }, // 2286201334
		{ &Z_Construct_UFunction_AMinigame_OnResumeClicked, "OnResumeClicked" }, // 3111000937
		{ &Z_Construct_UFunction_AMinigame_OnTryAgainClicked, "OnTryAgainClicked" }, // 3372086785
		{ &Z_Construct_UFunction_AMinigame_OnTutorialContinue, "OnTutorialContinue" }, // 1145385279
		{ &Z_Construct_UFunction_AMinigame_OnWhiteoutFinished, "OnWhiteoutFinished" }, // 1000408077
		{ &Z_Construct_UFunction_AMinigame_ShowGameMenu, "ShowGameMenu" }, // 545015565
		{ &Z_Construct_UFunction_AMinigame_ShowIngameTutorial, "ShowIngameTutorial" }, // 360399407
		{ &Z_Construct_UFunction_AMinigame_ShowTutorial, "ShowTutorial" }, // 4198789240
		{ &Z_Construct_UFunction_AMinigame_SkipCutscene, "SkipCutscene" }, // 1187381589
		{ &Z_Construct_UFunction_AMinigame_StartGame, "StartGame" }, // 453928026
		{ &Z_Construct_UFunction_AMinigame_StartWhiteoutBeforeEnd, "StartWhiteoutBeforeEnd" }, // 3281923662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_TopDownCamera = { "TopDownCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, TopDownCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCamera_MetaData), NewProp_TopDownCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_IMC_DragAndDrop = { "IMC_DragAndDrop", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, IMC_DragAndDrop), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_DragAndDrop_MetaData), NewProp_IMC_DragAndDrop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_IA_Drag = { "IA_Drag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, IA_Drag), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Drag_MetaData), NewProp_IA_Drag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_IA_Release = { "IA_Release", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, IA_Release), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Release_MetaData), NewProp_IA_Release_MetaData) };
void Z_Construct_UClass_AMinigame_Statics::NewProp_bIsDragging_SetBit(void* Obj)
{
	((AMinigame*)Obj)->bIsDragging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigame), &Z_Construct_UClass_AMinigame_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDragging_MetaData), NewProp_bIsDragging_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SelectedMesh = { "SelectedMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SelectedMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMesh_MetaData), NewProp_SelectedMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_DragOffset = { "DragOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, DragOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragOffset_MetaData), NewProp_DragOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, FadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDuration_MetaData), NewProp_FadeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_CurrentFadeTime = { "CurrentFadeTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, CurrentFadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFadeTime_MetaData), NewProp_CurrentFadeTime_MetaData) };
void Z_Construct_UClass_AMinigame_Statics::NewProp_bIsFadingIn_SetBit(void* Obj)
{
	((AMinigame*)Obj)->bIsFadingIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_bIsFadingIn = { "bIsFadingIn", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinigame), &Z_Construct_UClass_AMinigame_Statics::NewProp_bIsFadingIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFadingIn_MetaData), NewProp_bIsFadingIn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_TutorialWidgetClass = { "TutorialWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, TutorialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TutorialWidgetClass_MetaData), NewProp_TutorialWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_GameMenuWidgetClass = { "GameMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, GameMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMenuWidgetClass_MetaData), NewProp_GameMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SnapSound = { "SnapSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SnapSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapSound_MetaData), NewProp_SnapSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SparkNiagaraEffect = { "SparkNiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SparkNiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparkNiagaraEffect_MetaData), NewProp_SparkNiagaraEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_DifficultyWidgetClass = { "DifficultyWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, DifficultyWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyWidgetClass_MetaData), NewProp_DifficultyWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_TimerWidgetClass = { "TimerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, TimerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerWidgetClass_MetaData), NewProp_TimerWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_IngameTutorialWidgetClass = { "IngameTutorialWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, IngameTutorialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IngameTutorialWidgetClass_MetaData), NewProp_IngameTutorialWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_TryAgainWidgetClass = { "TryAgainWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, TryAgainWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TryAgainWidgetClass_MetaData), NewProp_TryAgainWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetClass = { "ExitWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, ExitWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidgetClass_MetaData), NewProp_ExitWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneWidgetClass = { "CutsceneWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, CutsceneWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutsceneWidgetClass_MetaData), NewProp_CutsceneWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutWidgetClass = { "WhiteoutWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, WhiteoutWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteoutWidgetClass_MetaData), NewProp_WhiteoutWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetInstance = { "ExitWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, ExitWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidgetInstance_MetaData), NewProp_ExitWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneWidgetInstance = { "CutsceneWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, CutsceneWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutsceneWidgetInstance_MetaData), NewProp_CutsceneWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutWidgetInstance = { "WhiteoutWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, WhiteoutWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteoutWidgetInstance_MetaData), NewProp_WhiteoutWidgetInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutLeadSeconds = { "WhiteoutLeadSeconds", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, WhiteoutLeadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteoutLeadSeconds_MetaData), NewProp_WhiteoutLeadSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneLength = { "CutsceneLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, CutsceneLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutsceneLength_MetaData), NewProp_CutsceneLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutLength = { "WhiteoutLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, WhiteoutLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteoutLength_MetaData), NewProp_WhiteoutLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SnapThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapThreshold_MetaData), NewProp_SnapThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheet = { "PaperSheet", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, PaperSheet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaperSheet_MetaData), NewProp_PaperSheet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms_ValueProp = { "InitialTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms_Key_KeyProp = { "InitialTransforms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms = { "InitialTransforms", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, InitialTransforms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransforms_MetaData), NewProp_InitialTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheetInitialTransform = { "PaperSheetInitialTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, PaperSheetInitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaperSheetInitialTransform_MetaData), NewProp_PaperSheetInitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_TopDownCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_IMC_DragAndDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_IA_Drag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_IA_Release,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_bIsDragging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SelectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_DragOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_CurrentFadeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_bIsFadingIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_TutorialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_GameMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SnapSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SparkNiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_DifficultyWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_TimerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_IngameTutorialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_TryAgainWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutLeadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_CutsceneLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_WhiteoutLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_PauseMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_InitialTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheetInitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigame_Statics::ClassParams = {
	&AMinigame::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigame()
{
	if (!Z_Registration_Info_UClass_AMinigame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigame.OuterSingleton, Z_Construct_UClass_AMinigame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigame.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMinigame>()
{
	return AMinigame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigame);
AMinigame::~AMinigame() {}
// End Class AMinigame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigame, AMinigame::StaticClass, TEXT("AMinigame"), &Z_Registration_Info_UClass_AMinigame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigame), 48571234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_1551503360(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
