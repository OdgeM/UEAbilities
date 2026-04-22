// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Ability.h"
#include "UEAbilities/Public/Stats/StatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UAbility();
UEABILITIES_API UClass* Z_Construct_UClass_UAbility_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityEffect_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityTargeting_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETargetingMode();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Enum ETargetingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetingMode;
static UEnum* ETargetingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEAbilities_ETargetingMode, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("ETargetingMode"));
	}
	return Z_Registration_Info_UEnum_ETargetingMode.OuterSingleton;
}
template<> UEABILITIES_API UEnum* StaticEnum<ETargetingMode>()
{
	return ETargetingMode_StaticEnum();
}
struct Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "ETargetingMode::Actor" },
		{ "BlueprintType", "true" },
		{ "Location.Name", "ETargetingMode::Location" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetingMode::Actor", (int64)ETargetingMode::Actor },
		{ "ETargetingMode::Location", (int64)ETargetingMode::Location },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	"ETargetingMode",
	"ETargetingMode",
	Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEAbilities_ETargetingMode()
{
	if (!Z_Registration_Info_UEnum_ETargetingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetingMode.InnerSingleton, Z_Construct_UEnum_UEAbilities_ETargetingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetingMode.InnerSingleton;
}
// End Enum ETargetingMode

// Begin Class UAbility Function CanActivate
struct Z_Construct_UFunction_UAbility_CanActivate_Statics
{
	struct Ability_eventCanActivate_Parms
	{
		AActor* Instigator;
		float CooldownOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventCanActivate_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_CooldownOut = { "CooldownOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventCanActivate_Parms, CooldownOut), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventCanActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventCanActivate_Parms), &Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_CanActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_CooldownOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_CanActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_CanActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_CanActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "CanActivate", nullptr, nullptr, Z_Construct_UFunction_UAbility_CanActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_CanActivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbility_CanActivate_Statics::Ability_eventCanActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_CanActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_CanActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbility_CanActivate_Statics::Ability_eventCanActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_CanActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_CanActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execCanActivate)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CooldownOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivate(Z_Param_Instigator,Z_Param_Out_CooldownOut);
	P_NATIVE_END;
}
// End Class UAbility Function CanActivate

// Begin Class UAbility
void UAbility::StaticRegisterNativesUAbility()
{
	UClass* Class = UAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanActivate", &UAbility::execCanActivate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbility);
UClass* Z_Construct_UClass_UAbility_NoRegister()
{
	return UAbility::StaticClass();
}
struct Z_Construct_UClass_UAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingStrategy_MetaData[] = {
		{ "Category", "Targeting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_Inner_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Costs_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetableTeams_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UEAbilities.ETeam" },
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingStrategy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Costs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Costs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetableTeams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbility_CanActivate, "CanActivate" }, // 3221380071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_TargetingStrategy = { "TargetingStrategy", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, TargetingStrategy), Z_Construct_UClass_UAbilityTargeting_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingStrategy_MetaData), NewProp_TargetingStrategy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbilityEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_Inner_MetaData), NewProp_Effects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0020088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Costs_Inner = { "Costs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatModifier, METADATA_PARAMS(0, nullptr) }; // 969119624
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Costs = { "Costs", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Costs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Costs_MetaData), NewProp_Costs_MetaData) }; // 969119624
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_TargetableTeams = { "TargetableTeams", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, TargetableTeams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetableTeams_MetaData), NewProp_TargetableTeams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_TargetingStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Effects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Costs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Costs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_TargetableTeams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
	&UAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbility()
{
	if (!Z_Registration_Info_UClass_UAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbility.OuterSingleton, Z_Construct_UClass_UAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbility.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UAbility>()
{
	return UAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
UAbility::~UAbility() {}
// End Class UAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetingMode_StaticEnum, TEXT("ETargetingMode"), &Z_Registration_Info_UEnum_ETargetingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2377969883U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbility, UAbility::StaticClass, TEXT("UAbility"), &Z_Registration_Info_UClass_UAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbility), 1325344515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_2663195034(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
