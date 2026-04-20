// Fill out your copyright notice in the Description page of Project Settings.


#include "StatComponent.h"

void UStatComponent::BeginPlay() {
    Super::BeginPlay();

    CurrentStats = BaseStats;
}

float UStatComponent::GetStat(EStatsType Stat) const
{
    if (HasStat(Stat))
    {
        return CurrentStats[Stat].Current;
    }

    return -1.f;
}

bool UStatComponent::HasStat(EStatsType Stat) const
{
    return CurrentStats.Contains(Stat);
}

void UStatComponent::ApplyModifier(const FStatModifier& Mod, AActor* Instigator)
{
    if (!CurrentStats.Contains(Mod.Stat)) {
        return;
    }

    float& Value = CurrentStats[Mod.Stat].Current;
    float Original = Value;

    switch (Mod.Operation)
    {
        case EModifierOp::Add:
            Value += Mod.Value;
            break;
        case EModifierOp::Multiply:
            Value *= Mod.Value;
            break;
        case EModifierOp::Override:
            Value = Mod.Value;
            break;
    }

    Value = FMath::Clamp(Value, 0.f, CurrentStats[Mod.Stat].Max);

    if (Mod.Duration > 0.f)
    {
        FTimerHandle Timer;
        GetWorld()->GetTimerManager().SetTimer(
            Timer,
            [this, Mod, Original]()
            {
                if (CurrentStats.Contains(Mod.Stat)) {
                    CurrentStats[Mod.Stat].Current = Original;
                }
            },
            Mod.Duration,
            false
        );
    }
}

bool UStatComponent::CanAfford(const FStatModifier& Mod) const
{
    if (!CurrentStats.Contains(Mod.Stat)) return false;

    float Current = CurrentStats[Mod.Stat].Current;

    if (Mod.Operation == EModifierOp::Add) {
        return (Current + Mod.Value) >= 0.f;
    }
    return true;
}

bool UStatComponent::CanAffordModifiers(const TArray<FStatModifier>& Mods) const
{
    for (const FStatModifier& Mod : Mods)
    {
        if (!CanAfford(Mod))
        {
            return false;
        }
    }
    return true;
}