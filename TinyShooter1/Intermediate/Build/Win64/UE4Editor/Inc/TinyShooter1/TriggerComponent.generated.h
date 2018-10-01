// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TINYSHOOTER1_TriggerComponent_generated_h
#error "TriggerComponent.generated.h already included, missing '#pragma once' in TriggerComponent.h"
#endif
#define TINYSHOOTER1_TriggerComponent_generated_h

#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_10_DELEGATE \
struct _Script_TinyShooter1_eventTriggerEvent_Parms \
{ \
	FVector InputVector; \
}; \
static inline void FTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerEvent, FVector InputVector) \
{ \
	_Script_TinyShooter1_eventTriggerEvent_Parms Parms; \
	Parms.InputVector=InputVector; \
	TriggerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_RPC_WRAPPERS
#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerComponent(); \
	friend struct Z_Construct_UClass_UTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(UTriggerComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerComponent(); \
	friend struct Z_Construct_UClass_UTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(UTriggerComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerComponent(UTriggerComponent&&); \
	NO_API UTriggerComponent(const UTriggerComponent&); \
public:


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerComponent(UTriggerComponent&&); \
	NO_API UTriggerComponent(const UTriggerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerComponent)


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_12_PROLOG
#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_RPC_WRAPPERS \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_INCLASS \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_INCLASS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TriggerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TinyShooter1_Source_TinyShooter1_TriggerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
