// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Targeting/ConeTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConeTargeting() {}

// Begin Cross Module References
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_UConeTargeting();
UEABILITIES_API UClass* Z_Construct_UClass_UConeTargeting_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UConeTargeting
void UConeTargeting::StaticRegisterNativesUConeTargeting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConeTargeting);
UClass* Z_Construct_UClass_UConeTargeting_NoRegister()
{
	return UConeTargeting::StaticClass();
}
struct Z_Construct_UClass_UConeTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Targeting/ConeTargeting.h" },
		{ "ModuleRelativePath", "Public/Targeting/ConeTargeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "ConeTargeting" },
		{ "ModuleRelativePath", "Public/Targeting/ConeTargeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleDegrees_MetaData[] = {
		{ "Category", "ConeTargeting" },
		{ "ModuleRelativePath", "Public/Targeting/ConeTargeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConeTargeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeTargeting_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConeTargeting, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConeTargeting_Statics::NewProp_AngleDegrees = { "AngleDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConeTargeting, AngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleDegrees_MetaData), NewProp_AngleDegrees_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConeTargeting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeTargeting_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConeTargeting_Statics::NewProp_AngleDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConeTargeting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConeTargeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTargeting,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConeTargeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConeTargeting_Statics::ClassParams = {
	&UConeTargeting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConeTargeting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConeTargeting_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConeTargeting_Statics::Class_MetaDataParams), Z_Construct_UClass_UConeTargeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConeTargeting()
{
	if (!Z_Registration_Info_UClass_UConeTargeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConeTargeting.OuterSingleton, Z_Construct_UClass_UConeTargeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConeTargeting.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UConeTargeting>()
{
	return UConeTargeting::StaticClass();
}
UConeTargeting::UConeTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConeTargeting);
UConeTargeting::~UConeTargeting() {}
// End Class UConeTargeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_ConeTargeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConeTargeting, UConeTargeting::StaticClass, TEXT("UConeTargeting"), &Z_Registration_Info_UClass_UConeTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConeTargeting), 984516170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_ConeTargeting_h_1718820714(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_ConeTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Targeting_ConeTargeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
