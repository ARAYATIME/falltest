// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoFallguys/ProyectoFallguysGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoFallguysGameMode() {}
// Cross Module References
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_AProyectoFallguysGameMode_NoRegister();
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_AProyectoFallguysGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProyectoFallguys();
// End Cross Module References
	void AProyectoFallguysGameMode::StaticRegisterNativesAProyectoFallguysGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProyectoFallguysGameMode);
	UClass* Z_Construct_UClass_AProyectoFallguysGameMode_NoRegister()
	{
		return AProyectoFallguysGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoFallguysGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoFallguysGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoFallguys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoFallguysGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProyectoFallguysGameMode.h" },
		{ "ModuleRelativePath", "ProyectoFallguysGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoFallguysGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoFallguysGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProyectoFallguysGameMode_Statics::ClassParams = {
		&AProyectoFallguysGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProyectoFallguysGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoFallguysGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoFallguysGameMode()
	{
		if (!Z_Registration_Info_UClass_AProyectoFallguysGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProyectoFallguysGameMode.OuterSingleton, Z_Construct_UClass_AProyectoFallguysGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProyectoFallguysGameMode.OuterSingleton;
	}
	template<> PROYECTOFALLGUYS_API UClass* StaticClass<AProyectoFallguysGameMode>()
	{
		return AProyectoFallguysGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoFallguysGameMode);
	struct Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProyectoFallguysGameMode, AProyectoFallguysGameMode::StaticClass, TEXT("AProyectoFallguysGameMode"), &Z_Registration_Info_UClass_AProyectoFallguysGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProyectoFallguysGameMode), 4169212656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysGameMode_h_2681547328(TEXT("/Script/ProyectoFallguys"),
		Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_ProyectoFallguysGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
