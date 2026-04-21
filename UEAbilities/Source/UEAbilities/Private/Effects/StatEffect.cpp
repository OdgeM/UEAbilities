// Fill out your copyright notice in the Description page of Project Settings.

#include "Effects/StatEffect.h"
#include "StatComponent.h"


void UStatEffect::Apply(AActor* Instigator, AActor* Target)
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

void UStatEffect::ApplyModifier(
	AActor* Instigator,
	AActor* Target,
	UStatComponent* Stats,
	const FStatModifier& Mod
)
{

	Stats->ApplyModifier(Mod, Instigator);
}


