// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyShooter1/MyFloatingPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloatingPawnMovement() {}
// Cross Module References
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_TinyShooter1();
// End Cross Module References
	void UMyFloatingPawnMovement::StaticRegisterNativesUMyFloatingPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister()
	{
		return UMyFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMyFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyShooter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "MyFloatingPawnMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyFloatingPawnMovement.h" },
		{ "ToolTip", "how fast the pawn rotates" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotateSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotateSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMyFloatingPawnMovement, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotateSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotateSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFloatingPawnMovement_Statics::NewProp_RotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFloatingPawnMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams = {
		&UMyFloatingPawnMovement::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyFloatingPawnMovement, 3499984916);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyFloatingPawnMovement(Z_Construct_UClass_UMyFloatingPawnMovement, &UMyFloatingPawnMovement::StaticClass, TEXT("/Script/TinyShooter1"), TEXT("UMyFloatingPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFloatingPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
