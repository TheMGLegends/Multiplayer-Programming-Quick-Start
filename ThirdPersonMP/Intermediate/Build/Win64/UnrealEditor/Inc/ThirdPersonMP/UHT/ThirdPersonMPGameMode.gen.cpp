// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/ThirdPersonMPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonMPGameMode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	DEFINE_FUNCTION(AThirdPersonMPGameMode::execRespawn)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Respawn_Implementation(Z_Param_Controller,Z_Param_Character,Z_Param_SpawnTransform);
		P_NATIVE_END;
	}
	struct ThirdPersonMPGameMode_eventRespawn_Parms
	{
		AController* Controller;
		ACharacter* Character;
		FTransform SpawnTransform;
	};
	static FName NAME_AThirdPersonMPGameMode_Respawn = FName(TEXT("Respawn"));
	void AThirdPersonMPGameMode::Respawn(AController* Controller, ACharacter* Character, const FTransform SpawnTransform)
	{
		ThirdPersonMPGameMode_eventRespawn_Parms Parms;
		Parms.Controller=Controller;
		Parms.Character=Character;
		Parms.SpawnTransform=SpawnTransform;
		ProcessEvent(FindFunctionChecked(NAME_AThirdPersonMPGameMode_Respawn),&Parms);
	}
	void AThirdPersonMPGameMode::StaticRegisterNativesAThirdPersonMPGameMode()
	{
		UClass* Class = AThirdPersonMPGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Respawn", &AThirdPersonMPGameMode::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPGameMode_eventRespawn_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPGameMode_eventRespawn_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPGameMode_eventRespawn_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_SpawnTransform_MetaData), Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_SpawnTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::NewProp_SpawnTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThirdPersonMPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPGameMode, nullptr, "Respawn", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::PropPointers), sizeof(ThirdPersonMPGameMode_eventRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(ThirdPersonMPGameMode_eventRespawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonMPGameMode);
	UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister()
	{
		return AThirdPersonMPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonMPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonMPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThirdPersonMPGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonMPGameMode_Respawn, "Respawn" }, // 845189332
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonMPGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonMPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonMPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonMPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonMPGameMode_Statics::ClassParams = {
		&AThirdPersonMPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AThirdPersonMPGameMode()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonMPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonMPGameMode.OuterSingleton, Z_Construct_UClass_AThirdPersonMPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonMPGameMode.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<AThirdPersonMPGameMode>()
	{
		return AThirdPersonMPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonMPGameMode);
	AThirdPersonMPGameMode::~AThirdPersonMPGameMode() {}
	struct Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonMPGameMode, AThirdPersonMPGameMode::StaticClass, TEXT("AThirdPersonMPGameMode"), &Z_Registration_Info_UClass_AThirdPersonMPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonMPGameMode), 2313961816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_3376912399(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
