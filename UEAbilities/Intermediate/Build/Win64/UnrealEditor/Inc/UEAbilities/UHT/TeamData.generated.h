// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TeamData.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEABILITIES_TeamData_generated_h
#error "TeamData.generated.h already included, missing '#pragma once' in TeamData.h"
#endif
#define UEABILITIES_TeamData_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TeamData_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::None) \
	op(ETeam::Player) \
	op(ETeam::Enemy) \
	op(ETeam::Neutral) \
	op(ETeam::Friendly) \
	op(ETeam::Interactable) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> UEABILITIES_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
