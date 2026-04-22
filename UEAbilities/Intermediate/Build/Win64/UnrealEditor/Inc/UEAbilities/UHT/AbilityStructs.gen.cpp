// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/AbilityStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityStructs() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETargetType();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityResources();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTargetData();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Enum ETargetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetType;
static UEnum* ETargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEAbilities_ETargetType, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("ETargetType"));
	}
	return Z_Registration_Info_UEnum_ETargetType.OuterSingleton;
}
template<> UEABILITIES_API UEnum* StaticEnum<ETargetType>()
{
	return ETargetType_StaticEnum();
}
struct Z_Construct_UEnum_UEAbilities_ETargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AreaEffect.DisplayName", "Area of Effect" },
		{ "AreaEffect.Name", "ETargetType::AreaEffect" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
		{ "SingleTarget.DisplayName", "Single Target" },
		{ "SingleTarget.Name", "ETargetType::SingleTarget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetType::SingleTarget", (int64)ETargetType::SingleTarget },
		{ "ETargetType::AreaEffect", (int64)ETargetType::AreaEffect },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEAbilities_ETargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	"ETargetType",
	"ETargetType",
	Z_Construct_UEnum_UEAbilities_ETargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEAbilities_ETargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEAbilities_ETargetType()
{
	if (!Z_Registration_Info_UEnum_ETargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetType.InnerSingleton, Z_Construct_UEnum_UEAbilities_ETargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetType.InnerSingleton;
}
// End Enum ETargetType

// Begin ScriptStruct FAbilityResources
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityResources;
class UScriptStruct* FAbilityResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityResources, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("AbilityResources"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityResources.OuterSingleton;
}
template<> UEABILITIES_API UScriptStruct* StaticStruct<FAbilityResources>()
{
	return FAbilityResources::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityResources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaAmount_MetaData[] = {
		{ "Category", "AbilityResources" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaAmount_MetaData[] = {
		{ "Category", "AbilityResources" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[] = {
		{ "Category", "AbilityResources" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityResources>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_ManaAmount = { "ManaAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityResources, ManaAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaAmount_MetaData), NewProp_ManaAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_StaminaAmount = { "StaminaAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityResources, StaminaAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaAmount_MetaData), NewProp_StaminaAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityResources, HealthAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAmount_MetaData), NewProp_HealthAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_ManaAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_StaminaAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityResources_Statics::NewProp_HealthAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityResources_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	&NewStructOps,
	"AbilityResources",
	Z_Construct_UScriptStruct_FAbilityResources_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityResources_Statics::PropPointers),
	sizeof(FAbilityResources),
	alignof(FAbilityResources),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityResources_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityResources_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityResources()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityResources.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityResources.InnerSingleton, Z_Construct_UScriptStruct_FAbilityResources_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityResources.InnerSingleton;
}
// End ScriptStruct FAbilityResources

// Begin ScriptStruct FAbilityTargetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityTargetData;
class UScriptStruct* FAbilityTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityTargetData, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("AbilityTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityTargetData.OuterSingleton;
}
template<> UEABILITIES_API UScriptStruct* StaticStruct<FAbilityTargetData>()
{
	return FAbilityTargetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverActor_MetaData[] = {
		{ "Category", "AbilityTargetData" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AbilityTargetData" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "AbilityTargetData" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[] = {
		{ "Category", "AbilityTargetData" },
		{ "ModuleRelativePath", "Public/AbilityStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityTargetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_HoverActor = { "HoverActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTargetData, HoverActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverActor_MetaData), NewProp_HoverActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetActor_Inner = { "TargetActor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTargetData, TargetActor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTargetData, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityTargetData, SourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLocation_MetaData), NewProp_SourceLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_HoverActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetActor_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewProp_SourceLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityTargetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	&NewStructOps,
	"AbilityTargetData",
	Z_Construct_UScriptStruct_FAbilityTargetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTargetData_Statics::PropPointers),
	sizeof(FAbilityTargetData),
	alignof(FAbilityTargetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTargetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityTargetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityTargetData()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTargetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityTargetData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityTargetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityTargetData.InnerSingleton;
}
// End ScriptStruct FAbilityTargetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetType_StaticEnum, TEXT("ETargetType"), &Z_Registration_Info_UEnum_ETargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924656813U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityResources::StaticStruct, Z_Construct_UScriptStruct_FAbilityResources_Statics::NewStructOps, TEXT("AbilityResources"), &Z_Registration_Info_UScriptStruct_AbilityResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityResources), 3291796984U) },
		{ FAbilityTargetData::StaticStruct, Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewStructOps, TEXT("AbilityTargetData"), &Z_Registration_Info_UScriptStruct_AbilityTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityTargetData), 404425557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_3352956270(TEXT("/Script/UEAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
