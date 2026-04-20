// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"
#include "Ability.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UAbilityComponent::UAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UAbilityComponent::AddAbility(TSubclassOf<UAbility> AbilityClass) {
	if (!AbilityClass) return;

	UAbility* NewAbility = NewObject<UAbility>(this, AbilityClass);
	Abilities.Add(NewAbility);
}

void UAbilityComponent::ActivateAbility(int32 Index, const FAbilityTargetData& TargetData) {
	if (!Abilities.IsValidIndex(Index)) return;

	UAbility* Ability = Abilities[Index];

	if (Ability && Ability->CanActivate(GetOwner())) {
		Ability->Activate(GetOwner(), TargetData);
	}
}
