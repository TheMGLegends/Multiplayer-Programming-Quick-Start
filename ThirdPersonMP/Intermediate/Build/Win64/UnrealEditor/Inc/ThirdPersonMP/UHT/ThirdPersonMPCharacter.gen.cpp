// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/ThirdPersonMPCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonMPCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPCharacter();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	DEFINE_FUNCTION(AThirdPersonMPCharacter::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonMPCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonMPCharacter::execSetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_healthValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHealth(Z_Param_healthValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonMPCharacter::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonMPCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	void AThirdPersonMPCharacter::StaticRegisterNativesAThirdPersonMPCharacter()
	{
		UClass* Class = AThirdPersonMPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHealth", &AThirdPersonMPCharacter::execGetCurrentHealth },
			{ "GetMaxHealth", &AThirdPersonMPCharacter::execGetMaxHealth },
			{ "OnRep_CurrentHealth", &AThirdPersonMPCharacter::execOnRep_CurrentHealth },
			{ "SetCurrentHealth", &AThirdPersonMPCharacter::execSetCurrentHealth },
			{ "TakeDamage", &AThirdPersonMPCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics
	{
		struct ThirdPersonMPCharacter_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Getter for Current Health\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Getter for Current Health" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::ThirdPersonMPCharacter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::ThirdPersonMPCharacter_eventGetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics
	{
		struct ThirdPersonMPCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Getter for Max Health\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Getter for Max Health" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::ThirdPersonMPCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::ThirdPersonMPCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: This function is called when the CurrentHealth property is replicated\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: This function is called when the CurrentHealth property is replicated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPCharacter, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics
	{
		struct ThirdPersonMPCharacter_eventSetCurrentHealth_Parms
		{
			float healthValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healthValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::NewProp_healthValue = { "healthValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventSetCurrentHealth_Parms, healthValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::NewProp_healthValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Setter for Current Health\n// EXTRA: Clamps value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server!\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Setter for Current Health\nEXTRA: Clamps value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPCharacter, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::ThirdPersonMPCharacter_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::ThirdPersonMPCharacter_eventSetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics
	{
		struct ThirdPersonMPCharacter_eventTakeDamage_Parms
		{
			float DamageAmount;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData), Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData) }; // 4174483363
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonMPCharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_EventInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INFO: Overriden Take Damage Event\n" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INFO: Overriden Take Damage Event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonMPCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::ThirdPersonMPCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::ThirdPersonMPCharacter_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonMPCharacter);
	UClass* Z_Construct_UClass_AThirdPersonMPCharacter_NoRegister()
	{
		return AThirdPersonMPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonMPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonMPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThirdPersonMPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonMPCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 651412951
		{ &Z_Construct_UFunction_AThirdPersonMPCharacter_GetMaxHealth, "GetMaxHealth" }, // 2328768396
		{ &Z_Construct_UFunction_AThirdPersonMPCharacter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2630353802
		{ &Z_Construct_UFunction_AThirdPersonMPCharacter_SetCurrentHealth, "SetCurrentHealth" }, // 3930060985
		{ &Z_Construct_UFunction_AThirdPersonMPCharacter_TakeDamage, "TakeDamage" }, // 1587920501
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonMPCharacter.h" },
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "ThirdPersonMPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonMPCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CurrentHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonMPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonMPCharacter_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonMPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonMPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonMPCharacter_Statics::ClassParams = {
		&AThirdPersonMPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThirdPersonMPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonMPCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThirdPersonMPCharacter()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonMPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonMPCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonMPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonMPCharacter.OuterSingleton;
	}
	template<> THIRDPERSONMP_API UClass* StaticClass<AThirdPersonMPCharacter>()
	{
		return AThirdPersonMPCharacter::StaticClass();
	}

	void AThirdPersonMPCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));

		const bool bIsValid = true
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AThirdPersonMPCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonMPCharacter);
	AThirdPersonMPCharacter::~AThirdPersonMPCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonMPCharacter, AThirdPersonMPCharacter::StaticClass, TEXT("AThirdPersonMPCharacter"), &Z_Registration_Info_UClass_AThirdPersonMPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonMPCharacter), 3376398647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_1289352410(TEXT("/Script/ThirdPersonMP"),
		Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_5CINCM67_Downloads_Multiplayer_Programming_Quick_Start_ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
