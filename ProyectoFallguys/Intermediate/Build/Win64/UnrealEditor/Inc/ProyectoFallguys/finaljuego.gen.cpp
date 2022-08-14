// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoFallguys/finaljuego.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinaljuego() {}
// Cross Module References
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_Afinaljuego_NoRegister();
	PROYECTOFALLGUYS_API UClass* Z_Construct_UClass_Afinaljuego();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_ProyectoFallguys();
// End Cross Module References
	void Afinaljuego::StaticRegisterNativesAfinaljuego()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Afinaljuego);
	UClass* Z_Construct_UClass_Afinaljuego_NoRegister()
	{
		return Afinaljuego::StaticClass();
	}
	struct Z_Construct_UClass_Afinaljuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afinaljuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoFallguys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afinaljuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "finaljuego.h" },
		{ "ModuleRelativePath", "finaljuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afinaljuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afinaljuego>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Afinaljuego_Statics::ClassParams = {
		&Afinaljuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afinaljuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afinaljuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afinaljuego()
	{
		if (!Z_Registration_Info_UClass_Afinaljuego.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afinaljuego.OuterSingleton, Z_Construct_UClass_Afinaljuego_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Afinaljuego.OuterSingleton;
	}
	template<> PROYECTOFALLGUYS_API UClass* StaticClass<Afinaljuego>()
	{
		return Afinaljuego::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afinaljuego);
	struct Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_finaljuego_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_finaljuego_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Afinaljuego, Afinaljuego::StaticClass, TEXT("Afinaljuego"), &Z_Registration_Info_UClass_Afinaljuego, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afinaljuego), 3370658280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_finaljuego_h_3238469258(TEXT("/Script/ProyectoFallguys"),
		Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_finaljuego_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProyectoFallguys_Source_ProyectoFallguys_finaljuego_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
