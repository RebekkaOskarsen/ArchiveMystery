// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Book/BookItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_BookItem_generated_h
#error "BookItem.generated.h already included, missing '#pragma once' in BookItem.h"
#endif
#define ARCHIVEMYSTERY_BookItem_generated_h

#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execPlayClose); \
	DECLARE_FUNCTION(execPlayOpenAndRead);


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABookItem(); \
	friend struct Z_Construct_UClass_ABookItem_Statics; \
public: \
	DECLARE_CLASS(ABookItem, AItems, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(ABookItem)


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABookItem(ABookItem&&); \
	ABookItem(const ABookItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABookItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABookItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABookItem) \
	NO_API virtual ~ABookItem();


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_13_PROLOG
#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class ABookItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
