// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonMPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
#ifdef THIRDPERSONMP_ThirdPersonMPCharacter_generated_h
#error "ThirdPersonMPCharacter.generated.h already included, missing '#pragma once' in ThirdPersonMPCharacter.h"
#endif
#define THIRDPERSONMP_ThirdPersonMPCharacter_generated_h

#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_SPARSE_DATA
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_ACCESSORS
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonMPCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPCharacter(AThirdPersonMPCharacter&&); \
	NO_API AThirdPersonMPCharacter(const AThirdPersonMPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonMPCharacter) \
	NO_API virtual ~AThirdPersonMPCharacter();


#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_18_PROLOG
#define FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_SPARSE_DATA \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_ACCESSORS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONMP_API UClass* StaticClass<class AThirdPersonMPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
