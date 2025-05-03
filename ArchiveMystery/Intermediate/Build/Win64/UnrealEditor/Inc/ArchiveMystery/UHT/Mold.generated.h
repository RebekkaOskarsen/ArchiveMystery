// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mold/Mold.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_Mold_generated_h
#error "Mold.generated.h already included, missing '#pragma once' in Mold.h"
#endif
#define ARCHIVEMYSTERY_Mold_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMold(); \
	friend struct Z_Construct_UClass_AMold_Statics; \
public: \
	DECLARE_CLASS(AMold, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AMold)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMold(AMold&&); \
	AMold(const AMold&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMold); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMold) \
	NO_API virtual ~AMold();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_21_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AMold>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Mold_Mold_h


#define FOREACH_ENUM_EMOLDSIZE(op) \
	op(EMoldSize::Small) \
	op(EMoldSize::Big) 

enum class EMoldSize : uint8;
template<> struct TIsUEnumClass<EMoldSize> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EMoldSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
