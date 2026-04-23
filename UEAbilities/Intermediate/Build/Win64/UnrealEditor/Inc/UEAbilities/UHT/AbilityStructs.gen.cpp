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
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTargetData();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityTargetData::StaticStruct, Z_Construct_UScriptStruct_FAbilityTargetData_Statics::NewStructOps, TEXT("AbilityTargetData"), &Z_Registration_Info_UScriptStruct_AbilityTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityTargetData), 404425557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_1953698685(TEXT("/Script/UEAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
