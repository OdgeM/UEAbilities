// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Effects/DashEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashEffect() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UDashEffect();
UEABILITIES_API UClass* Z_Construct_UClass_UDashEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UDashEffect
void UDashEffect::StaticRegisterNativesUDashEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDashEffect);
UClass* Z_Construct_UClass_UDashEffect_NoRegister()
{
	return UDashEffect::StaticClass();
}
struct Z_Construct_UClass_UDashEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Effects/DashEffect.h" },
		{ "ModuleRelativePath", "Public/Effects/DashEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[] = {
		{ "Category", "DashEffect" },
		{ "ModuleRelativePath", "Public/Effects/DashEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashSpeed_MetaData[] = {
		{ "Category", "DashEffect" },
		{ "ModuleRelativePath", "Public/Effects/DashEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDashEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDashEffect_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDashEffect, DashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDistance_MetaData), NewProp_DashDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDashEffect_Statics::NewProp_DashSpeed = { "DashSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDashEffect, DashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashSpeed_MetaData), NewProp_DashSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDashEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashEffect_Statics::NewProp_DashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashEffect_Statics::NewProp_DashSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDashEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDashEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDashEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDashEffect_Statics::ClassParams = {
	&UDashEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDashEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDashEffect_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDashEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UDashEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDashEffect()
{
	if (!Z_Registration_Info_UClass_UDashEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDashEffect.OuterSingleton, Z_Construct_UClass_UDashEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDashEffect.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UDashEffect>()
{
	return UDashEffect::StaticClass();
}
UDashEffect::UDashEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDashEffect);
UDashEffect::~UDashEffect() {}
// End Class UDashEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_DashEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDashEffect, UDashEffect::StaticClass, TEXT("UDashEffect"), &Z_Registration_Info_UClass_UDashEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDashEffect), 2126306499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_DashEffect_h_4065461866(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_DashEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Effects_DashEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
