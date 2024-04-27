// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/StraightProjectile_DT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStraightProjectile_DT() {}
// Cross Module References
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UBaseProjectile_DT();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UStraightProjectile_DT();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UStraightProjectile_DT_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	void UStraightProjectile_DT::StaticRegisterNativesUStraightProjectile_DT()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStraightProjectile_DT);
	UClass* Z_Construct_UClass_UStraightProjectile_DT_NoRegister()
	{
		return UStraightProjectile_DT::StaticClass();
	}
	struct Z_Construct_UClass_UStraightProjectile_DT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStraightProjectile_DT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseProjectile_DT,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStraightProjectile_DT_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStraightProjectile_DT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StraightProjectile_DT.h" },
		{ "ModuleRelativePath", "StraightProjectile_DT.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStraightProjectile_DT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStraightProjectile_DT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStraightProjectile_DT_Statics::ClassParams = {
		&UStraightProjectile_DT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStraightProjectile_DT_Statics::Class_MetaDataParams), Z_Construct_UClass_UStraightProjectile_DT_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStraightProjectile_DT()
	{
		if (!Z_Registration_Info_UClass_UStraightProjectile_DT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStraightProjectile_DT.OuterSingleton, Z_Construct_UClass_UStraightProjectile_DT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStraightProjectile_DT.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<UStraightProjectile_DT>()
	{
		return UStraightProjectile_DT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStraightProjectile_DT);
	UStraightProjectile_DT::~UStraightProjectile_DT() {}
	struct Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_StraightProjectile_DT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_StraightProjectile_DT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStraightProjectile_DT, UStraightProjectile_DT::StaticClass, TEXT("UStraightProjectile_DT"), &Z_Registration_Info_UClass_UStraightProjectile_DT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStraightProjectile_DT), 2117353708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_StraightProjectile_DT_h_923270955(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_StraightProjectile_DT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_StraightProjectile_DT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
