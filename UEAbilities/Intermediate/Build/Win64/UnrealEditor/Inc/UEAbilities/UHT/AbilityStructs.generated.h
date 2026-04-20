// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEABILITIES_AbilityStructs_generated_h
#error "AbilityStructs.generated.h already included, missing '#pragma once' in AbilityStructs.h"
#endif
#define UEABILITIES_AbilityStructs_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityResources_Statics; \
	UEABILITIES_API static class UScriptStruct* StaticStruct();


template<> UEABILITIES_API UScriptStruct* StaticStruct<struct FAbilityResources>();

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityTargetData_Statics; \
	UEABILITIES_API static class UScriptStruct* StaticStruct();


template<> UEABILITIES_API UScriptStruct* StaticStruct<struct FAbilityTargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityStructs_h


#define FOREACH_ENUM_ETARGETTYPE(op) \
	op(ETargetType::SingleTarget) \
	op(ETargetType::AreaEffect) 

enum class ETargetType : uint8;
template<> struct TIsUEnumClass<ETargetType> { enum { Value = true }; };
template<> UEABILITIES_API UEnum* StaticEnum<ETargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
