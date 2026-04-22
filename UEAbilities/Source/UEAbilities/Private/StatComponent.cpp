// Fill out your copyright notice in the Description page of Project Settings.


#include "StatComponent.h"

void UStatComponent::BeginPlay() {
    Super::BeginPlay();

    CurrentStats = BaseStats;
}

bool UStatComponent::GetStat(EStatsType Stat, FStatData& OutStat) const
{
    if (HasStat(Stat))
    {
        OutStat = CurrentStats[Stat];
        return true;
    }

    OutStat = FStatData();
    return false;
}

float UStatComponent::GetStatMax(EStatsType Stat) const
{
    if (HasStat(Stat))
    {
        return CurrentStats[Stat].Max;
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

    if (Mod.bOverTime && Mod.Duration > 0.f)
    {
        const float TickInterval = 1.f;
        float Elapsed = 0.f;

        float Difference = 0.f;
        switch (Mod.Operation)
        {
        case EModifierOp::Add:
            Difference = Mod.Value;
            break;
        case EModifierOp::Multiply:
            Difference = Value * Mod.Value - Value;
            break;
        case EModifierOp::Override:
            Difference = Mod.Value - Value;
            break;
        }

        float PerTick = (Difference / Mod.Duration) * TickInterval;
        // Smart Pointer to Timer Handle
        TSharedRef<FTimerHandle> HandleRef = MakeShared<FTimerHandle>();

        // DoT Path
        GetWorld()->GetTimerManager().SetTimer(
            *HandleRef,
            [this, Mod, TickInterval, Elapsed, HandleRef, PerTick]() mutable
            {
                if (!CurrentStats.Contains(Mod.Stat)) return;

                float& TickValue = CurrentStats[Mod.Stat].Current;

                TickValue += PerTick;
                
                TickValue = FMath::Clamp(TickValue, 0.f, CurrentStats[Mod.Stat].Max);

                Elapsed += TickInterval;
                
                if (Elapsed >= Mod.Duration)
                {
                    GetWorld()->GetTimerManager().ClearTimer(*HandleRef);
                }
            },
            TickInterval,
            true
        );

        ActiveEffectTimers.Add(*HandleRef);
        return;
    }

    // Instant Path
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
   
    // Temporary Revert
    if (Mod.Duration > 0.f && Mod.bTemporary)
    {
        FTimerHandle Timer;

        GetWorld()->GetTimerManager().SetTimer(
            Timer,
            [this, Mod, Original]()
            {
                if (CurrentStats.Contains(Mod.Stat))
                {
                    CurrentStats[Mod.Stat].Current = Original;
                }
            },
            Mod.Duration,
            false
        );

        ActiveEffectTimers.Add(Timer);
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
