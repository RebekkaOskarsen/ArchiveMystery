// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door/DoubleDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARCHIVEMYSTERY_DoubleDoor_generated_h
#error "DoubleDoor.generated.h already included, missing '#pragma once' in DoubleDoor.h"
#endif
#define ARCHIVEMYSTERY_DoubleDoor_generated_h

#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoubleDoor(); \
	friend struct Z_Construct_UClass_ADoubleDoor_Statics; \
public: \
	DECLARE_CLASS(ADoubleDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchiveMystery"), NO_API) \
	DECLARE_SERIALIZER(ADoubleDoor)


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADoubleDoor(ADoubleDoor&&); \
	ADoubleDoor(const ADoubleDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoubleDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoubleDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoubleDoor) \
	NO_API virtual ~ADoubleDoor();


#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_18_PROLOG
#define FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVEMYSTERY_API UClass* StaticClass<class ADoubleDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_saturday_ArchiveMystery_Source_ArchiveMystery_Public_Door_DoubleDoor_h


#define FOREACH_ENUM_EDOORTYPE(op) \
	op(EDoorType::Garage) \
	op(EDoorType::Archive) \
	op(EDoorType::Equipment) 

enum class EDoorType : uint8;
template<> struct TIsUEnumClass<EDoorType> { enum { Value = true }; };
template<> ARCHIVEMYSTERY_API UEnum* StaticEnum<EDoorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
