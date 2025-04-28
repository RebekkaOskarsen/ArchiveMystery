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

// Begin Class AMinigame Function StartGame
struct Z_Construct_UFunction_AMinigame_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Shows tutorial and start game interaction \n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows tutorial and start game interaction" },
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

// Begin Class AMinigame
void AMinigame::StaticRegisterNativesAMinigame()
{
	UClass* Class = AMinigame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowTutorial", &AMinigame::execShowTutorial },
		{ "StartGame", &AMinigame::execStartGame },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapThreshold_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaperSheet_MetaData[] = {
		{ "Category", "Snapping" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_DragAndDrop_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
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
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
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
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFadeTime_MetaData[] = {
		{ "Category", "Fade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration of the fade effect in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the fade effect in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFadingIn_MetaData[] = {
		{ "Category", "Fade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks the elapsed time during the fade\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks the elapsed time during the fade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Exit button interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exit button interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Shows '?' button and interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows '?' button and interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapSound_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lydkomponent for snap-lyd\n" },
#endif
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lydkomponent for snap-lyd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparkNiagaraEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/ShreddedPaper/Minigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSheet;
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
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExitWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TutorialWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparkNiagaraEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigame_ShowTutorial, "ShowTutorial" }, // 4198789240
		{ &Z_Construct_UFunction_AMinigame_StartGame, "StartGame" }, // 3981564151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SnapThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapThreshold_MetaData), NewProp_SnapThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheet = { "PaperSheet", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, PaperSheet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaperSheet_MetaData), NewProp_PaperSheet_MetaData) };
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetClass = { "ExitWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, ExitWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidgetClass_MetaData), NewProp_ExitWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_TutorialWidgetClass = { "TutorialWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, TutorialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TutorialWidgetClass_MetaData), NewProp_TutorialWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_GameMenuWidgetClass = { "GameMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, GameMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMenuWidgetClass_MetaData), NewProp_GameMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SnapSound = { "SnapSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SnapSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapSound_MetaData), NewProp_SnapSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame_Statics::NewProp_SparkNiagaraEffect = { "SparkNiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame, SparkNiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparkNiagaraEffect_MetaData), NewProp_SparkNiagaraEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_PaperSheet,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_ExitWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_TutorialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_GameMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SnapSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame_Statics::NewProp_SparkNiagaraEffect,
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
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigame, AMinigame::StaticClass, TEXT("AMinigame"), &Z_Registration_Info_UClass_AMinigame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigame), 2520984979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_4050483221(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archividst_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
