// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUnRealProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyUnRealProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyUnRealProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MyUnRealProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyUnRealProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x11C8C21E,
				0x937D4BAD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyUnRealProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyUnRealProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyUnRealProject(Z_Construct_UPackage__Script_MyUnRealProject, TEXT("/Script/MyUnRealProject"), Z_Registration_Info_UPackage__Script_MyUnRealProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x11C8C21E, 0x937D4BAD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
