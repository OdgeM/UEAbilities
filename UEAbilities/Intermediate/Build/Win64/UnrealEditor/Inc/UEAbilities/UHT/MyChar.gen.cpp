// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/MyChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyChar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UEABILITIES_API UClass* Z_Construct_UClass_AMyChar();
UEABILITIES_API UClass* Z_Construct_UClass_AMyChar_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETeam();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class AMyChar
void AMyChar::StaticRegisterNativesAMyChar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyChar);
UClass* Z_Construct_UClass_AMyChar_NoRegister()
{
	return AMyChar::StaticClass();
}
struct Z_Construct_UClass_AMyChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyChar.h" },
		{ "ModuleRelativePath", "Public/MyChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/MyChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyChar, Team), Z_Construct_UEnum_UEAbilities_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 3143470859
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyChar, AbilityComponent), Z_Construct_UClass_UAbilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_StatComponent = { "StatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyChar, StatComponent), Z_Construct_UClass_UStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatComponent_MetaData), NewProp_StatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_StatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyChar_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetable_NoRegister, (int32)VTABLE_OFFSET(AMyChar, ITargetable), false },  // 3035529794
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyChar_Statics::ClassParams = {
	&AMyChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyChar_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyChar()
{
	if (!Z_Registration_Info_UClass_AMyChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyChar.OuterSingleton, Z_Construct_UClass_AMyChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyChar.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<AMyChar>()
{
	return AMyChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyChar);
AMyChar::~AMyChar() {}
// End Class AMyChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_MyChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyChar, AMyChar::StaticClass, TEXT("AMyChar"), &Z_Registration_Info_UClass_AMyChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyChar), 3095781409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_MyChar_h_1377605026(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_MyChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_MyChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
