// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats/StatData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEABILITIES_StatData_generated_h
#error "StatData.generated.h already included, missing '#pragma once' in StatData.h"
#endif
#define UEABILITIES_StatData_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatModifier_Statics; \
	UEABILITIES_API static class UScriptStruct* StaticStruct();


template<> UEABILITIES_API UScriptStruct* StaticStruct<struct FStatModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Stats_StatData_h


#define FOREACH_ENUM_ESTATSTYPE(op) \
	op(EStatsType::Health) \
	op(EStatsType::MovementSpeed) \
	op(EStatsType::Damage) \
	op(EStatsType::Defense) \
	op(EStatsType::Mana) \
	op(EStatsType::Stamina) 

enum class EStatsType : uint8;
template<> struct TIsUEnumClass<EStatsType> { enum { Value = true }; };
template<> UEABILITIES_API UEnum* StaticEnum<EStatsType>();

#define FOREACH_ENUM_EMODIFIEROP(op) \
	op(EModifierOp::Add) \
	op(EModifierOp::Multiply) \
	op(EModifierOp::Override) 

enum class EModifierOp : uint8;
template<> struct TIsUEnumClass<EModifierOp> { enum { Value = true }; };
template<> UEABILITIES_API UEnum* StaticEnum<EModifierOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
