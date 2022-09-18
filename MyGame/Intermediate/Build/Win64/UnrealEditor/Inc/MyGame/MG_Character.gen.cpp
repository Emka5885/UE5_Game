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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRestingV_MetaData[];
#endif
		static void NewProp_IsRestingV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRestingV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeV_MetaData[];
#endif
		static void NewProp_StartTimeV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartTimeV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHittingV_MetaData[];
#endif
		static void NewProp_IsHittingV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHittingV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMG_Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMG_Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMG_Character, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV_MetaData[] = {
		{ "Category", "MG_Character" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
	};
#endif
	void Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV_SetBit(void* Obj)
	{
		((AMG_Character*)Obj)->IsRestingV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV = { "IsRestingV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMG_Character), &Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV_MetaData[] = {
		{ "Category", "MG_Character" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
	};
#endif
	void Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV_SetBit(void* Obj)
	{
		((AMG_Character*)Obj)->StartTimeV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV = { "StartTimeV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMG_Character), &Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV_MetaData[] = {
		{ "Category", "MG_Character" },
		{ "ModuleRelativePath", "Game/MG_Character.h" },
	};
#endif
	void Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV_SetBit(void* Obj)
	{
		((AMG_Character*)Obj)->IsHittingV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV = { "IsHittingV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMG_Character), &Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMG_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_IsRestingV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_StartTimeV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMG_Character_Statics::NewProp_IsHittingV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMG_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMG_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMG_Character_Statics::ClassParams = {
		&AMG_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMG_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMG_Character_Statics::PropPointers),
		0,
		0x008000A4u,
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
		{ Z_Construct_UClass_AMG_Character, AMG_Character::StaticClass, TEXT("AMG_Character"), &Z_Registration_Info_UClass_AMG_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMG_Character), 2598626780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_1300099637(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyGame_Source_MyGame_Game_MG_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
