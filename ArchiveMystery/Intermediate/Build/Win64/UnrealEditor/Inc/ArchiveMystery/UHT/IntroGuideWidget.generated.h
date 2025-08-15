// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/IntroGuideWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_IntroGuideWidget_generated_h
#error "IntroGuideWidget.generated.h already included, missing '#pragma once' in IntroGuideWidget.h"
#endif
#define ARCHIVEMYSTERY_IntroGuideWidget_generated_h

#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCloseClicked); \
	DECLARE_FUNCTION(execOnNextClicked); \
	DECLARE_FUNCTION(execOnPrevClicked);


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIntroGuideWidget(); \
	friend struct Z_Construct_UClass_UIntroGuideWidget_Statics; \
public: \
	DECLARE_CLASS(UIntroGuideWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(UIntroGuideWidget)


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntroGuideWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIntroGuideWidget(UIntroGuideWidget&&); \
	UIntroGuideWidget(const UIntroGuideWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntroGuideWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntroGuideWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntroGuideWidget) \
	NO_API virtual ~UIntroGuideWidget();


#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_15_PROLOG
#define FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class UIntroGuideWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_Downloads_onsdag_ArchiveMystery_Source_ArchiveMystery_Public_HUD_IntroGuideWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
