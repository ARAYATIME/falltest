// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoFallguys/ProyectoFallguysCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoFallguysCharacter() {}
// Cross Module References
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_AProyectoFallguysCharacter_NoRegister();
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_AProyectoFallguysCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProyectoFallguys();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProyectoFallguysCharacter::execWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProyectoFallguysCharacter::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProyectoFallguysCharacter::execDoubleJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleJump();
		P_NATIVE_END;
	}
	void AProyectoFallguysCharacter::StaticRegisterNativesAProyectoFallguysCharacter()
	{
		UClass* Class = AProyectoFallguysCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoubleJump", &AProyectoFallguysCharacter::execDoubleJump },
			{ "Sprint", &AProyectoFallguysCharacter::execSprint },
			{ "Walk", &AProyectoFallguysCharacter::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProyectoFallguysCharacter, nullptr, "DoubleJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProyectoFallguysCharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProyectoFallguysCharacter, nullptr, "Walk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProyectoFallguysCharacter_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProyectoFallguysCharacter_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProyectoFallguysCharacter);
	UClass* Z_Construct_UClass_AProyectoFallguysCharacter_NoRegister()
	{
		return AProyectoFallguysCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoFallguysCharacter_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpCounter_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DoubleJumpCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoFallguysCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoFallguys,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProyectoFallguysCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProyectoFallguysCharacter_DoubleJump, "DoubleJump" }, // 226677477
		{ &Z_Construct_UFunction_AProyectoFallguysCharacter_Sprint, "Sprint" }, // 771716825
		{ &Z_Construct_UFunction_AProyectoFallguysCharacter_Walk, "Walk" }, // 287106212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProyectoFallguysCharacter.h" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_DoubleJumpCounter_MetaData[] = {
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_DoubleJumpCounter = { "DoubleJumpCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, DoubleJumpCounter), METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_DoubleJumpCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_DoubleJumpCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "ProyectoFallguysCharacter" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_JumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "ProyectoFallguysCharacter" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_WalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "Category", "ProyectoFallguysCharacter" },
		{ "ModuleRelativePath", "ProyectoFallguysCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectoFallguysCharacter, RunningSpeed), METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_RunningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_RunningSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectoFallguysCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_DoubleJumpCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_JumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_WalkingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectoFallguysCharacter_Statics::NewProp_RunningSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoFallguysCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoFallguysCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProyectoFallguysCharacter_Statics::ClassParams = {
		&AProyectoFallguysCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProyectoFallguysCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoFallguysCharacter()
	{
		if (!Z_Registration_Info_UClass_AProyectoFallguysCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProyectoFallguysCharacter.OuterSingleton, Z_Construct_UClass_AProyectoFallguysCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProyectoFallguysCharacter.OuterSingleton;
	}
	template<> PROYECTOFALLGUYS_API UClass* StaticClass<AProyectoFallguysCharacter>()
	{
		return AProyectoFallguysCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoFallguysCharacter);
	struct Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProyectoFallguysCharacter, AProyectoFallguysCharacter::StaticClass, TEXT("AProyectoFallguysCharacter"), &Z_Registration_Info_UClass_AProyectoFallguysCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProyectoFallguysCharacter), 3334991026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysCharacter_h_993726756(TEXT("/Script/ProyectoFallguys"),
		Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
