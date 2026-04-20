#include "Targeting/AbilityTargeting.h"
#include "AbilityComponent.h"
#include "Engine/HitResult.h"

void UAbilityTargeting::GetTargets(
	UAbilityComponent* AbilityComp,
	AActor*,
	const FAbilityTargetData&,
	TArray<AActor*>&
)
{
}

void UAbilityTargeting::UpdatePreview(
	APlayerController* PC,
	const FHitResult& Hit
) {

}