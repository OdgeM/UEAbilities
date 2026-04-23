// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/Interfaces/Targetable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UEABILITIES_API UClass* Z_Construct_UClass_UTargetable();
UEABILITIES_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETeam();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Interface UTargetable Function GetTeam
struct Targetable_eventGetTeam_Parms
{
	ETeam ReturnValue;

	/** Constructor, initializes return property only **/
	Targetable_eventGetTeam_Parms()
		: ReturnValue((ETeam)0)
	{
	}
};
ETeam ITargetable::GetTeam() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTeam instead.");
	Targetable_eventGetTeam_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTargetable_GetTeam = FName(TEXT("GetTeam"));
ETeam ITargetable::Execute_GetTeam(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetable::StaticClass()));
	Targetable_eventGetTeam_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetable_GetTeam);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITargetable*)(O->GetNativeInterfaceAddress(UTargetable::StaticClass())))
	{
		Parms.ReturnValue = I->GetTeam_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTargetable_GetTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Interfaces/Targetable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTargetable_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTargetable_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Targetable_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_UEAbilities_ETeam, METADATA_PARAMS(0, nullptr) }; // 720471438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetable_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetable_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetable_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_GetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetable_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetable, nullptr, "GetTeam", nullptr, nullptr, Z_Construct_UFunction_UTargetable_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_GetTeam_Statics::PropPointers), sizeof(Targetable_eventGetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetable_GetTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Targetable_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetable_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetable_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetable::execGetTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetTeam_Implementation();
	P_NATIVE_END;
}
// End Interface UTargetable Function GetTeam

// Begin Interface UTargetable Function SetTargeted
struct Targetable_eventSetTargeted_Parms
{
	bool Target;
};
void ITargetable::SetTargeted(bool Target)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTargeted instead.");
}
static FName NAME_UTargetable_SetTargeted = FName(TEXT("SetTargeted"));
void ITargetable::Execute_SetTargeted(UObject* O, bool Target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetable::StaticClass()));
	Targetable_eventSetTargeted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTargetable_SetTargeted);
	if (Func)
	{
		Parms.Target=Target;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITargetable*)(O->GetNativeInterfaceAddress(UTargetable::StaticClass())))
	{
		I->SetTargeted_Implementation(Target);
	}
}
struct Z_Construct_UFunction_UTargetable_SetTargeted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Interfaces/Targetable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Target_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTargetable_SetTargeted_Statics::NewProp_Target_SetBit(void* Obj)
{
	((Targetable_eventSetTargeted_Parms*)Obj)->Target = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetable_SetTargeted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Targetable_eventSetTargeted_Parms), &Z_Construct_UFunction_UTargetable_SetTargeted_Statics::NewProp_Target_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetable_SetTargeted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetable_SetTargeted_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_SetTargeted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetable_SetTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetable, nullptr, "SetTargeted", nullptr, nullptr, Z_Construct_UFunction_UTargetable_SetTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_SetTargeted_Statics::PropPointers), sizeof(Targetable_eventSetTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetable_SetTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetable_SetTargeted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Targetable_eventSetTargeted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetable_SetTargeted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetable_SetTargeted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetable::execSetTargeted)
{
	P_GET_UBOOL(Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargeted_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Interface UTargetable Function SetTargeted

// Begin Interface UTargetable
void UTargetable::StaticRegisterNativesUTargetable()
{
	UClass* Class = UTargetable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTeam", &ITargetable::execGetTeam },
		{ "SetTargeted", &ITargetable::execSetTargeted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetable);
UClass* Z_Construct_UClass_UTargetable_NoRegister()
{
	return UTargetable::StaticClass();
}
struct Z_Construct_UClass_UTargetable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Targetable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetable_GetTeam, "GetTeam" }, // 2586671749
		{ &Z_Construct_UFunction_UTargetable_SetTargeted, "SetTargeted" }, // 3450235477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UEAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetable_Statics::ClassParams = {
	&UTargetable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetable()
{
	if (!Z_Registration_Info_UClass_UTargetable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetable.OuterSingleton, Z_Construct_UClass_UTargetable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetable.OuterSingleton;
}
template<> UEABILITIES_API UClass* StaticClass<UTargetable>()
{
	return UTargetable::StaticClass();
}
UTargetable::UTargetable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetable);
UTargetable::~UTargetable() {}
// End Interface UTargetable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetable, UTargetable::StaticClass, TEXT("UTargetable"), &Z_Registration_Info_UClass_UTargetable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetable), 4229720885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_16114949(TEXT("/Script/UEAbilities"),
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
