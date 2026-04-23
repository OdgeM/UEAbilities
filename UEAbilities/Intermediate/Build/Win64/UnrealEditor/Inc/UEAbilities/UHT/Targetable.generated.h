// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Targetable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef UEABILITIES_Targetable_generated_h
#error "Targetable.generated.h already included, missing '#pragma once' in Targetable.h"
#endif
#define UEABILITIES_Targetable_generated_h

#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTargeted_Implementation(bool Target) {}; \
	virtual ETeam GetTeam_Implementation() const { return (ETeam)0; }; \
	DECLARE_FUNCTION(execSetTargeted); \
	DECLARE_FUNCTION(execGetTeam);


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_CALLBACK_WRAPPERS
#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetable(UTargetable&&); \
	UTargetable(const UTargetable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetable) \
	NO_API virtual ~UTargetable();


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetable(); \
	friend struct Z_Construct_UClass_UTargetable_Statics; \
public: \
	DECLARE_CLASS(UTargetable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UEAbilities"), NO_API) \
	DECLARE_SERIALIZER(UTargetable)


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetable() {} \
public: \
	typedef UTargetable UClassType; \
	typedef ITargetable ThisClass; \
	static ETeam Execute_GetTeam(const UObject* O); \
	static void Execute_SetTargeted(UObject* O, bool Target); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_15_PROLOG
#define FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_CALLBACK_WRAPPERS \
	FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEABILITIES_API UClass* StaticClass<class UTargetable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_Interfaces_Targetable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
