// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityStructs.h"
#include "Targeting/AbilityTargeting.h"
#include "SingleTargeting.generated.h"

/**
 * 
 */
UCLASS()
class UEABILITIES_API USingleTargeting : public UAbilityTargeting
{
	GENERATED_BODY()
	
public:
	virtual void GetTargets(
		UAbilityComponent* AbilityComponent,
		AActor*,
		const FAbilityTargetData& TargetData,
		TArray<AActor*>& OutTargets
	) override
	{
		if (TargetData.TargetActor)
		{
			OutTargets.Add(TargetData.TargetActor);
		}
	}
};
