#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityStructs.h"
#include "TeamData.h"
#include "Stats/StatData.h"
#include "Ability.generated.h"

class UAbilityEffect;
class UAbilityComponent;
class UAbilityTargeting;

UENUM(BlueprintType)
enum class ETargetingMode : uint8
{
    Actor,
    Location
};

UCLASS(Abstract, Blueprintable)
class UEABILITIES_API UAbility : public UObject
{
    GENERATED_BODY()

public:
    UAbility();
    virtual void Activate(AActor* Instigator, const FAbilityTargetData& TargetData);
    virtual bool CanActivate(AActor* Instigator) const;

    bool IsValidTarget(AActor* Instigator, AActor* Target) const; 

    UPROPERTY(EditAnywhere, Instanced, Category = "Targeting")
    UAbilityTargeting* TargetingStrategy;

protected:
    

    UPROPERTY(EditAnywhere, Instanced)
    TArray<UAbilityEffect*> Effects;

    UPROPERTY(EditAnywhere)
    float Cooldown = 1.0f;
    
    UPROPERTY(EditAnywhere, Category="Cost")
    TArray<FStatModifier> Costs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ETeam"))
    int32 TargetableTeams;


    float LastUsedTime = -1000.0f;
};