// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Targeting/SingleTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleTargeting() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_USingleTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_USingleTargeting_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class USingleTargeting
void USingleTargeting::StaticRegisterNativesUSingleTargeting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleTargeting);
UClass* Z_Construct_UClass_USingleTargeting_NoRegister()
{
	return USingleTargeting::StaticClass();
}
struct Z_Construct_UClass_USingleTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Targeting/SingleTargeting.h" },
		{ "ModuleRelativePath", "Public/Targeting/SingleTargeting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTargeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleTargeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTargeting,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTargeting_Statics::ClassParams = {
	&USingleTargeting::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargeting_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleTargeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleTargeting()
{
	if (!Z_Registration_Info_UClass_USingleTargeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTargeting.OuterSingleton, Z_Construct_UClass_USingleTargeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleTargeting.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<USingleTargeting>()
{
	return USingleTargeting::StaticClass();
}
USingleTargeting::USingleTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTargeting);
USingleTargeting::~USingleTargeting() {}
// End Class USingleTargeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_SingleTargeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleTargeting, USingleTargeting::StaticClass, TEXT("USingleTargeting"), &Z_Registration_Info_UClass_USingleTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTargeting), 3162743451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_SingleTargeting_h_367692149(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_SingleTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_SingleTargeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
