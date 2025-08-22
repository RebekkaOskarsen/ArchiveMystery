// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scanner/TriggerMailInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARCHIVEMYSTERY_TriggerMailInteraction_generated_h
#error "TriggerMailInteraction.generated.h already included, missing '#pragma once' in TriggerMailInteraction.h"
#endif
#define ARCHIVEMYSTERY_TriggerMailInteraction_generated_h

#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerMailInteraction(); \
	friend struct Z_Construct_UClass_ATriggerMailInteraction_Statics; \
public: \
	DECLARE_CLASS(ATriggerMailInteraction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(ATriggerMailInteraction)


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerMailInteraction(ATriggerMailInteraction&&); \
	ATriggerMailInteraction(const ATriggerMailInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerMailInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerMailInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerMailInteraction) \
	NO_API virtual ~ATriggerMailInteraction();


#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_12_PROLOG
#define FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class ATriggerMailInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bachelor_Project_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerMailInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
