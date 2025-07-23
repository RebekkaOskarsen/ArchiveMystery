// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Items/Box/OpenBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenBox() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AOpenBox();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AOpenBox_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AOpenBox
void AOpenBox::StaticRegisterNativesAOpenBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOpenBox);
UClass* Z_Construct_UClass_AOpenBox_NoRegister()
{
	return AOpenBox::StaticClass();
}
struct Z_Construct_UClass_AOpenBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Box/OpenBox.h" },
		{ "ModuleRelativePath", "Public/Items/Box/OpenBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenPlaced_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/Box/OpenBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressEWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Box/OpenBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Box/OpenBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHasBeenPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenPlaced;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressEWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AOpenBox_Statics::NewProp_bHasBeenPlaced_SetBit(void* Obj)
{
	((AOpenBox*)Obj)->bHasBeenPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenBox_Statics::NewProp_bHasBeenPlaced = { "bHasBeenPlaced", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOpenBox), &Z_Construct_UClass_AOpenBox_Statics::NewProp_bHasBeenPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenPlaced_MetaData), NewProp_bHasBeenPlaced_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOpenBox_Statics::NewProp_PressEWidgetClass = { "PressEWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOpenBox, PressEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressEWidgetClass_MetaData), NewProp_PressEWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenBox_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOpenBox, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenBox_Statics::NewProp_bHasBeenPlaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenBox_Statics::NewProp_PressEWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenBox_Statics::NewProp_PickupSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOpenBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOpenBox_Statics::ClassParams = {
	&AOpenBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOpenBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOpenBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AOpenBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOpenBox()
{
	if (!Z_Registration_Info_UClass_AOpenBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOpenBox.OuterSingleton, Z_Construct_UClass_AOpenBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOpenBox.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AOpenBox>()
{
	return AOpenBox::StaticClass();
}
AOpenBox::AOpenBox() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenBox);
AOpenBox::~AOpenBox() {}
// End Class AOpenBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOpenBox, AOpenBox::StaticClass, TEXT("AOpenBox"), &Z_Registration_Info_UClass_AOpenBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOpenBox), 4107616996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_1235182356(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_Tirsdag_ArchiveMystery_Source_ArchiveMystery_Public_Items_Box_OpenBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
