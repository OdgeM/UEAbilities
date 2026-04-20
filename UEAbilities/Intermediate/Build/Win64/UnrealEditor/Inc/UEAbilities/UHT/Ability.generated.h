// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEABILITIES_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define UEABILITIES_Ability_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UEAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbility(UAbility&&); \
	UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAbility) \
	NO_API virtual ~UAbility();


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_21_PROLOG
#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEABILITIES_API UClass* StaticClass<class UAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Ability_h


#define FOREACH_ENUM_ETARGETINGMODE(op) \
	op(ETargetingMode::Actor) \
	op(ETargetingMode::Location) 

enum class ETargetingMode : uint8;
template<> struct TIsUEnumClass<ETargetingMode> { enum { Value = true }; };
template<> UEABILITIES_API UEnum* StaticEnum<ETargetingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
