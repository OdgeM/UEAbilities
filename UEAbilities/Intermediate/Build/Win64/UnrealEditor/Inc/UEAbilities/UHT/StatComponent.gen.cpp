// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/StatComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UEABILITIES_API UClass* Z_Construct_UClass_UStatComponent();
UEABILITIES_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_EStatsType();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStatData();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin ScriptStruct FStatData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatData;
class UScriptStruct* FStatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatData, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("StatData"));
	}
	return Z_Registration_Info_UScriptStruct_StatData.OuterSingleton;
}
template<> UEABILITIES_API UScriptStruct* StaticStruct<FStatData>()
{
	return FStatData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "StatData" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "StatData" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatData, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatData, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	&NewStructOps,
	"StatData",
	Z_Construct_UScriptStruct_FStatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatData_Statics::PropPointers),
	sizeof(FStatData),
	alignof(FStatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatData()
{
	if (!Z_Registration_Info_UScriptStruct_StatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatData.InnerSingleton, Z_Construct_UScriptStruct_FStatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatData.InnerSingleton;
}
// End ScriptStruct FStatData

// Begin Class UStatComponent Function GetStat
struct Z_Construct_UFunction_UStatComponent_GetStat_Statics
{
	struct StatComponent_eventGetStat_Parms
	{
		EStatsType Stat;
		FStatData OutStat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventGetStat_Parms, Stat), Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(0, nullptr) }; // 317548579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_OutStat = { "OutStat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventGetStat_Parms, OutStat), Z_Construct_UScriptStruct_FStatData, METADATA_PARAMS(0, nullptr) }; // 2399107229
void Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatComponent_eventGetStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatComponent_eventGetStat_Parms), &Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_OutStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, nullptr, "GetStat", nullptr, nullptr, Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatComponent_GetStat_Statics::StatComponent_eventGetStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatComponent_GetStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatComponent_GetStat_Statics::StatComponent_eventGetStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatComponent_GetStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatComponent_GetStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatComponent::execGetStat)
{
	P_GET_ENUM(EStatsType,Z_Param_Stat);
	P_GET_STRUCT_REF(FStatData,Z_Param_Out_OutStat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStat(EStatsType(Z_Param_Stat),Z_Param_Out_OutStat);
	P_NATIVE_END;
}
// End Class UStatComponent Function GetStat

// Begin Class UStatComponent Function GetStatMax
struct Z_Construct_UFunction_UStatComponent_GetStatMax_Statics
{
	struct StatComponent_eventGetStatMax_Parms
	{
		EStatsType Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventGetStatMax_Parms, Stat), Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(0, nullptr) }; // 317548579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventGetStatMax_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, nullptr, "GetStatMax", nullptr, nullptr, Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::StatComponent_eventGetStatMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::StatComponent_eventGetStatMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatComponent_GetStatMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatComponent_GetStatMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatComponent::execGetStatMax)
{
	P_GET_ENUM(EStatsType,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatMax(EStatsType(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class UStatComponent Function GetStatMax

// Begin Class UStatComponent
void UStatComponent::StaticRegisterNativesUStatComponent()
{
	UClass* Class = UStatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStat", &UStatComponent::execGetStat },
		{ "GetStatMax", &UStatComponent::execGetStatMax },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatComponent);
UClass* Z_Construct_UClass_UStatComponent_NoRegister()
{
	return UStatComponent::StaticClass();
}
struct Z_Construct_UClass_UStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatComponent.h" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStats_MetaData[] = {
		{ "Category", "StatComponent" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStats_MetaData[] = {
		{ "Category", "StatComponent" },
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseStats_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BaseStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStats_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectTimers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEffectTimers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatComponent_GetStat, "GetStat" }, // 2714835688
		{ &Z_Construct_UFunction_UStatComponent_GetStatMax, "GetStatMax" }, // 195645004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_ValueProp = { "BaseStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStatData, METADATA_PARAMS(0, nullptr) }; // 2399107229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp = { "BaseStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(0, nullptr) }; // 317548579
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, BaseStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStats_MetaData), NewProp_BaseStats_MetaData) }; // 317548579 2399107229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_ValueProp = { "CurrentStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStatData, METADATA_PARAMS(0, nullptr) }; // 2399107229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_Key_KeyProp = { "CurrentStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(0, nullptr) }; // 317548579
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats = { "CurrentStats", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, CurrentStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStats_MetaData), NewProp_CurrentStats_MetaData) }; // 317548579 2399107229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers_Inner = { "ActiveEffectTimers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 756291145
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers = { "ActiveEffectTimers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, ActiveEffectTimers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEffectTimers_MetaData), NewProp_ActiveEffectTimers_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatComponent_Statics::ClassParams = {
	&UStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatComponent()
{
	if (!Z_Registration_Info_UClass_UStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatComponent.OuterSingleton, Z_Construct_UClass_UStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatComponent.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UStatComponent>()
{
	return UStatComponent::StaticClass();
}
UStatComponent::UStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatComponent);
UStatComponent::~UStatComponent() {}
// End Class UStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatData::StaticStruct, Z_Construct_UScriptStruct_FStatData_Statics::NewStructOps, TEXT("StatData"), &Z_Registration_Info_UScriptStruct_StatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatData), 2399107229U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatComponent, UStatComponent::StaticClass, TEXT("UStatComponent"), &Z_Registration_Info_UClass_UStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatComponent), 2999897429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_3476103953(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
