// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Archivist.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARCHIVEMYSTERY_Archivist_generated_h
#error "Archivist.generated.h already included, missing '#pragma once' in Archivist.h"
#endif
#define ARCHIVEMYSTERY_Archivist_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeliverDocuments); \
	DECLARE_FUNCTION(execRestoreGameplayInput); \
	DECLARE_FUNCTION(execOnDropZoneEndOverlap); \
	DECLARE_FUNCTION(execOnDropZoneBeginOverlap); \
	DECLARE_FUNCTION(execOnPaintingTriggerEndOverlap); \
	DECLARE_FUNCTION(execOnPaintingTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchivist(); \
	friend struct Z_Construct_UClass_AArchivist_Statics; \
public: \
	DECLARE_CLASS(AArchivist, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AArchivist)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArchivist(AArchivist&&); \
	AArchivist(const AArchivist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchivist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchivist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchivist) \
	NO_API virtual ~AArchivist();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_32_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AArchivist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_quest_unfolding_stories_ArchiveMystery_Source_ArchiveMystery_Public_Character_Archivist_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Unequipped) \
	op(ECharacterState::ECS_EquippedOneHandedBox) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
