// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scanner/TriggerScanner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARCHIVEMYSTERY_TriggerScanner_generated_h
#error "TriggerScanner.generated.h already included, missing '#pragma once' in TriggerScanner.h"
#endif
#define ARCHIVEMYSTERY_TriggerScanner_generated_h

#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowSecondScannerWidget); \
	DECLARE_FUNCTION(execScanDocuments); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerScanner(); \
	friend struct Z_Construct_UClass_ATriggerScanner_Statics; \
public: \
	DECLARE_CLASS(ATriggerScanner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(ATriggerScanner)


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerScanner(ATriggerScanner&&); \
	ATriggerScanner(const ATriggerScanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerScanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerScanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerScanner) \
	NO_API virtual ~ATriggerScanner();


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_12_PROLOG
#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class ATriggerScanner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Scanner_TriggerScanner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
