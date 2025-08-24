// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/GuideWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_GuideWidget_generated_h
#error "GuideWidget.generated.h already included, missing '#pragma once' in GuideWidget.h"
#endif
#define ARCHIVEMYSTERY_GuideWidget_generated_h

#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNextClicked); \
	DECLARE_FUNCTION(execOnPrevClicked);


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGuideWidget(); \
	friend struct Z_Construct_UClass_UGuideWidget_Statics; \
public: \
	DECLARE_CLASS(UGuideWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(UGuideWidget)


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGuideWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGuideWidget(UGuideWidget&&); \
	UGuideWidget(const UGuideWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGuideWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGuideWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGuideWidget) \
	NO_API virtual ~UGuideWidget();


#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_15_PROLOG
#define FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class UGuideWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_fredag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_GuideWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
