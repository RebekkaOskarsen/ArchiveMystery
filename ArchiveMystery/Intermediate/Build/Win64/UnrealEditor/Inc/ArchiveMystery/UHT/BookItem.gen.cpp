// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchiveMystery/Public/Items/Book/BookItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookItem() {}

// Begin Cross Module References
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ABookItem();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_ABookItem_NoRegister();
ARCHIVEMYSTERY_API UClass* Z_Construct_UClass_AItems();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchiveMystery();
// End Cross Module References

// Begin Class ABookItem Function IsOpen
struct Z_Construct_UFunction_ABookItem_IsOpen_Statics
{
	struct BookItem_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Book" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Query\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABookItem_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BookItem_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABookItem_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BookItem_eventIsOpen_Parms), &Z_Construct_UFunction_ABookItem_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABookItem_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABookItem_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABookItem_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABookItem_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABookItem, nullptr, "IsOpen", nullptr, nullptr, Z_Construct_UFunction_ABookItem_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABookItem_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABookItem_IsOpen_Statics::BookItem_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABookItem_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABookItem_IsOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABookItem_IsOpen_Statics::BookItem_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABookItem_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABookItem_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABookItem::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// End Class ABookItem Function IsOpen

// Begin Class ABookItem Function PlayClose
struct Z_Construct_UFunction_ABookItem_PlayClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Book|Animation" },
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABookItem_PlayClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABookItem, nullptr, "PlayClose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABookItem_PlayClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABookItem_PlayClose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABookItem_PlayClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABookItem_PlayClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABookItem::execPlayClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayClose();
	P_NATIVE_END;
}
// End Class ABookItem Function PlayClose

// Begin Class ABookItem Function PlayOpenAndRead
struct Z_Construct_UFunction_ABookItem_PlayOpenAndRead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Book|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// plays once\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "plays once" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABookItem_PlayOpenAndRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABookItem, nullptr, "PlayOpenAndRead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABookItem_PlayOpenAndRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABookItem_PlayOpenAndRead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABookItem_PlayOpenAndRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABookItem_PlayOpenAndRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABookItem::execPlayOpenAndRead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayOpenAndRead();
	P_NATIVE_END;
}
// End Class ABookItem Function PlayOpenAndRead

// Begin Class ABookItem
void ABookItem::StaticRegisterNativesABookItem()
{
	UClass* Class = ABookItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsOpen", &ABookItem::execIsOpen },
		{ "PlayClose", &ABookItem::execPlayClose },
		{ "PlayOpenAndRead", &ABookItem::execPlayOpenAndRead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABookItem);
UClass* Z_Construct_UClass_ABookItem_NoRegister()
{
	return ABookItem::StaticClass();
}
struct Z_Construct_UClass_ABookItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Book/BookItem.h" },
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BookMesh_MetaData[] = {
		{ "Category", "Book|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpeningAnim_MetaData[] = {
		{ "Category", "Book|Animation" },
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenLoopAnim_MetaData[] = {
		{ "Category", "Book|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// plays once\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "plays once" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosingAnim_MetaData[] = {
		{ "Category", "Book|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// loops while reading\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Book/BookItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "loops while reading" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BookMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenLoopAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosingAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABookItem_IsOpen, "IsOpen" }, // 1075858482
		{ &Z_Construct_UFunction_ABookItem_PlayClose, "PlayClose" }, // 706244973
		{ &Z_Construct_UFunction_ABookItem_PlayOpenAndRead, "PlayOpenAndRead" }, // 1768224703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABookItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookItem_Statics::NewProp_BookMesh = { "BookMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABookItem, BookMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BookMesh_MetaData), NewProp_BookMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookItem_Statics::NewProp_OpeningAnim = { "OpeningAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABookItem, OpeningAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpeningAnim_MetaData), NewProp_OpeningAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookItem_Statics::NewProp_OpenLoopAnim = { "OpenLoopAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABookItem, OpenLoopAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenLoopAnim_MetaData), NewProp_OpenLoopAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookItem_Statics::NewProp_ClosingAnim = { "ClosingAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABookItem, ClosingAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosingAnim_MetaData), NewProp_ClosingAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABookItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookItem_Statics::NewProp_BookMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookItem_Statics::NewProp_OpeningAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookItem_Statics::NewProp_OpenLoopAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookItem_Statics::NewProp_ClosingAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABookItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABookItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchiveMystery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABookItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABookItem_Statics::ClassParams = {
	&ABookItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABookItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABookItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABookItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABookItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABookItem()
{
	if (!Z_Registration_Info_UClass_ABookItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABookItem.OuterSingleton, Z_Construct_UClass_ABookItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABookItem.OuterSingleton;
}
template<> ARCHIVEMYSTERY_API UClass* StaticClass<ABookItem>()
{
	return ABookItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABookItem);
ABookItem::~ABookItem() {}
// End Class ABookItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABookItem, ABookItem::StaticClass, TEXT("ABookItem"), &Z_Registration_Info_UClass_ABookItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABookItem), 153572751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_3015440817(TEXT("/Script/ArchiveMystery"),
	Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArchiveMystery_ArchiveMystery_ArchiveMystery_Source_ArchiveMystery_Public_Items_Book_BookItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
