#include "Targeting/AbilityTargeting.h"
#include "AbilityComponent.h"
#include "Targeting/TargetHelpers.h"
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
    ClearPreview(PC);
    GetTargets(AbilityComponent, TargetData);
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

    HighlightedActors.Empty();
}