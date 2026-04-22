// Fill out your copyright notice in the Description page of Project Settings.

#include "Targeting/LineTargeting.h"
#include "CoreMinimal.h"
#include "AbilityStructs.h"
#include "AbilityComponent.h"
#include "Interfaces/Targetable.h"
#include "GameFramework/Actor.h"
#include "Targeting/AbilityTargeting.h"
#include "Engine/HitResult.h"

ULineTargeting::ULineTargeting() {
    bCanRotate = true;
}

void ULineTargeting::GetTargets(
    UAbilityComponent* AbilityComp,
     FAbilityTargetData& TargetData
)
{
    if (!AbilityComp) return;

    AActor* Owner= AbilityComp->GetOwner();

    if (!Owner) return;

    FVector Start = Owner->GetActorLocation();
    FVector End = Start + Owner->GetActorForwardVector() * Range;

    TargetData.SourceLocation = Start;

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
            if (Actor->GetClass()->ImplementsInterface(UTargetable::StaticClass())) {
                TargetData.TargetActor.Add(Actor);
            }
        }
    }
}

void ULineTargeting::UpdatePreview(APlayerController* PC, const FHitResult& Hit,  FAbilityTargetData& TargetData, UAbilityComponent* AbilityComponent)
{
    
    if (!PC) return;

    Super::UpdatePreview(PC, Hit, TargetData, AbilityComponent);

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