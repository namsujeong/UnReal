// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestSever/TestSeverGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSeverGameModeBase() {}
// Cross Module References
	TESTSEVER_API UClass* Z_Construct_UClass_ATestSeverGameModeBase_NoRegister();
	TESTSEVER_API UClass* Z_Construct_UClass_ATestSeverGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestSever();
// End Cross Module References
	void ATestSeverGameModeBase::StaticRegisterNativesATestSeverGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestSeverGameModeBase);
	UClass* Z_Construct_UClass_ATestSeverGameModeBase_NoRegister()
	{
		return ATestSeverGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestSeverGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestSeverGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestSever,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestSeverGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestSeverGameModeBase.h" },
		{ "ModuleRelativePath", "TestSeverGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestSeverGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestSeverGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestSeverGameModeBase_Statics::ClassParams = {
		&ATestSeverGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestSeverGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestSeverGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestSeverGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATestSeverGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestSeverGameModeBase.OuterSingleton, Z_Construct_UClass_ATestSeverGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestSeverGameModeBase.OuterSingleton;
	}
	template<> TESTSEVER_API UClass* StaticClass<ATestSeverGameModeBase>()
	{
		return ATestSeverGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestSeverGameModeBase);
	struct Z_CompiledInDeferFile_FID_TestSever_Source_TestSever_TestSeverGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestSever_Source_TestSever_TestSeverGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestSeverGameModeBase, ATestSeverGameModeBase::StaticClass, TEXT("ATestSeverGameModeBase"), &Z_Registration_Info_UClass_ATestSeverGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestSeverGameModeBase), 3617385626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestSever_Source_TestSever_TestSeverGameModeBase_h_2755219170(TEXT("/Script/TestSever"),
		Z_CompiledInDeferFile_FID_TestSever_Source_TestSever_TestSeverGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestSever_Source_TestSever_TestSeverGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
