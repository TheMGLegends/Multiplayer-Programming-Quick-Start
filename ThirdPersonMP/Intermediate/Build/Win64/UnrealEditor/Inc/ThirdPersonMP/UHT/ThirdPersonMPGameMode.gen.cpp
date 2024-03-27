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
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	void AThirdPersonMPGameMode::StaticRegisterNativesAThirdPersonMPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonMPGameMode);
	UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister()
	{
		return AThirdPersonMPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonMPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonMPGameMode, AThirdPersonMPGameMode::StaticClass, TEXT("AThirdPersonMPGameMode"), &Z_Registration_Info_UClass_AThirdPersonMPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonMPGameMode), 1190159442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_3967106865(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
