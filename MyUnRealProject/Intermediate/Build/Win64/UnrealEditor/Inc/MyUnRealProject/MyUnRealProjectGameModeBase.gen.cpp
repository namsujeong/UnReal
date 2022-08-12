// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUnRealProject/MyUnRealProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUnRealProjectGameModeBase() {}
// Cross Module References
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AMyUnRealProjectGameModeBase_NoRegister();
	MYUNREALPROJECT_API UClass* Z_Construct_UClass_AMyUnRealProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyUnRealProject();
// End Cross Module References
	void AMyUnRealProjectGameModeBase::StaticRegisterNativesAMyUnRealProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyUnRealProjectGameModeBase);
	UClass* Z_Construct_UClass_AMyUnRealProjectGameModeBase_NoRegister()
	{
		return AMyUnRealProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUnRealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyUnRealProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MyUnRealProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyUnRealProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::ClassParams = {
		&AMyUnRealProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyUnRealProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyUnRealProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyUnRealProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AMyUnRealProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyUnRealProjectGameModeBase.OuterSingleton;
	}
	template<> MYUNREALPROJECT_API UClass* StaticClass<AMyUnRealProjectGameModeBase>()
	{
		return AMyUnRealProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyUnRealProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_MyUnRealProject_Source_MyUnRealProject_MyUnRealProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnRealProject_Source_MyUnRealProject_MyUnRealProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyUnRealProjectGameModeBase, AMyUnRealProjectGameModeBase::StaticClass, TEXT("AMyUnRealProjectGameModeBase"), &Z_Registration_Info_UClass_AMyUnRealProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyUnRealProjectGameModeBase), 106952434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyUnRealProject_Source_MyUnRealProject_MyUnRealProjectGameModeBase_h_446400891(TEXT("/Script/MyUnRealProject"),
		Z_CompiledInDeferFile_FID_MyUnRealProject_Source_MyUnRealProject_MyUnRealProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyUnRealProject_Source_MyUnRealProject_MyUnRealProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
