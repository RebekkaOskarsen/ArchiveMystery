// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Database/ErrorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_ErrorWidget_generated_h
#error "ErrorWidget.generated.h already included, missing '#pragma once' in ErrorWidget.h"
#endif
#define ARCHIVEMYSTERY_ErrorWidget_generated_h

#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowSpeechBubble); \
	DECLARE_FUNCTION(execOnBackClicked);


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUErrorWidget(); \
	friend struct Z_Construct_UClass_UErrorWidget_Statics; \
public: \
	DECLARE_CLASS(UErrorWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(UErrorWidget)


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UErrorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UErrorWidget(UErrorWidget&&); \
	UErrorWidget(const UErrorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UErrorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UErrorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UErrorWidget) \
	NO_API virtual ~UErrorWidget();


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_12_PROLOG
#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class UErrorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_ErrorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
