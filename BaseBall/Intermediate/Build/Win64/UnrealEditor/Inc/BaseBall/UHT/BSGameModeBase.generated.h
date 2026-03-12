// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/BSGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BSGameModeBase_generated_h
#error "BSGameModeBase.generated.h already included, missing '#pragma once' in BSGameModeBase.h"
#endif
#define BASEBALL_BSGameModeBase_generated_h

#define FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABSGameModeBase(); \
	friend struct Z_Construct_UClass_ABSGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABSGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABSGameModeBase)


#define FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABSGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABSGameModeBase(ABSGameModeBase&&); \
	ABSGameModeBase(const ABSGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABSGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABSGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABSGameModeBase) \
	NO_API virtual ~ABSGameModeBase();


#define FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_12_PROLOG
#define FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABSGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
