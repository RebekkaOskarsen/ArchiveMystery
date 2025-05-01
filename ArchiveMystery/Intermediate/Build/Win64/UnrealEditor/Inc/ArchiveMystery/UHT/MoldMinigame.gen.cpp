// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Mold/MoldMinigame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoldMinigame() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldMinigame();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AMoldMinigame_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class AMoldMinigame Function EnableBrushing
struct Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "EnableBrushing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_EnableBrushing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_EnableBrushing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execEnableBrushing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableBrushing();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function EnableBrushing

// Begin Class AMoldMinigame Function ShowTutorial
struct Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks if the player can brush mold\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks if the player can brush mold" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "ShowTutorial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_ShowTutorial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_ShowTutorial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execShowTutorial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTutorial();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function ShowTutorial

// Begin Class AMoldMinigame Function SwitchToPaper2
struct Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoldMinigame, nullptr, "SwitchToPaper2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoldMinigame::execSwitchToPaper2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToPaper2();
	P_NATIVE_END;
}
// End Class AMoldMinigame Function SwitchToPaper2

// Begin Class AMoldMinigame
void AMoldMinigame::StaticRegisterNativesAMoldMinigame()
{
	UClass* Class = AMoldMinigame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableBrushing", &AMoldMinigame::execEnableBrushing },
		{ "ShowTutorial", &AMoldMinigame::execShowTutorial },
		{ "SwitchToPaper2", &AMoldMinigame::execSwitchToPaper2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoldMinigame);
UClass* Z_Construct_UClass_AMoldMinigame_NoRegister()
{
	return AMoldMinigame::StaticClass();
}
struct Z_Construct_UClass_AMoldMinigame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mold/MoldMinigame.h" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paper1_MetaData[] = {
		{ "Category", "Papers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// References to the papers\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References to the papers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paper2_MetaData[] = {
		{ "Category", "Papers" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Widget\n//Exit\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Widget\nExit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Next paper\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Next paper" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldTutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tutorial\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tutorial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoldTutorialWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSelectionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Brush Selection\n" },
#endif
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brush Selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSelectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mold/MoldMinigame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paper1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paper2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExitWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ArrowWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MoldTutorialWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoldTutorialWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushSelectionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushSelectionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoldMinigame_EnableBrushing, "EnableBrushing" }, // 640753379
		{ &Z_Construct_UFunction_AMoldMinigame_ShowTutorial, "ShowTutorial" }, // 2093107261
		{ &Z_Construct_UFunction_AMoldMinigame_SwitchToPaper2, "SwitchToPaper2" }, // 605437631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoldMinigame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldCamera = { "MoldCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldCamera_MetaData), NewProp_MoldCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper1 = { "Paper1", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, Paper1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paper1_MetaData), NewProp_Paper1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper2 = { "Paper2", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, Paper2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paper2_MetaData), NewProp_Paper2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidgetClass = { "ExitWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ExitWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidgetClass_MetaData), NewProp_ExitWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidget = { "ExitWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ExitWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitWidget_MetaData), NewProp_ExitWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidgetClass = { "ArrowWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ArrowWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowWidgetClass_MetaData), NewProp_ArrowWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidget = { "ArrowWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, ArrowWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowWidget_MetaData), NewProp_ArrowWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidgetClass = { "MoldTutorialWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldTutorialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldTutorialWidgetClass_MetaData), NewProp_MoldTutorialWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidget = { "MoldTutorialWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, MoldTutorialWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoldTutorialWidget_MetaData), NewProp_MoldTutorialWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidgetClass = { "BrushSelectionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, BrushSelectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSelectionWidgetClass_MetaData), NewProp_BrushSelectionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidget = { "BrushSelectionWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoldMinigame, BrushSelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSelectionWidget_MetaData), NewProp_BrushSelectionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoldMinigame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_Paper2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ExitWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_ArrowWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_MoldTutorialWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoldMinigame_Statics::NewProp_BrushSelectionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoldMinigame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoldMinigame_Statics::ClassParams = {
	&AMoldMinigame::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoldMinigame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoldMinigame_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoldMinigame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoldMinigame()
{
	if (!Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton, Z_Construct_UClass_AMoldMinigame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoldMinigame.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<AMoldMinigame>()
{
	return AMoldMinigame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoldMinigame);
AMoldMinigame::~AMoldMinigame() {}
// End Class AMoldMinigame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoldMinigame, AMoldMinigame::StaticClass, TEXT("AMoldMinigame"), &Z_Registration_Info_UClass_AMoldMinigame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoldMinigame), 771913216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_1871301246(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_OneDrive___Universitetet_i_Innlandet_Skrivebord_archive_torsdag_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Mold_MoldMinigame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
