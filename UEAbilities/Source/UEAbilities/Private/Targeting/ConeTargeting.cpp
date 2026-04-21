// Fill out your copyright notice in the Description page of Project Settings.


#include "Targeting/ConeTargeting.h"
#include "AbilityStructs.h"
#include "GameFramework/Actor.h"
#include "AbilityComponent.h"
#include "Engine/HitResult.h"
#include "Engine/OverlapResult.h"

void UConeTargeting::GetTargets(
    UAbilityComponent* AbilityComp,
    FAbilityTargetData& TargetData
) {
    if(!AbilityComp) return;

    AActor* Instigator = AbilityComp->GetOwner();

    if (!Instigator) return;

    FVector Origin = Instigator->GetActorLocation();
    FVector Forward = Instigator->GetActorForwardVector();

    float CosAngle = FMath::Cos(FMath::DegreesToRadians(AngleDegrees));

    TArray<FOverlapResult> Results;
    FCollisionShape Sphere = FCollisionShape::MakeSphere(Range);

    AbilityComp->GetWorld()->OverlapMultiByChannel(
        Results,
        Origin,
        FQuat::Identity,
        ECC_Pawn,
        Sphere
    );

    for (const FOverlapResult& Result : Results)
    {
        AActor* Target = Result.GetActor();
        if (!Target) continue;

        FVector Dir = (Target->GetActorLocation() - Origin).GetSafeNormal();
        float Dot = FVector::DotProduct(Forward, Dir);

        if (Dot >= CosAngle) {
            TargetData.TargetActor.Add(Target);
        }
    }
}

void UConeTargeting::UpdatePreview(APlayerController* PC, const FHitResult& Hit, FAbilityTargetData& TargetData, UAbilityComponent* AbilityComponent)
{
    Super::UpdatePreview(PC, Hit, TargetData, AbilityComponent);
    if (!PC) return;

    AActor* Pawn = PC->GetPawn();
    if (!Pawn) return;

    FVector Origin = Pawn->GetActorLocation();
    FVector Forward = Pawn->GetActorForwardVector();

    DrawDebugCone(
        PC->GetWorld(),
        Origin,
        Forward,
        Range,
        FMath::DegreesToRadians(AngleDegrees),
        FMath::DegreesToRadians(AngleDegrees),
        16,
        FColor::Blue,
        false,
        0.05f
    );
}