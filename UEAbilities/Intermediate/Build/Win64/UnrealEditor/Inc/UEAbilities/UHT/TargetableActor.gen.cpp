// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/TargetableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetableActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UEABILITIES_API UClass* Z_Construct_UClass_ATargetableActor();
UEABILITIES_API UClass* Z_Construct_UClass_ATargetableActor_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETeam();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class ATargetableActor
void ATargetableActor::StaticRegisterNativesATargetableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetableActor);
UClass* Z_Construct_UClass_ATargetableActor_NoRegister()
{
	return ATargetableActor::StaticClass();
}
struct Z_Construct_UClass_ATargetableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetableActor.h" },
		{ "ModuleRelativePath", "Public/TargetableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/TargetableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATargetableActor_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATargetableActor_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetableActor, Team), Z_Construct_UEnum_UEAbilities_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 720471438
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetableActor_Statics::NewProp_StatComponent = { "StatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetableActor, StatComponent), Z_Construct_UClass_UStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatComponent_MetaData), NewProp_StatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableActor_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableActor_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableActor_Statics::NewProp_StatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetable_NoRegister, (int32)VTABLE_OFFSET(ATargetableActor, ITargetable), false },  // 1452503530
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetableActor_Statics::ClassParams = {
	&ATargetableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATargetableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetableActor()
{
	if (!Z_Registration_Info_UClass_ATargetableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetableActor.OuterSingleton, Z_Construct_UClass_ATargetableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetableActor.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<ATargetableActor>()
{
	return ATargetableActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetableActor);
ATargetableActor::~ATargetableActor() {}
// End Class ATargetableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TargetableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetableActor, ATargetableActor::StaticClass, TEXT("ATargetableActor"), &Z_Registration_Info_UClass_ATargetableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetableActor), 4205924616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TargetableActor_h_413555303(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TargetableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TargetableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
