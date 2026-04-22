// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityEffect.h"
#include "PushEffect.generated.h"

/**
 * 
 */
UCLASS()
class UEABILITIES_API UPushEffect : public UAbilityEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float Force = 1000.f;

	virtual void Apply(AActor* Instigator, const FAbilityTargetData& TargetData, UAbility* Ability) override;
	
};
