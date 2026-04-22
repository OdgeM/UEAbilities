// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "StatData.generated.h"


UENUM(BlueprintType)
enum class EStatsType : uint8
{
    Health,
    MovementSpeed,
    Mana,
    Stamina
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

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EStatsType Stat;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EModifierOp Operation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Value = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Duration = 0.f; // 0 = instant

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bOverTime = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bTemporary = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float MaxCHange = 0.f;

    FStatModifier() {
        Stat = EStatsType::Health;
        Operation = EModifierOp::Add;
    }

    FStatModifier(EStatsType S, float V) {
        Stat = S;
        Value = V;

        Operation = EModifierOp::Add;
    }
};