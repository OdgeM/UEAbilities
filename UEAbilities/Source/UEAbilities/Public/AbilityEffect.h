// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Stats/StatData.h"
#include "AbilityEffect.generated.h"

class UAbilityComponent;
class UAbility;
struct FAbilityTargetData;

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced)
class UEABILITIES_API UAbilityEffect : public UObject
{
    GENERATED_BODY()

public:
    virtual void Apply(AActor* Instigator, const FAbilityTargetData& TargetData, UAbility* Ability);
};