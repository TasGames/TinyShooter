// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyShooter1/TriggerableWeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerableWeaponComponent() {}
// Cross Module References
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UTriggerableWeaponComponent_NoRegister();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UTriggerableWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_TinyShooter1();
	TINYSHOOTER1_API UFunction* Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_ATinyShooter1Projectile_NoRegister();
// End Cross Module References
	void UTriggerableWeaponComponent::StaticRegisterNativesUTriggerableWeaponComponent()
	{
		UClass* Class = UTriggerableWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Triggered", &UTriggerableWeaponComponent::execTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics
	{
		struct TriggerableWeaponComponent_eventTriggered_Parms
		{
			FVector InputVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::NewProp_InputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "InputVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TriggerableWeaponComponent_eventTriggered_Parms, InputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::NewProp_InputVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerableWeaponComponent.h" },
		{ "ToolTip", "this has to be a ufunction so that it can be bound to the OnTriggered multicast delegate on the trigger component!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerableWeaponComponent, "Triggered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(TriggerableWeaponComponent_eventTriggered_Parms), Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerableWeaponComponent_NoRegister()
	{
		return UTriggerableWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerableWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerableWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyShooter1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerableWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerableWeaponComponent_Triggered, "Triggered" }, // 3102952077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TriggerableWeaponComponent.h" },
		{ "ModuleRelativePath", "TriggerableWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "TriggerableWeaponComponent.h" },
		{ "ToolTip", "Sound plays when it fires" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTriggerableWeaponComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TriggerableWeaponComponent.h" },
		{ "ToolTip", "Which projectile does it fire" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_ProjectileType = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UTriggerableWeaponComponent, ProjectileType), Z_Construct_UClass_ATinyShooter1Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_ProjectileType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_ProjectileType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerableWeaponComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerableWeaponComponent_Statics::NewProp_ProjectileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerableWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerableWeaponComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerableWeaponComponent_Statics::ClassParams = {
		&UTriggerableWeaponComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTriggerableWeaponComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTriggerableWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerableWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerableWeaponComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerableWeaponComponent, 259679034);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerableWeaponComponent(Z_Construct_UClass_UTriggerableWeaponComponent, &UTriggerableWeaponComponent::StaticClass, TEXT("/Script/TinyShooter1"), TEXT("UTriggerableWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerableWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
