// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Game/MG_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMG_Character() {}
// Cross Module References
	MYGAME_API UClass* Z_Construct_UClass_AMG_Character_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AMG_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void AMG_Character::StaticRegisterNativesAMG_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMG_Character);
	UClass* Z_Construct_UClass_AMG_Character_NoRegister()
	{
		return AMG_Character::StaticClass();
	}
	struct Z_Construct_UClass_AMG_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMG_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/MG_Character.h" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMG_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMG_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMG_Character_Statics::ClassParams = {
		&AMG_Character::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMG_Character()
	{
		if (!Z_Registration_Info_UClass_AMG_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMG_Character.OuterSingleton, Z_Construct_UClass_AMG_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMG_Character.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<AMG_Character>()
	{
		return AMG_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMG_Character);
	struct Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMG_Character, AMG_Character::StaticClass, TEXT("AMG_Character"), &Z_Registration_Info_UClass_AMG_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMG_Character), 2908805187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_879782688(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
