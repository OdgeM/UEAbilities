// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/AbilityComponent.h"
#include "UEAbilities/Public/AbilityStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UEABILITIES_API UClass* Z_Construct_UClass_UAbility_NoRegister();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityComponent();
UEABILITIES_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
UEABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTargetData();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Class UAbilityComponent Function ActivateAbility
struct Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics
{
	struct AbilityComponent_eventActivateAbility_Parms
	{
		int32 Index;
		FAbilityTargetData TargetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_eventActivateAbility_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_eventActivateAbility_Parms, TargetData), Z_Construct_UScriptStruct_FAbilityTargetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2765304079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent, nullptr, "ActivateAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::AbilityComponent_eventActivateAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::AbilityComponent_eventActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_ActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_ActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent::execActivateAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FAbilityTargetData,Z_Param_Out_TargetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateAbility(Z_Param_Index,Z_Param_Out_TargetData);
	P_NATIVE_END;
}
// End Class UAbilityComponent Function ActivateAbility

// Begin Class UAbilityComponent Function AddAbility
struct Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics
{
	struct AbilityComponent_eventAddAbility_Parms
	{
		TSubclassOf<UAbility> AbilityClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_eventAddAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::NewProp_AbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent, nullptr, "AddAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::AbilityComponent_eventAddAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::AbilityComponent_eventAddAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_AddAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_AddAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent::execAddAbility)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAbility(Z_Param_AbilityClass);
	P_NATIVE_END;
}
// End Class UAbilityComponent Function AddAbility

// Begin Class UAbilityComponent
void UAbilityComponent::StaticRegisterNativesUAbilityComponent()
{
	UClass* Class = UAbilityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateAbility", &UAbilityComponent::execActivateAbility },
		{ "AddAbility", &UAbilityComponent::execAddAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent);
UClass* Z_Construct_UClass_UAbilityComponent_NoRegister()
{
	return UAbilityComponent::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilityComponent.h" },
		{ "ModuleRelativePath", "Public/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClasses_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/AbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_ActivateAbility, "ActivateAbility" }, // 1432141112
		{ &Z_Construct_UFunction_UAbilityComponent_AddAbility, "AddAbility" }, // 369537780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityClasses_Inner = { "AbilityClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityClasses = { "AbilityClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent, AbilityClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClasses_MetaData), NewProp_AbilityClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_AbilityClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Statics::ClassParams = {
	&UAbilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UAbilityComponent>()
{
	return UAbilityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent);
UAbilityComponent::~UAbilityComponent() {}
// End Class UAbilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent, UAbilityComponent::StaticClass, TEXT("UAbilityComponent"), &Z_Registration_Info_UClass_UAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent), 252981608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_207540039(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
