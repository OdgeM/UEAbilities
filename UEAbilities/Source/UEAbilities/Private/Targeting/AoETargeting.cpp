// Fill out your copyright notice in the Description page of Project Settings.


#include "Targeting/AoETargeting.h"
#include "AbilityStructs.h"
#include "GameFramework/Actor.h"
#include "AbilityComponent.h"
#include "Interfaces/Targetable.h"
#include "Engine/OverlapResult.h"
#include "DrawDebugHelpers.h"



void UAoETargeting::GetTargets(
     UAbilityComponent* AbilityComponent,
     FAbilityTargetData& TargetData
) {
    TArray<FOverlapResult> Results;

    FCollisionShape Sphere = FCollisionShape::MakeSphere(Radius);

    AbilityComponent->GetWorld()->OverlapMultiByChannel(
        Results,
        TargetData.TargetLocation,
        FQuat::Identity,
        ECC_Pawn,
        Sphere
    );

    for (const FOverlapResult& Result : Results)
    {
        AActor * TargetActor = Result.GetActor();
        if (TargetActor && TargetActor->GetClass()->ImplementsInterface(UTargetable::StaticClass()))
        {

            TargetData.TargetActor.Add(TargetActor);
        }
    } 
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