// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability.h"
#include "AbilityEffect.h"
#include "AbilityComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Interfaces/Targetable.h"
#include "Targeting/AbilityTargeting.h"
#include "StatComponent.h"
#include "Stats/StatData.h"


// Sets default values
UAbility::UAbility()
{
}

void UAbility::Activate(AActor* Instigator, const FAbilityTargetData& TargetData)
{

    if (!Instigator||!TargetingStrategy || !CanActivate(Instigator)) return;
    UStatComponent* Stats = Instigator->FindComponentByClass<UStatComponent>();

    if (!Stats) return;

    UAbilityComponent* AbilityComp = Instigator->FindComponentByClass<UAbilityComponent>();

    if (!AbilityComp) return;

    if (!Stats->CanAffordModifiers(Costs)) {
        return;
    }

    for (const FStatModifier& Cost : Costs)
    {
        Stats->ApplyModifier(Cost, Instigator);
    }

    LastUsedTime = Instigator->GetWorld()->GetTimeSeconds();

    TArray<AActor*> Targets;
    TargetingStrategy->GetTargets(AbilityComp, Instigator, TargetData, Targets);

    for (AActor* Target : Targets)
    {
        if (!IsValidTarget(Instigator, Target)) continue;

        for (UAbilityEffect* Effect : Effects)
        {
            if (Effect)
            {
                Effect->Apply(Instigator, Target);
            }
        }
    }
}


bool UAbility::CanActivate(AActor* Instigator) const{
	float CurrentTime = Instigator->GetWorld()->GetTimeSeconds();
	return (CurrentTime - LastUsedTime) >= Cooldown;
}


bool UAbility::IsValidTarget(AActor* Instigator, AActor* Target) const
{
	if (!Target || !Instigator) return false;
	if (!Target->Implements<UTargetable>()) return false;

	ETeam TargetTeam = ITargetable::Execute_GetTeam(Target);

	return (TargetableTeams & (int32)TargetTeam) != 0;
}