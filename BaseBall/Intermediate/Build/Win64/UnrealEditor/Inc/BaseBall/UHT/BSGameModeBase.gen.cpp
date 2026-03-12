// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/Game/BSGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSGameModeBase() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_ABSGameModeBase();
BASEBALL_API UClass* Z_Construct_UClass_ABSGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class ABSGameModeBase
void ABSGameModeBase::StaticRegisterNativesABSGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABSGameModeBase);
UClass* Z_Construct_UClass_ABSGameModeBase_NoRegister()
{
	return ABSGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABSGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BSGameModeBase.h" },
		{ "ModuleRelativePath", "Game/BSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABSGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABSGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABSGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABSGameModeBase_Statics::ClassParams = {
	&ABSGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABSGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABSGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABSGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABSGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABSGameModeBase.OuterSingleton, Z_Construct_UClass_ABSGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABSGameModeBase.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<ABSGameModeBase>()
{
	return ABSGameModeBase::StaticClass();
}
ABSGameModeBase::ABSGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABSGameModeBase);
ABSGameModeBase::~ABSGameModeBase() {}
// End Class ABSGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABSGameModeBase, ABSGameModeBase::StaticClass, TEXT("ABSGameModeBase"), &Z_Registration_Info_UClass_ABSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABSGameModeBase), 2773436298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_2462660839(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Game_BSGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
