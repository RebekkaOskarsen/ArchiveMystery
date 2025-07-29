// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/FolderItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARCHIVEMYSTERY_FolderItem_generated_h
#error "FolderItem.generated.h already included, missing '#pragma once' in FolderItem.h"
#endif
#define ARCHIVEMYSTERY_FolderItem_generated_h

#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFolderItem(); \
	friend struct Z_Construct_UClass_AFolderItem_Statics; \
public: \
	DECLARE_CLASS(AFolderItem, AItems, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AFolderItem)


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFolderItem(AFolderItem&&); \
	AFolderItem(const AFolderItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFolderItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFolderItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFolderItem) \
	NO_API virtual ~AFolderItem();


#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_11_PROLOG
#define FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AFolderItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_FolderItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
