// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_MG_Character_generated_h
#error "MG_Character.generated.h already included, missing '#pragma once' in MG_Character.h"
#endif
#define MYGAME_MG_Character_generated_h

#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_SPARSE_DATA
#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_RPC_WRAPPERS
#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMG_Character(); \
	friend struct Z_Construct_UClass_AMG_Character_Statics; \
public: \
	DECLARE_CLASS(AMG_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AMG_Character)


#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMG_Character(); \
	friend struct Z_Construct_UClass_AMG_Character_Statics; \
public: \
	DECLARE_CLASS(AMG_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(AMG_Character)


#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMG_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMG_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMG_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMG_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMG_Character(AMG_Character&&); \
	NO_API AMG_Character(const AMG_Character&); \
public:


#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMG_Character(AMG_Character&&); \
	NO_API AMG_Character(const AMG_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMG_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMG_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMG_Character)


#define FID_MyGame_Source_MyGame_Game_MG_Character_h_10_PROLOG
#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_RPC_WRAPPERS \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_INCLASS \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyGame_Source_MyGame_Game_MG_Character_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_SPARSE_DATA \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyGame_Source_MyGame_Game_MG_Character_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class AMG_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyGame_Source_MyGame_Game_MG_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
