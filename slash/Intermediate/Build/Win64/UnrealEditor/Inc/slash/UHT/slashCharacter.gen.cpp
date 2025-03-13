// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slash/Public/Characters/slashCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeslashCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
SLASH_API UClass* Z_Construct_UClass_AslashCharacter();
SLASH_API UClass* Z_Construct_UClass_AslashCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_slash();
// End Cross Module References

// Begin Class AslashCharacter
void AslashCharacter::StaticRegisterNativesAslashCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AslashCharacter);
UClass* Z_Construct_UClass_AslashCharacter_NoRegister()
{
	return AslashCharacter::StaticClass();
}
struct Z_Construct_UClass_AslashCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/slashCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "slashCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[] = {
		{ "Category", "slashCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hair_MetaData[] = {
		{ "Category", "Hair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeBrows_MetaData[] = {
		{ "Category", "Hair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/slashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EyeBrows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AslashCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_SlashContext = { "SlashContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, SlashContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashContext_MetaData), NewProp_SlashContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAction_MetaData), NewProp_MovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewCamera_MetaData), NewProp_ViewCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_Hair = { "Hair", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, Hair), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hair_MetaData), NewProp_Hair_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AslashCharacter_Statics::NewProp_EyeBrows = { "EyeBrows", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AslashCharacter, EyeBrows), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeBrows_MetaData), NewProp_EyeBrows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AslashCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_SlashContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_Hair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AslashCharacter_Statics::NewProp_EyeBrows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AslashCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AslashCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_slash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AslashCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AslashCharacter_Statics::ClassParams = {
	&AslashCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AslashCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AslashCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AslashCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AslashCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AslashCharacter()
{
	if (!Z_Registration_Info_UClass_AslashCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AslashCharacter.OuterSingleton, Z_Construct_UClass_AslashCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AslashCharacter.OuterSingleton;
}
template<> SLASH_API UClass* StaticClass<AslashCharacter>()
{
	return AslashCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AslashCharacter);
AslashCharacter::~AslashCharacter() {}
// End Class AslashCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_slash_Source_slash_Public_Characters_slashCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AslashCharacter, AslashCharacter::StaticClass, TEXT("AslashCharacter"), &Z_Registration_Info_UClass_AslashCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AslashCharacter), 1471735464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_slash_Source_slash_Public_Characters_slashCharacter_h_930434445(TEXT("/Script/slash"),
	Z_CompiledInDeferFile_FID_slash_Source_slash_Public_Characters_slashCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_slash_Source_slash_Public_Characters_slashCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
