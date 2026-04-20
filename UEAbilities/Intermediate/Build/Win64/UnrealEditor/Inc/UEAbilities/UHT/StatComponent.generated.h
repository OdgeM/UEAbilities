// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEABILITIES_StatComponent_generated_h
#error "StatComponent.generated.h already included, missing '#pragma once' in StatComponent.h"
#endif
#define UEABILITIES_StatComponent_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatData_Statics; \
	UEABILITIES_API static class UScriptStruct* StaticStruct();


template<> UEABILITIES_API UScriptStruct* StaticStruct<struct FStatData>();

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
public: \
	DECLARE_CLASS(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEAbilities"), NO_API) \
	DECLARE_SERIALIZER(UStatComponent)


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatComponent(UStatComponent&&); \
	UStatComponent(const UStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatComponent) \
	NO_API virtual ~UStatComponent();


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_20_PROLOG
#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEABILITIES_API UClass* StaticClass<class UStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_StatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
