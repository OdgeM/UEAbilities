// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Targeting/AbilityTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTargeting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UAbilityTargeting
void UAbilityTargeting::StaticRegisterNativesUAbilityTargeting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTargeting);
UClass* Z_Construct_UClass_UAbilityTargeting_NoRegister()
{
	return UAbilityTargeting::StaticClass();
}
struct Z_Construct_UClass_UAbilityTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Targeting/AbilityTargeting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/AbilityTargeting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTargeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityTargeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTargeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTargeting_Statics::ClassParams = {
	&UAbilityTargeting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTargeting_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTargeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTargeting()
{
	if (!Z_Registration_Info_UClass_UAbilityTargeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTargeting.OuterSingleton, Z_Construct_UClass_UAbilityTargeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTargeting.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UAbilityTargeting>()
{
	return UAbilityTargeting::StaticClass();
}
UAbilityTargeting::UAbilityTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTargeting);
UAbilityTargeting::~UAbilityTargeting() {}
// End Class UAbilityTargeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_AbilityTargeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTargeting, UAbilityTargeting::StaticClass, TEXT("UAbilityTargeting"), &Z_Registration_Info_UClass_UAbilityTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTargeting), 2629407357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_AbilityTargeting_h_1360366198(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_AbilityTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_AbilityTargeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
