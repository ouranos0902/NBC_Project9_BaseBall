// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/Player/BSPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSPlayerController() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_ABSPlayerController();
BASEBALL_API UClass* Z_Construct_UClass_ABSPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class ABSPlayerController
void ABSPlayerController::StaticRegisterNativesABSPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABSPlayerController);
UClass* Z_Construct_UClass_ABSPlayerController_NoRegister()
{
	return ABSPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BSPlayerController.h" },
		{ "ModuleRelativePath", "Player/BSPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABSPlayerController_Statics::ClassParams = {
	&ABSPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABSPlayerController()
{
	if (!Z_Registration_Info_UClass_ABSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABSPlayerController.OuterSingleton, Z_Construct_UClass_ABSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABSPlayerController.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<ABSPlayerController>()
{
	return ABSPlayerController::StaticClass();
}
ABSPlayerController::ABSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABSPlayerController);
ABSPlayerController::~ABSPlayerController() {}
// End Class ABSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABSPlayerController, ABSPlayerController::StaticClass, TEXT("ABSPlayerController"), &Z_Registration_Info_UClass_ABSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABSPlayerController), 3581757813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_925064172(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Player_BSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
