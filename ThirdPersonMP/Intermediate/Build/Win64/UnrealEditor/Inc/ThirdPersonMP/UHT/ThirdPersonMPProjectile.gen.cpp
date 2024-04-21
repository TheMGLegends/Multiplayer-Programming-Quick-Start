// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/ThirdPersonMPProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonMPProjectile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPProjectile();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPProjectile_NoRegister();
	THIRDPERSONMP_API UEnum* Z_Construct_UEnum_ThirdPersonMP_EProjectileType();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileType;
	static UEnum* EProjectileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonMP_EProjectileType, (UObject*)Z_Construct_UPackage__Script_ThirdPersonMP(), TEXT("EProjectileType"));
		}
		return Z_Registration_Info_UEnum_EProjectileType.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UEnum* StaticEnum<EProjectileType>()
	{
		return EProjectileType_StaticEnum();
	}
	struct Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enumerators[] = {
		{ "Straight", (int64)Straight },
		{ "Homing", (int64)Homing },
		{ "Bouncing", (int64)Bouncing },
		{ "Arcing", (int64)Arcing },
		{ "Max", (int64)Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enum_MetaDataParams[] = {
		{ "Arcing.DisplayName", "Arcing" },
		{ "Arcing.Name", "Arcing" },
		{ "BlueprintType", "true" },
		{ "Bouncing.DisplayName", "Bouncing" },
		{ "Bouncing.Name", "Bouncing" },
		{ "Homing.DisplayName", "Homing" },
		{ "Homing.Name", "Homing" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "Max" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
		{ "Straight.DisplayName", "Straight" },
		{ "Straight.Name", "Straight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonMP,
		nullptr,
		"EProjectileType",
		"EProjectileType",
		Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ThirdPersonMP_EProjectileType()
	{
		if (!Z_Registration_Info_UEnum_EProjectileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileType.InnerSingleton, Z_Construct_UEnum_ThirdPersonMP_EProjectileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectileType.InnerSingleton;
	}
	DEFINE_FUNCTION(AThirdPersonMPProjectile::execRandomizeProjectileType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeProjectileType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonMPProjectile::execOnProjectileImpact)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileImpact(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AThirdPersonMPProjectile::StaticRegisterNativesAThirdPersonMPProjectile()
	{
		UClass* Class = AThirdPersonMPProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileImpact", &AThirdPersonMPProjectile::execOnProjectileImpact },
			{ "RandomizeProjectileType", &AThirdPersonMPProjectile::execRandomizeProjectileType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics
	{
		struct ThirdPersonMPProjectile_eventOnProjectileImpact_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPProjectile_eventOnProjectileImpact_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPProjectile_eventOnProjectileImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPProjectile_eventOnProjectileImpact_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPProjectile_eventOnProjectileImpact_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPProjectile_eventOnProjectileImpact_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPProjectile, nullptr, "OnProjectileImpact", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::ThirdPersonMPProjectile_eventOnProjectileImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::ThirdPersonMPProjectile_eventOnProjectileImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPProjectile, nullptr, "RandomizeProjectileType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonMPProjectile);
	UClass* Z_Construct_UClass_AThirdPersonMPProjectile_NoRegister()
	{
		return AThirdPersonMPProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonMPProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonMPProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThirdPersonMPProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonMPProjectile_OnProjectileImpact, "OnProjectileImpact" }, // 2322368257
		{ &Z_Construct_UFunction_AThirdPersonMPProjectile_RandomizeProjectileType, "RandomizeProjectileType" }, // 2223951831
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThirdPersonMPProjectile.h" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Sphere Component used to test collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Sphere Component used to test collision" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Static Mesh used to provide a visual representation of the object\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Static Mesh used to provide a visual representation of the object" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Movement Component for handling projectile movement\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Movement Component for handling projectile movement" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Particle used when the projectile impacts against another object and explodes\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Particle used when the projectile impacts against another object and explodes" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionEffect_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: The damage type and damage that will be done by this projectile\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: The damage type and damage that will be done by this projectile" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_DamageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: The damage dealt by this projectile\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: The damage dealt by this projectile" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Radius of the explosion\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Radius of the explosion" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionRadius_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Debug Mode Flag\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Debug Mode Flag" },
#endif
	};
#endif
	void Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((AThirdPersonMPProjectile*)Obj)->bDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThirdPersonMPProjectile), &Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Projectile Type\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Projectile Type" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPProjectile, ProjectileType), Z_Construct_UEnum_ThirdPersonMP_EProjectileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileType_MetaData), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileType_MetaData) }; // 3816828394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonMPProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ExplosionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_bDebugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPProjectile_Statics::NewProp_ProjectileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonMPProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonMPProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonMPProjectile_Statics::ClassParams = {
		&AThirdPersonMPProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThirdPersonMPProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonMPProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThirdPersonMPProjectile()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonMPProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonMPProjectile.OuterSingleton, Z_Construct_UClass_AThirdPersonMPProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonMPProjectile.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<AThirdPersonMPProjectile>()
	{
		return AThirdPersonMPProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonMPProjectile);
	AThirdPersonMPProjectile::~AThirdPersonMPProjectile() {}
	struct Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::EnumInfo[] = {
		{ EProjectileType_StaticEnum, TEXT("EProjectileType"), &Z_Registration_Info_UEnum_EProjectileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3816828394U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonMPProjectile, AThirdPersonMPProjectile::StaticClass, TEXT("AThirdPersonMPProjectile"), &Z_Registration_Info_UClass_AThirdPersonMPProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonMPProjectile), 3989368984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_1192553791(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
