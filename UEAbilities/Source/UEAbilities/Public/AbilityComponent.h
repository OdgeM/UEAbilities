// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityStructs.h"
#include "TimerManager.h"
#include "AbilityComponent.generated.h"

class UAbility;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEABILITIES_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilityComponent();
	UFUNCTION(BlueprintCallable)
	void AddAbility(TSubclassOf<UAbility> AbilityClass);
	UFUNCTION(BlueprintCallable)
	void ActivateAbility(int32 Index, const FAbilityTargetData& TargetData);


protected:
	UPROPERTY()
	TArray<UAbility*> Abilities;
	
		
};
	