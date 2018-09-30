// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyShooter1/TinyShooter1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinyShooter1GameMode() {}
// Cross Module References
	TINYSHOOTER1_API UClass* Z_Construct_UClass_ATinyShooter1GameMode_NoRegister();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_ATinyShooter1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TinyShooter1();
// End Cross Module References
	void ATinyShooter1GameMode::StaticRegisterNativesATinyShooter1GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATinyShooter1GameMode_NoRegister()
	{
		return ATinyShooter1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATinyShooter1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATinyShooter1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyShooter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATinyShooter1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TinyShooter1GameMode.h" },
		{ "ModuleRelativePath", "TinyShooter1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATinyShooter1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATinyShooter1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATinyShooter1GameMode_Statics::ClassParams = {
		&ATinyShooter1GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATinyShooter1GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATinyShooter1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATinyShooter1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATinyShooter1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATinyShooter1GameMode, 3701390952);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATinyShooter1GameMode(Z_Construct_UClass_ATinyShooter1GameMode, &ATinyShooter1GameMode::StaticClass, TEXT("/Script/TinyShooter1"), TEXT("ATinyShooter1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATinyShooter1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
