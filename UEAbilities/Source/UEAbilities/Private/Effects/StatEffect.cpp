// Fill out your copyright notice in the Description page of Project Settings.

#include "Effects/StatEffect.h"
#include "AbilityStructs.h"
#include "Ability.h"
#include "StatComponent.h"


void UStatEffect::ApplyToActor(AActor* Instigator, AActor* Target)
{
	if (!Target || !Instigator)
		return;

	UStatComponent* TargetStats = Target->FindComponentByClass<UStatComponent>();
	if (!TargetStats) return;

	for (const FStatModifier& Mod : Modifiers)
	{
		if (TargetStats->HasStat(Mod.Stat))
		{
			ApplyModifier(Instigator, Target, TargetStats, Mod);
		}
	}
}

void UStatEffect::Apply(AActor* Instigator, const FAbilityTargetData& TargetData,  UAbility* Ability) {

	for (AActor* Target : TargetData.TargetActor)
	{
		if (!Ability->IsValidTarget(Instigator, Target)) continue;

		ApplyToActor(Instigator, Target);

	}
}

void UStatEffect::ApplyModifier(
	AActor* Instigator,
	AActor* Target,
	UStatComponent* Stats,
	const FStatModifier& Mod
)
{

	Stats->ApplyModifier(Mod, Instigator);
}


