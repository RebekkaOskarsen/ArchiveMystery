// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SavingSystem/QuestLogData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuestData;
#ifdef ARCHIVEMYSTERY_QuestLogData_generated_h
#error "QuestLogData.generated.h already included, missing '#pragma once' in QuestLogData.h"
#endif
#define ARCHIVEMYSTERY_QuestLogData_generated_h

#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestData_Statics; \
	ARCHIVEMYSTERY_API static class UScriptStruct* StaticStruct();


template<> ARCHIVEMYSTERY_API UScriptStruct* StaticStruct<struct FQuestData>();

#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateQuestStatus); \
	DECLARE_FUNCTION(execGetQuestEntries);


#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestLogData(); \
	friend struct Z_Construct_UClass_UQuestLogData_Statics; \
public: \
	DECLARE_CLASS(UQuestLogData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(UQuestLogData)


#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestLogData(UQuestLogData&&); \
	UQuestLogData(const UQuestLogData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestLogData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestLogData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestLogData) \
	NO_API virtual ~UQuestLogData();


#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_27_PROLOG
#define FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class UQuestLogData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_hh_ArchiveMystery_Source_ArchiveMystery_Public_SavingSystem_QuestLogData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
