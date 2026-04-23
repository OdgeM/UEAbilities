// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityEffect.h"
#include "DashEffect.generated.h"

/**
 * 
 */
UCLASS()
class UEABILITIES_API UDashEffect : public UAbilityEffect
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    float DashDistance = 600.f;

    UPROPERTY(EditAnywhere)
    float DashSpeed = 2000.f;

    virtual void Apply(AActor* Instigator, const FAbilityTargetData& TargetData, UAbility* Ability) override;
};
