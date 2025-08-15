// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Database/InfoBookWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_InfoBookWidget_generated_h
#error "InfoBookWidget.generated.h already included, missing '#pragma once' in InfoBookWidget.h"
#endif
#define ARCHIVEMYSTERY_InfoBookWidget_generated_h

#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBackToDatabaseClicked); \
	DECLARE_FUNCTION(execOnPrevClicked); \
	DECLARE_FUNCTION(execOnNextClicked);


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfoBookWidget(); \
	friend struct Z_Construct_UClass_UInfoBookWidget_Statics; \
public: \
	DECLARE_CLASS(UInfoBookWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(UInfoBookWidget)


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfoBookWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInfoBookWidget(UInfoBookWidget&&); \
	UInfoBookWidget(const UInfoBookWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfoBookWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfoBookWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfoBookWidget) \
	NO_API virtual ~UInfoBookWidget();


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_12_PROLOG
#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class UInfoBookWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_Database_InfoBookWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
