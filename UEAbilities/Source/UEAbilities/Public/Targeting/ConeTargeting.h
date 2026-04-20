// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Targeting/AbilityTargeting.h"
#include "ConeTargeting.generated.h"

/**
 * 
 */
UCLASS()
class UEABILITIES_API UConeTargeting : public UAbilityTargeting
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    float Range = 500.f;

    UPROPERTY(EditAnywhere)
    float AngleDegrees = 45.f;

    virtual void GetTargets(
        UAbilityComponent* AbilityComp,
        AActor* Instigator,
        const FAbilityTargetData& TargetData,
        TArray<AActor*>& OutTargets
    ) override;

    virtual void UpdatePreview(APlayerController* PC, const FHitResult& Hit) override;
};
