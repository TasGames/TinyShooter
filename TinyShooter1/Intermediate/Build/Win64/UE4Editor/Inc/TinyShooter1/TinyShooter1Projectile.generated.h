// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TINYSHOOTER1_TinyShooter1Projectile_generated_h
#error "TinyShooter1Projectile.generated.h already included, missing '#pragma once' in TinyShooter1Projectile.h"
#endif
#define TINYSHOOTER1_TinyShooter1Projectile_generated_h

#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATinyShooter1Projectile(); \
	friend struct Z_Construct_UClass_ATinyShooter1Projectile_Statics; \
public: \
	DECLARE_CLASS(ATinyShooter1Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(ATinyShooter1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATinyShooter1Projectile(); \
	friend struct Z_Construct_UClass_ATinyShooter1Projectile_Statics; \
public: \
	DECLARE_CLASS(ATinyShooter1Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyShooter1"), NO_API) \
	DECLARE_SERIALIZER(ATinyShooter1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATinyShooter1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATinyShooter1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATinyShooter1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATinyShooter1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATinyShooter1Projectile(ATinyShooter1Projectile&&); \
	NO_API ATinyShooter1Projectile(const ATinyShooter1Projectile&); \
public:


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATinyShooter1Projectile(ATinyShooter1Projectile&&); \
	NO_API ATinyShooter1Projectile(const ATinyShooter1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATinyShooter1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATinyShooter1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATinyShooter1Projectile)


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATinyShooter1Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATinyShooter1Projectile, ProjectileMovement); }


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_12_PROLOG
#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_RPC_WRAPPERS \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_INCLASS \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TinyShooter1_Source_TinyShooter1_TinyShooter1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
