// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Stats/StatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatData() {}

// Begin Cross Module References
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_EModifierOp();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_EStatsType();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Enum EStatsType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatsType;
static UEnum* EStatsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEAbilities_EStatsType, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("EStatsType"));
	}
	return Z_Registration_Info_UEnum_EStatsType.OuterSingleton;
}
template<> UEABILITIES_API UEnum* StaticEnum<EStatsType>()
{
	return EStatsType_StaticEnum();
}
struct Z_Construct_UEnum_UEAbilities_EStatsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.Name", "EStatsType::Damage" },
		{ "Defense.Name", "EStatsType::Defense" },
		{ "Health.Name", "EStatsType::Health" },
		{ "Mana.Name", "EStatsType::Mana" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
		{ "MovementSpeed.Name", "EStatsType::MovementSpeed" },
		{ "Stamina.Name", "EStatsType::Stamina" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatsType::Health", (int64)EStatsType::Health },
		{ "EStatsType::MovementSpeed", (int64)EStatsType::MovementSpeed },
		{ "EStatsType::Damage", (int64)EStatsType::Damage },
		{ "EStatsType::Defense", (int64)EStatsType::Defense },
		{ "EStatsType::Mana", (int64)EStatsType::Mana },
		{ "EStatsType::Stamina", (int64)EStatsType::Stamina },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEAbilities_EStatsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	"EStatsType",
	"EStatsType",
	Z_Construct_UEnum_UEAbilities_EStatsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_EStatsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_EStatsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEAbilities_EStatsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEAbilities_EStatsType()
{
	if (!Z_Registration_Info_UEnum_EStatsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatsType.InnerSingleton, Z_Construct_UEnum_UEAbilities_EStatsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatsType.InnerSingleton;
}
// End Enum EStatsType

// Begin Enum EModifierOp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierOp;
static UEnum* EModifierOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifierOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifierOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEAbilities_EModifierOp, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("EModifierOp"));
	}
	return Z_Registration_Info_UEnum_EModifierOp.OuterSingleton;
}
template<> UEABILITIES_API UEnum* StaticEnum<EModifierOp>()
{
	return EModifierOp_StaticEnum();
}
struct Z_Construct_UEnum_UEAbilities_EModifierOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EModifierOp::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
		{ "Multiply.Name", "EModifierOp::Multiply" },
		{ "Override.Name", "EModifierOp::Override" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifierOp::Add", (int64)EModifierOp::Add },
		{ "EModifierOp::Multiply", (int64)EModifierOp::Multiply },
		{ "EModifierOp::Override", (int64)EModifierOp::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	"EModifierOp",
	"EModifierOp",
	Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEAbilities_EModifierOp()
{
	if (!Z_Registration_Info_UEnum_EModifierOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierOp.InnerSingleton, Z_Construct_UEnum_UEAbilities_EModifierOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifierOp.InnerSingleton;
}
// End Enum EModifierOp

// Begin ScriptStruct FStatModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatModifier;
class UScriptStruct* FStatModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatModifier, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("StatModifier"));
	}
	return Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton;
}
template<> UEABILITIES_API UScriptStruct* StaticStruct<FStatModifier>()
{
	return FStatModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverTime_MetaData[] = {
		{ "Category", "StatModifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0 = instant\n" },
#endif
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = instant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTemporary_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/Stats/StatData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverTime;
	static void NewProp_bTemporary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatModifier, Stat), Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) }; // 1803528936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatModifier, Operation), Z_Construct_UEnum_UEAbilities_EModifierOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3532330938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatModifier, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatModifier, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bOverTime_SetBit(void* Obj)
{
	((FStatModifier*)Obj)->bOverTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bOverTime = { "bOverTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStatModifier), &Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bOverTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverTime_MetaData), NewProp_bOverTime_MetaData) };
void Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bTemporary_SetBit(void* Obj)
{
	((FStatModifier*)Obj)->bTemporary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bTemporary = { "bTemporary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStatModifier), &Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bTemporary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTemporary_MetaData), NewProp_bTemporary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_bTemporary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	&NewStructOps,
	"StatModifier",
	Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers),
	sizeof(FStatModifier),
	alignof(FStatModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatModifier()
{
	if (!Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton, Z_Construct_UScriptStruct_FStatModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton;
}
// End ScriptStruct FStatModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatsType_StaticEnum, TEXT("EStatsType"), &Z_Registration_Info_UEnum_EStatsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1803528936U) },
		{ EModifierOp_StaticEnum, TEXT("EModifierOp"), &Z_Registration_Info_UEnum_EModifierOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3532330938U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatModifier::StaticStruct, Z_Construct_UScriptStruct_FStatModifier_Statics::NewStructOps, TEXT("StatModifier"), &Z_Registration_Info_UScriptStruct_StatModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatModifier), 1973148372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_870889478(TEXT("/Script/UEAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
