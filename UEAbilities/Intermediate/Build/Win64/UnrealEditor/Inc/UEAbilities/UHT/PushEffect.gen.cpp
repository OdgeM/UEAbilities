// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/PushEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePushEffect() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UPushEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UPushEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UPushEffect
void UPushEffect::StaticRegisterNativesUPushEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPushEffect);
UClass* Z_Construct_UClass_UPushEffect_NoRegister()
{
	return UPushEffect::StaticClass();
}
struct Z_Construct_UClass_UPushEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PushEffect.h" },
		{ "ModuleRelativePath", "Public/PushEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "Category", "PushEffect" },
		{ "ModuleRelativePath", "Public/PushEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPushEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPushEffect_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPushEffect, Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPushEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushEffect_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPushEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPushEffect_Statics::ClassParams = {
	&UPushEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPushEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPushEffect_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPushEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UPushEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPushEffect()
{
	if (!Z_Registration_Info_UClass_UPushEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPushEffect.OuterSingleton, Z_Construct_UClass_UPushEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPushEffect.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UPushEffect>()
{
	return UPushEffect::StaticClass();
}
UPushEffect::UPushEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPushEffect);
UPushEffect::~UPushEffect() {}
// End Class UPushEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_PushEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPushEffect, UPushEffect::StaticClass, TEXT("UPushEffect"), &Z_Registration_Info_UClass_UPushEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPushEffect), 1377235776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_PushEffect_h_2301534883(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_PushEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_PushEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
