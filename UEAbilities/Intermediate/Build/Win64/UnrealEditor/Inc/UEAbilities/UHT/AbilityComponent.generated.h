// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbility;
struct FAbilityTargetData;
#ifdef UEABILITIES_AbilityComponent_generated_h
#error "AbilityComponent.generated.h already included, missing '#pragma once' in AbilityComponent.h"
#endif
#define UEABILITIES_AbilityComponent_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execAddAbility);


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityComponent(); \
	friend struct Z_Construct_UClass_UAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityComponent)


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityComponent(UAbilityComponent&&); \
	UAbilityComponent(const UAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityComponent) \
	NO_API virtual ~UAbilityComponent();


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_13_PROLOG
#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEABILITIES_API UClass* StaticClass<class UAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_AbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
