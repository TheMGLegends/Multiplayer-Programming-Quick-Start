// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonMPProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THIRDPERSONMP_ThirdPersonMPProjectile_generated_h
#error "ThirdPersonMPProjectile.generated.h already included, missing '#pragma once' in ThirdPersonMPProjectile.h"
#endif
#define THIRDPERSONMP_ThirdPersonMPProjectile_generated_h

#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_SPARSE_DATA
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRandomizeProjectileType); \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonMPProjectile(); \
	friend struct Z_Construct_UClass_AThirdPersonMPProjectile_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPProjectile)


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPProjectile(AThirdPersonMPProjectile&&); \
	NO_API AThirdPersonMPProjectile(const AThirdPersonMPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonMPProjectile) \
	NO_API virtual ~AThirdPersonMPProjectile();


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_20_PROLOG
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_SPARSE_DATA \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_INCLASS_NO_PURE_DECLS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONMP_API UClass* StaticClass<class AThirdPersonMPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h


#define FOREACH_ENUM_EPROJECTILETYPE(op) \
	op(Straight) \
	op(Homing) \
	op(Bouncing) \
	op(Arcing) \
	op(Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
