// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSever_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestSever;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestSever()
	{
		if (!Z_Registration_Info_UPackage__Script_TestSever.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestSever",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB385B047,
				0xD8E4B728,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestSever.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestSever.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestSever(Z_Construct_UPackage__Script_TestSever, TEXT("/Script/TestSever"), Z_Registration_Info_UPackage__Script_TestSever, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB385B047, 0xD8E4B728));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
