// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mold/MoldBrush.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_MoldBrush_generated_h
#error "MoldBrush.generated.h already included, missing '#pragma once' in MoldBrush.h"
#endif
#define ARCHIVEMYSTERY_MoldBrush_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBrushSoundFinished);


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoldBrush(); \
	friend struct Z_Construct_UClass_AMoldBrush_Statics; \
public: \
	DECLARE_CLASS(AMoldBrush, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AMoldBrush)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoldBrush(AMoldBrush&&); \
	AMoldBrush(const AMoldBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoldBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoldBrush); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoldBrush) \
	NO_API virtual ~AMoldBrush();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_20_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AMoldBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_mandag_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldBrush_h


#define FOREACH_ENUM_EBRUSHSIZE(op) \
	op(EBrushSize::Small) \
	op(EBrushSize::Big) 

enum class EBrushSize : uint8;
template<> struct TIsUEnumClass<EBrushSize> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EBrushSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
