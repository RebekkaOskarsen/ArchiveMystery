// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShreddedPaper/Minigame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_Minigame_generated_h
#error "Minigame.generated.h already included, missing '#pragma once' in Minigame.h"
#endif
#define ARCHIVEMYSTERY_Minigame_generated_h

#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnResumeClicked); \
	DECLARE_FUNCTION(execOnWhiteoutFinished); \
	DECLARE_FUNCTION(execOnCutsceneFinished); \
	DECLARE_FUNCTION(execBeginCutscene); \
	DECLARE_FUNCTION(execSkipCutscene); \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execStartWhiteoutBeforeEnd); \
	DECLARE_FUNCTION(execOnTryAgainClicked); \
	DECLARE_FUNCTION(execOnIngameTutorialClose); \
	DECLARE_FUNCTION(execShowIngameTutorial); \
	DECLARE_FUNCTION(execOnTutorialContinue); \
	DECLARE_FUNCTION(execOnHardSelected); \
	DECLARE_FUNCTION(execOnMediumSelected); \
	DECLARE_FUNCTION(execOnEasySelected); \
	DECLARE_FUNCTION(execShowTutorial); \
	DECLARE_FUNCTION(execShowGameMenu); \
	DECLARE_FUNCTION(execStartGame);


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigame(); \
	friend struct Z_Construct_UClass_AMinigame_Statics; \
public: \
	DECLARE_CLASS(AMinigame, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AMinigame)


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMinigame(AMinigame&&); \
	AMinigame(const AMinigame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigame) \
	NO_API virtual ~AMinigame();


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_23_PROLOG
#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_INCLASS_NO_PURE_DECLS \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AMinigame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_ShreddedPaper_Minigame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
