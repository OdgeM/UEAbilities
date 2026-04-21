// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Targeting/AbilityTargeting.h"
#include "CoreMinimal.h"
#include "AbilityStructs.h"
#include "LineTargeting.generated.h"

UCLASS()
class UEABILITIES_API ULineTargeting : public UAbilityTargeting
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float Range = 1000.f;

	virtual void GetTargets(
		UAbilityComponent* AbilityComp,
		AActor* Instigator,
		const FAbilityTargetData&,
		TArray<AActor*>& OutTargets
	) override;

	virtual void UpdatePreview(
		APlayerController* PC,
		const FHitResult& Hit
	) override;

};
