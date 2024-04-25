// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPCharacter_NoRegister();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UPlayerHUD();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUD);
	UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
	{
		return UPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerHUD.h" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, Character), Z_Construct_UClass_AThirdPersonMPCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
		&UPlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerHUD()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<UPlayerHUD>()
	{
		return UPlayerHUD::StaticClass();
	}
	UPlayerHUD::UPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
	UPlayerHUD::~UPlayerHUD() {}
	struct Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 2185035991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_PlayerHUD_h_2115913693(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
