// Fill out your copyright notice in the Description page of Project Settings.


#include "Effects/DashEffect.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UDashEffect::Apply(AActor* Instigator, const FAbilityTargetData& TargetData, UAbility* Ability) {
    if (!Instigator) return;

    ACharacter* Char = Cast<ACharacter>(Instigator);
    if (!Char) return;

    FVector Forward = Char->GetActorForwardVector();

    float Duration = DashDistance / DashSpeed;

    Char->LaunchCharacter(Forward * DashSpeed, true, true);

    FTimerHandle StopHandle;
    Char->GetWorld()->GetTimerManager().SetTimer(
        StopHandle,
        [Char]()
        {
            if (Char)
            {
                Char->GetCharacterMovement()->StopMovementImmediately();
            }
        },
        Duration,
        false
    );
}