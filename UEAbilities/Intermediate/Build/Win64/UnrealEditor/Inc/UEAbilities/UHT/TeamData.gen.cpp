// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEAbilities/Public/TeamData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamData() {}

// Begin Cross Module References
UEABILITIES_API UEnum* Z_Construct_UEnum_UEAbilities_ETeam();
UPackage* Z_Construct_UPackage__Script_UEAbilities();
// End Cross Module References

// Begin Enum ETeam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UEAbilities_ETeam, (UObject*)Z_Construct_UPackage__Script_UEAbilities(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> UEABILITIES_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_UEAbilities_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Enemy.Name", "ETeam::Enemy" },
		{ "Friendly.Name", "ETeam::Friendly" },
		{ "Interactable.Name", "ETeam::Interactable" },
		{ "ModuleRelativePath", "Public/TeamData.h" },
		{ "Neutral.Name", "ETeam::Neutral" },
		{ "None.Hidden", "" },
		{ "None.Name", "ETeam::None" },
		{ "Player.Name", "ETeam::Player" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::None", (int64)ETeam::None },
		{ "ETeam::Player", (int64)ETeam::Player },
		{ "ETeam::Enemy", (int64)ETeam::Enemy },
		{ "ETeam::Neutral", (int64)ETeam::Neutral },
		{ "ETeam::Friendly", (int64)ETeam::Friendly },
		{ "ETeam::Interactable", (int64)ETeam::Interactable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UEAbilities_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UEAbilities,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_UEAbilities_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UEAbilities_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UEAbilities_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UEAbilities_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_UEAbilities_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// End Enum ETeam

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TeamData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 720471438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TeamData_h_2343568346(TEXT("/Script/UEAbilities"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TeamData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ojmar_OneDrive_Documents_GitHub_UEAbilities_UEAbilities_Source_UEAbilities_Public_TeamData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
