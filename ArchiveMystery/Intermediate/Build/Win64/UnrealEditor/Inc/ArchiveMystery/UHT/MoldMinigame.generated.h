// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mold/MoldMinigame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMoldDifficulty : uint8;
#ifdef ARCHIVEMYSTERY_MoldMinigame_generated_h
#error "MoldMinigame.generated.h already included, missing '#pragma once' in MoldMinigame.h"
#endif
#define ARCHIVEMYSTERY_MoldMinigame_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnResumeClicked); \
	DECLARE_FUNCTION(execOnTryAgainClicked); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowTutorial); \
	DECLARE_FUNCTION(execEnableBrushing); \
	DECLARE_FUNCTION(execSwitchToPaper2); \
	DECLARE_FUNCTION(execOnHardModeTimeExpired);


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoldMinigame(); \
	friend struct Z_Construct_UClass_AMoldMinigame_Statics; \
public: \
	DECLARE_CLASS(AMoldMinigame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AMoldMinigame)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoldMinigame(AMoldMinigame&&); \
	AMoldMinigame(const AMoldMinigame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoldMinigame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoldMinigame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoldMinigame) \
	NO_API virtual ~AMoldMinigame();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_18_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AMoldMinigame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h


#define FOREACH_ENUM_EMOLDDIFFICULTY(op) \
	op(EMoldDifficulty::Easy) \
	op(EMoldDifficulty::Hard) 

enum class EMoldDifficulty : uint8;
template<> struct TIsUEnumClass<EMoldDifficulty> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EMoldDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
