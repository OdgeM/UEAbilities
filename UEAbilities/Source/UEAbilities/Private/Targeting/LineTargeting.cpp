// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "AbilityStructs.h"
#include "AbilityComponent.h"
#include "GameFramework/Actor.h"
#include "Targeting/AbilityTargeting.h"
#include "Engine/HitResult.h"
#include "Targeting/LineTargeting.h"

void ULineTargeting::GetTargets(
    UAbilityComponent* AbilityComp,
    AActor* Instigator,
    const FAbilityTargetData&,
    TArray<AActor*>& OutTargets
)
{
    if (!AbilityComp || !Instigator) return;

    FVector Start = Instigator->GetActorLocation();
    FVector End = Start + Instigator->GetActorForwardVector() * Range;

    FHitResult Hit;

    if (AbilityComp->GetWorld()->LineTraceSingleByChannel(
        Hit,
        Start,
        End,
        ECC_Visibility
    ))
    {
        if (AActor* Actor = Hit.GetActor())
        {
            OutTargets.Add(Actor);
        }
    }
}

void ULineTargeting::UpdatePreview(APlayerController* PC, const FHitResult&)
{
    if (!PC) return;

    AActor* Pawn = PC->GetPawn();
    if (!Pawn) return;

    FVector Start = Pawn->GetActorLocation();
    FVector End = Start + Pawn->GetActorForwardVector() * Range;

    DrawDebugLine(
        PC->GetWorld(),
        Start,
        End,
        FColor::Red,
        false,
        0.05f,
        0,
        2.f
    );
}