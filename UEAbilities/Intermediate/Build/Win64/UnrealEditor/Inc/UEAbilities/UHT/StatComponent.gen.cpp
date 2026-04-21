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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatData, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatData, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
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

// Begin Class UStatComponent
void UStatComponent::StaticRegisterNativesUStatComponent()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseStats_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BaseStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectTimers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEffectTimers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_ValueProp = { "BaseStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStatData, METADATA_PARAMS(0, nullptr) }; // 125717495
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp = { "BaseStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UEAbilities_EStatsType, METADATA_PARAMS(0, nullptr) }; // 1803528936
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, BaseStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStats_MetaData), NewProp_BaseStats_MetaData) }; // 1803528936 125717495
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers_Inner = { "ActiveEffectTimers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 756291145
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_ActiveEffectTimers = { "ActiveEffectTimers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, ActiveEffectTimers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEffectTimers_MetaData), NewProp_ActiveEffectTimers_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_BaseStats,
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
	nullptr,
	Z_Construct_UClass_UStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ FStatData::StaticStruct, Z_Construct_UScriptStruct_FStatData_Statics::NewStructOps, TEXT("StatData"), &Z_Registration_Info_UScriptStruct_StatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatData), 125717495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatComponent, UStatComponent::StaticClass, TEXT("UStatComponent"), &Z_Registration_Info_UClass_UStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatComponent), 1282703522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_3092908532(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
