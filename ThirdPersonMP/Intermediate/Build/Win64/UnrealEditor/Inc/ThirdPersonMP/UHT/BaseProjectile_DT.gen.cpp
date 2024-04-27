// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/BaseProjectile_DT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProjectile_DT() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UBaseProjectile_DT();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_UBaseProjectile_DT_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	DEFINE_FUNCTION(UBaseProjectile_DT::execPrintDamageMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintDamageMessage();
		P_NATIVE_END;
	}
	void UBaseProjectile_DT::StaticRegisterNativesUBaseProjectile_DT()
	{
		UClass* Class = UBaseProjectile_DT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintDamageMessage", &UBaseProjectile_DT::execPrintDamageMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "DamageMessage" },
		{ "ModuleRelativePath", "BaseProjectile_DT.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectile_DT, nullptr, "PrintDamageMessage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseProjectile_DT);
	UClass* Z_Construct_UClass_UBaseProjectile_DT_NoRegister()
	{
		return UBaseProjectile_DT::StaticClass();
	}
	struct Z_Construct_UClass_UBaseProjectile_DT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DamageMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseProjectile_DT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseProjectile_DT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseProjectile_DT_PrintDamageMessage, "PrintDamageMessage" }, // 1236718954
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectile_DT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseProjectile_DT.h" },
		{ "ModuleRelativePath", "BaseProjectile_DT.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectile_DT_Statics::NewProp_DamageMessage_MetaData[] = {
		{ "Category", "DamageMessage" },
		{ "ModuleRelativePath", "BaseProjectile_DT.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseProjectile_DT_Statics::NewProp_DamageMessage = { "DamageMessage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseProjectile_DT, DamageMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::NewProp_DamageMessage_MetaData), Z_Construct_UClass_UBaseProjectile_DT_Statics::NewProp_DamageMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseProjectile_DT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectile_DT_Statics::NewProp_DamageMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseProjectile_DT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseProjectile_DT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseProjectile_DT_Statics::ClassParams = {
		&UBaseProjectile_DT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseProjectile_DT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseProjectile_DT_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectile_DT_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseProjectile_DT()
	{
		if (!Z_Registration_Info_UClass_UBaseProjectile_DT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseProjectile_DT.OuterSingleton, Z_Construct_UClass_UBaseProjectile_DT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseProjectile_DT.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<UBaseProjectile_DT>()
	{
		return UBaseProjectile_DT::StaticClass();
	}
	UBaseProjectile_DT::UBaseProjectile_DT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseProjectile_DT);
	UBaseProjectile_DT::~UBaseProjectile_DT() {}
	struct Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_BaseProjectile_DT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_BaseProjectile_DT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseProjectile_DT, UBaseProjectile_DT::StaticClass, TEXT("UBaseProjectile_DT"), &Z_Registration_Info_UClass_UBaseProjectile_DT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseProjectile_DT), 2059596204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_BaseProjectile_DT_h_92810723(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_BaseProjectile_DT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Projects_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_BaseProjectile_DT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
