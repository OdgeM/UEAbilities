// Fill out your copyright notice in the Description page of Project Settings.


#include "PushEffect.h"
#include "AbilityStructs.h"

void UPushEffect::Apply(AActor* Instigator, const FAbilityTargetData& TargetData, UAbility* Ability) {
	if (!Instigator || !Ability) return;

	for (auto& A : TargetData.TargetActor) {
		FVector Direction = (A->GetActorLocation() - TargetData.SourceLocation).GetSafeNormal();

		if (UPrimitiveComponent* Prim = A->FindComponentByClass<UPrimitiveComponent>())
		{
			Prim->AddImpulse(Direction * Force, NAME_None, true);
		}
	}
}