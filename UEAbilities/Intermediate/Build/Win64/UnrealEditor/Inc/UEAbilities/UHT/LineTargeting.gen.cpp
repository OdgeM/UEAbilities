// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Targeting/LineTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineTargeting() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_ULineTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_ULineTargeting_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class ULineTargeting
void ULineTargeting::StaticRegisterNativesULineTargeting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineTargeting);
UClass* Z_Construct_UClass_ULineTargeting_NoRegister()
{
	return ULineTargeting::StaticClass();
}
struct Z_Construct_UClass_ULineTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Targeting/LineTargeting.h" },
		{ "ModuleRelativePath", "Public/Targeting/LineTargeting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineTargeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULineTargeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTargeting,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineTargeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineTargeting_Statics::ClassParams = {
	&ULineTargeting::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineTargeting_Statics::Class_MetaDataParams), Z_Construct_UClass_ULineTargeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULineTargeting()
{
	if (!Z_Registration_Info_UClass_ULineTargeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineTargeting.OuterSingleton, Z_Construct_UClass_ULineTargeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULineTargeting.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<ULineTargeting>()
{
	return ULineTargeting::StaticClass();
}
ULineTargeting::ULineTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULineTargeting);
ULineTargeting::~ULineTargeting() {}
// End Class ULineTargeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_LineTargeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULineTargeting, ULineTargeting::StaticClass, TEXT("ULineTargeting"), &Z_Registration_Info_UClass_ULineTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineTargeting), 3844352915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_LineTargeting_h_4006620856(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_LineTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_LineTargeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
