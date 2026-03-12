// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/UI/BSChatInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSChatInput() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_UBSChatInput();
BASEBALL_API UClass* Z_Construct_UClass_UBSChatInput_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class UBSChatInput
void UBSChatInput::StaticRegisterNativesUBSChatInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBSChatInput);
UClass* Z_Construct_UClass_UBSChatInput_NoRegister()
{
	return UBSChatInput::StaticClass();
}
struct Z_Construct_UClass_UBSChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/BSChatInput.h" },
		{ "ModuleRelativePath", "UI/BSChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BSChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBSChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBSChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBSChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSChatInput_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBSChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBSChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBSChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBSChatInput_Statics::ClassParams = {
	&UBSChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBSChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBSChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UBSChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBSChatInput()
{
	if (!Z_Registration_Info_UClass_UBSChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBSChatInput.OuterSingleton, Z_Construct_UClass_UBSChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBSChatInput.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<UBSChatInput>()
{
	return UBSChatInput::StaticClass();
}
UBSChatInput::UBSChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBSChatInput);
UBSChatInput::~UBSChatInput() {}
// End Class UBSChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_UI_BSChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBSChatInput, UBSChatInput::StaticClass, TEXT("UBSChatInput"), &Z_Registration_Info_UClass_UBSChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBSChatInput), 3852982592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_UI_BSChatInput_h_4239437825(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_UI_BSChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_UI_BSChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
