// Fill out your copyright notice in the Description page of Project Settings.


#include "Targeting/AoETargeting.h"
#include "AbilityStructs.h"
#include "GameFramework/Actor.h"
#include "AbilityComponent.h"
#include "Engine/OverlapResult.h"



void UAoETargeting::GetTargets(
    UAbilityComponent* AbilityComponent,
    AActor* Actor,
    const FAbilityTargetData& TargetData,
    TArray<AActor*>& OutTargets
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
        if (AActor* Actor = Result.GetActor())
        {
            OutTargets.Add(Actor);
        }
    }
}