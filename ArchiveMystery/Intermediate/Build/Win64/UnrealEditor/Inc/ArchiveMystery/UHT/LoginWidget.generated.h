// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Database/LoginWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_LoginWidget_generated_h
#error "LoginWidget.generated.h already included, missing '#pragma once' in LoginWidget.h"
#endif
#define ARCHIVEMYSTERY_LoginWidget_generated_h

#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNameCommitted); \
	DECLARE_FUNCTION(execOnLoginClicked);


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoginWidget(); \
	friend struct Z_Construct_UClass_ULoginWidget_Statics; \
public: \
	DECLARE_CLASS(ULoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(ULoginWidget)


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoginWidget(ULoginWidget&&); \
	ULoginWidget(const ULoginWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoginWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoginWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoginWidget) \
	NO_API virtual ~ULoginWidget();


#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_14_PROLOG
#define FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class ULoginWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_Fredag_ArchiveMystery_Source_ArchiveMystery_Public_Database_LoginWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
