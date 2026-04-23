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
    virtual void Activate(AActor* Instigator,  FAbilityTargetData& TargetData);
    

    UFUNCTION(BlueprintCallable)
    virtual bool CanActivate(AActor* Instigator, float& CooldownOut, bool& CanAfford) const;

    virtual bool CanActivate(AActor* Instigator) const;

    


    bool IsValidTarget(AActor* Instigator, AActor* Target) const; 

    UPROPERTY(EditAnywhere, Instanced, Category = "Targeting")
    UAbilityTargeting* TargetingStrategy;

     void UpdatePreview(
        APlayerController* PC,
        const FHitResult& Hit,
        FAbilityTargetData& TargetData,
        UAbilityComponent* AbilityComponent
    );

     void StartTargeting(AActor* Instigator);
     void StopTargeting(APlayerController* PC);

     

protected:
    

    UPROPERTY(EditAnywhere, Instanced)
    TArray<UAbilityEffect*> Effects;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString Name = "String";

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Cooldown = 1.0f;
    
    UPROPERTY(EditAnywhere, Category = "Cost", BlueprintReadOnly)
    TArray<FStatModifier> Costs;
    

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "/Script/UEAbilities.ETeam"))
    int32 TargetableTeams;

    float LastUsedTime = -1000.0f;
};