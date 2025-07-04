// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door/KeycardItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVEMYSTERY_KeycardItem_generated_h
#error "KeycardItem.generated.h already included, missing '#pragma once' in KeycardItem.h"
#endif
#define ARCHIVEMYSTERY_KeycardItem_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeycardItem(); \
	friend struct Z_Construct_UClass_AKeycardItem_Statics; \
public: \
	DECLARE_CLASS(AKeycardItem, AItems, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(AKeycardItem)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKeycardItem(AKeycardItem&&); \
	AKeycardItem(const AKeycardItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeycardItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeycardItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeycardItem) \
	NO_API virtual ~AKeycardItem();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_18_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class AKeycardItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_fredag_ArchiveMystery_Source_ArchiveMystery_Public_Door_KeycardItem_h


#define FOREACH_ENUM_EKEYCARDTYPE(op) \
	op(EKeycardType::DoubleDoor) 

enum class EKeycardType : uint8;
template<> struct TIsUEnumClass<EKeycardType> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EKeycardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
