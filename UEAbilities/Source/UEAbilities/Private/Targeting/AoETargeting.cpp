// Fill out your copyright notice in the Description page of Project Settings.


#include "Targeting/AoETargeting.h"
#include "AbilityStructs.h"
#include "GameFramework/Actor.h"
#include "AbilityComponent.h"
#include "Interfaces/Targetable.h"
#include "Engine/OverlapResult.h"
#include "DrawDebugHelpers.h"

UAoETargeting::UAoETargeting() {
    bCanRotate = true;
}

void UAoETargeting::GetTargets(
     UAbilityComponent* AbilityComponent,
     FAbilityTargetData& TargetData
) {

    for (const auto& A : TargetableActors) {
        if (A.IsValid()) {
            float Distance = FVector::Distance(A.Get()->GetActorLocation(), TargetData.TargetLocation);
            if (Distance <= Radius) {
                TargetData.TargetActor.Add(A.Get());
            }
        }
    }
    TargetData.SourceLocation = TargetData.TargetLocation;

}

void UAoETargeting::UpdatePreview(APlayerController* PC, const FHitResult& Hit, FAbilityTargetData& TargetData, UAbilityComponent* AbilityComponent) {
    Super::UpdatePreview( PC, Hit, TargetData, AbilityComponent);
    if (!PC) return;

    UWorld* World = PC->GetWorld();
    if (!World) return;

    DrawDebugSphere(
        World,
        Hit.ImpactPoint,
        Radius,
        32,
        FColor::Green,
        false,
        0.05f
    );
}