// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/MainMenu/MainMenuGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameModeBase() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_AMainMenuGameModeBase_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AMainMenuGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void AMainMenuGameModeBase::StaticRegisterNativesAMainMenuGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGameModeBase);
	UClass* Z_Construct_UClass_AMainMenuGameModeBase_NoRegister()
	{
		return AMainMenuGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainMenu/MainMenuGameModeBase.h" },
		{ "ModuleRelativePath", "MainMenu/MainMenuGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::ClassParams = {
		&AMainMenuGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMainMenuGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGameModeBase.OuterSingleton, Z_Construct_UClass_AMainMenuGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuGameModeBase.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<AMainMenuGameModeBase>()
	{
		return AMainMenuGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameModeBase);
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_MainMenu_MainMenuGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_MainMenu_MainMenuGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGameModeBase, AMainMenuGameModeBase::StaticClass, TEXT("AMainMenuGameModeBase"), &Z_Registration_Info_UClass_AMainMenuGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGameModeBase), 2319232054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_MainMenu_MainMenuGameModeBase_h_75895301(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_MainMenu_MainMenuGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_MainMenu_MainMenuGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
