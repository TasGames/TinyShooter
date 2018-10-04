// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyShooter1/TriggerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	TINYSHOOTER1_API UFunction* Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TinyShooter1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	TINYSHOOTER1_API UClass* Z_Construct_UClass_UTriggerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics
	{
		struct _Script_TinyShooter1_eventTriggerEvent_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::NewProp_InputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "InputVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_TinyShooter1_eventTriggerEvent_Parms, InputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::NewProp_InputVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerComponent.h" },
		{ "ToolTip", "Declare event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TinyShooter1, "TriggerEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_TinyShooter1_eventTriggerEvent_Parms), Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
	}
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTriggered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerOnZeroVector_MetaData[];
#endif
		static void NewProp_TriggerOnZeroVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TriggerOnZeroVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyShooter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_OnTriggered_MetaData[] = {
		{ "Category", "TriggerState" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
		{ "ToolTip", "Event decleration" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_OnTriggered = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTriggered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UTriggerComponent, OnTriggered), Z_Construct_UDelegateFunction_TinyShooter1_TriggerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_OnTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_OnTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector_SetBit(void* Obj)
	{
		((UTriggerComponent*)Obj)->TriggerOnZeroVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector = { UE4CodeGen_Private::EPropertyClass::Bool, "TriggerOnZeroVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTriggerComponent), &Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
		{ "ToolTip", "How fast it retriggers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "FireRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTriggerComponent, FireRate), METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_FireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_OnTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_TriggerOnZeroVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTriggerComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerComponent, 1422431717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerComponent(Z_Construct_UClass_UTriggerComponent, &UTriggerComponent::StaticClass, TEXT("/Script/TinyShooter1"), TEXT("UTriggerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
