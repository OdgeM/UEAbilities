// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Effects/StatEffect.h"
#include "UEAbilities/Public/Stats/StatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatEffect() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UStatEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UStatEffect_NoRegister();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UStatEffect
void UStatEffect::StaticRegisterNativesUStatEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatEffect);
UClass* Z_Construct_UClass_UStatEffect_NoRegister()
{
	return UStatEffect::StaticClass();
}
struct Z_Construct_UClass_UStatEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Effects/StatEffect.h" },
		{ "ModuleRelativePath", "Public/Effects/StatEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "StatEffect" },
		{ "ModuleRelativePath", "Public/Effects/StatEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatEffect_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatModifier, METADATA_PARAMS(0, nullptr) }; // 614454651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatEffect_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatEffect, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) }; // 614454651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatEffect_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatEffect_Statics::NewProp_Modifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatEffect_Statics::ClassParams = {
	&UStatEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatEffect_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatEffect()
{
	if (!Z_Registration_Info_UClass_UStatEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatEffect.OuterSingleton, Z_Construct_UClass_UStatEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatEffect.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UStatEffect>()
{
	return UStatEffect::StaticClass();
}
UStatEffect::UStatEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatEffect);
UStatEffect::~UStatEffect() {}
// End Class UStatEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_StatEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatEffect, UStatEffect::StaticClass, TEXT("UStatEffect"), &Z_Registration_Info_UClass_UStatEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatEffect), 303417920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_StatEffect_h_3044084578(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_StatEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_StatEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
