// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Targeting/AbilityTargeting.h"
#include "AoETargeting.generated.h"

/**
 * 
 */
UCLASS()
class UEABILITIES_API UAoETargeting : public UAbilityTargeting
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius = 300.f;

    virtual void GetTargets(
        UAbilityComponent* AbilityComponent,
        AActor*,
        const FAbilityTargetData& TargetData,
        TArray<AActor*>& OutTargets
    ) override;

    virtual void UpdatePreview(APlayerController* PC, const FHitResult& Hit) override;
};
