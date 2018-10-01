// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TINYSHOOTER1_TriggerableWeaponComponent_generated_h
#error "TriggerableWeaponComponent.generated.h already included, missing '#pragma once' in TriggerableWeaponComponent.h"
#endif
#define TINYSHOOTER1_TriggerableWeaponComponent_generated_h

#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggered) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Triggered(Z_Param_InputVector); \
		P_NATIVE_END; \
	}


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggered) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Triggered(Z_Param_InputVector); \
		P_NATIVE_END; \
	}


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerableWeaponComponent(); \
	friend struct Z_Construct_UClass_UTriggerableWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerableWeaponComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(UTriggerableWeaponComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerableWeaponComponent(); \
	friend struct Z_Construct_UClass_UTriggerableWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerableWeaponComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(UTriggerableWeaponComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerableWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerableWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerableWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerableWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerableWeaponComponent(UTriggerableWeaponComponent&&); \
	NO_API UTriggerableWeaponComponent(const UTriggerableWeaponComponent&); \
public:


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerableWeaponComponent(UTriggerableWeaponComponent&&); \
	NO_API UTriggerableWeaponComponent(const UTriggerableWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerableWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerableWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerableWeaponComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_10_PROLOG
#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_RPC_WRAPPERS \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_INCLASS \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_INCLASS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TinyShooter1_Source_TinyShooter1_TriggerableWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
