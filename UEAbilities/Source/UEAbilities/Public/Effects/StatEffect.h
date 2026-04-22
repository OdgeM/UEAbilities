// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityEffect.h"
#include "StatEffect.generated.h"

class UStatComponent;

/**
 * 
 */
UCLASS()
class UEABILITIES_API UStatEffect : public UAbilityEffect
{
	GENERATED_BODY()
	
public:
	virtual void Apply(AActor* Instigator, const FAbilityTargetData& TargetData,  UAbility* Ability) override;
	void ApplyToActor(AActor* Instigator, AActor* Target);

protected:
	UPROPERTY(EditAnywhere)
	TArray<FStatModifier> Modifiers;
private:
	void ApplyModifier(
		AActor* Instigator,
		AActor* Target,
		UStatComponent* TargetStats,
		const FStatModifier& Mod
	);

};
