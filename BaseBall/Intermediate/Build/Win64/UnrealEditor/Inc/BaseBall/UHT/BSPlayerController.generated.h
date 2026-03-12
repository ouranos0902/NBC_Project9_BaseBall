// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BSPlayerController_generated_h
#error "BSPlayerController.generated.h already included, missing '#pragma once' in BSPlayerController.h"
#endif
#define BASEBALL_BSPlayerController_generated_h

#define FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABSPlayerController(); \
	friend struct Z_Construct_UClass_ABSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABSPlayerController)


#define FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABSPlayerController(ABSPlayerController&&); \
	ABSPlayerController(const ABSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABSPlayerController) \
	NO_API virtual ~ABSPlayerController();


#define FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_12_PROLOG
#define FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
