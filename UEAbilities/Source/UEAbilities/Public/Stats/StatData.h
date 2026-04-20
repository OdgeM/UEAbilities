// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "StatData.generated.h"


UENUM(BlueprintType)
enum class EStatsType : uint8
{
    Health,
    MaxHealth,
    MovementSpeed,
    Damage,
    Defense
};

UENUM(BlueprintType)
enum class EModifierOp : uint8
{
    Add,
    Multiply,
    Override
};

USTRUCT(BlueprintType)
struct FStatModifier
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    EStatsType Stat;

    UPROPERTY(EditAnywhere)
    EModifierOp Operation;

    UPROPERTY(EditAnywhere)
    float Value = 0.f;

    UPROPERTY(EditAnywhere)
    float Duration = 0.f; // 0 = instant
};