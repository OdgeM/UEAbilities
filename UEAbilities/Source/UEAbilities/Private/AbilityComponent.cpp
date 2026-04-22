// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"
#include "Ability.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
#include "Targeting/TargetHelpers.h"
#include "GameFramework/PlayerController.h"


// Sets default values for this component's properties
UAbilityComponent::UAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UAbilityComponent::BeginPlay() {
	Super::BeginPlay();
	Abilities.Empty();
	for (TSubclassOf<UAbility> AbilityClass : AbilityClasses)
	{
		if (AbilityClass)
		{
			AddAbility(AbilityClass);
		}
	}
}


void UAbilityComponent::AddAbility(TSubclassOf<UAbility> AbilityClass) {
	if (!AbilityClass) return;

	UAbility* NewAbility = NewObject<UAbility>(this, AbilityClass);
	Abilities.Add(NewAbility);
}

void UAbilityComponent::ActivateAbility(int32 Index,  FAbilityTargetData& TargetData, APlayerController* PC) {
	if (!Abilities.IsValidIndex(Index)) return;

	UAbility* Ability = Abilities[Index];



	if (Ability && Ability->CanActivate(GetOwner())) {

		Ability->Activate(GetOwner(), TargetData);
		Ability->StopTargeting(PC);
	}
}

void UAbilityComponent::StopTargeting(APlayerController* PC, int32 Index) {
	if (!Abilities.IsValidIndex(Index)) return;
	UAbility* Ability = Abilities[Index];

	if (!Ability) return;
	Ability->StopTargeting(PC);
}

bool UAbilityComponent::CanSelect(int32 Index) {
	if (!Abilities.IsValidIndex(Index)) return false;
	UAbility* Ability = Abilities[Index];

	if (!Ability) return false;

	return Ability->CanActivate(GetOwner());

}

void UAbilityComponent::StartTargeting(APlayerController* PC, int32 Index) {
	if (!Abilities.IsValidIndex(Index)) return;
	UAbility* Ability = Abilities[Index];

	if (!Ability) return;
	CurrentIndex = Index;
	Ability->StartTargeting(GetOwner());
}

void UAbilityComponent::UpdatePreview(APlayerController* PC, int32 Index, const FHitResult& Hit) {
	if (!Abilities.IsValidIndex(Index)) return;
	UAbility* Ability = Abilities[Index];

	FAbilityTargetData TargetData;
	if (Hit.GetActor()) {

		if (TargetingHelpers::IsTargetable(Hit.GetActor())) {
			TargetData.HoverActor = Hit.GetActor();
		}

		TargetData.TargetLocation = Hit.ImpactPoint;
		TargetData.TargetActor.Empty();


		Abilities[Index]->UpdatePreview(PC, Hit, TargetData, this);

	}
}
