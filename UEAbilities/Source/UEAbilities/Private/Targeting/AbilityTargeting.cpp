#include "Targeting/AbilityTargeting.h"
#include "AbilityComponent.h"
#include "Targeting/TargetHelpers.h"
#include "Ability.h"
#include "Engine/HitResult.h"

void UAbilityTargeting::GetTargets(
	UAbilityComponent* AbilityComp,
	FAbilityTargetData& TargetData
)
{
}

void UAbilityTargeting::UpdatePreview(
    APlayerController* PC,
    const FHitResult& Hit,
    FAbilityTargetData& TargetData,
    UAbilityComponent* AbilityComponent
) {
    if (!AbilityComponent || !PC) return;

    GetTargets(AbilityComponent, TargetData);

    for (auto const& value : TargetableActors) {
        if (value.IsValid()) {
            if (TargetData.TargetActor.Contains(value.Get())) {
                TargetingHelpers::SetTargeted(value.Get(), true);
            }
            else {
                TargetingHelpers::SetTargeted(value.Get(), false);
            }
        }
        
    }
    
}
void UAbilityTargeting::ClearPreview(APlayerController* PC)
{
    for (auto& Actor : HighlightedActors)
    {
        if (Actor.IsValid())
        {
            TargetingHelpers::ClearHighlight(Actor.Get());
        }
    }
    TargetableActors.Empty();
    HighlightedActors.Empty();
}

void UAbilityTargeting::StartTargeting(AActor* Instigator, UAbility* Ability) {
    if (!Instigator) return;
    TargetActors.Empty();


    UWorld* World = Instigator->GetWorld();

    TArray<AActor*> OutActors;
    TargetingHelpers::GetAllTargetables(World,OutActors);

    for (AActor* A : OutActors) {
        if (Ability->IsValidTarget(Instigator, A)) {
            TargetingHelpers::SetHighlight(A, true);
            TargetableActors.Add(A);
        }
        else {
            TargetingHelpers::SetHighlight(A, true, 1);
        }

        HighlightedActors.Add(A);
    }

    
}