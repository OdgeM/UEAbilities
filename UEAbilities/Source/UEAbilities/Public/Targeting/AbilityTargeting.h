#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityTargeting.generated.h"

struct FAbilityTargetData;
class UAbilityComponent;
class UAbility;

UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced)
class UEABILITIES_API UAbilityTargeting : public UObject
{
    GENERATED_BODY()

public:


    virtual void GetTargets(
        UAbilityComponent* comp,
        FAbilityTargetData& TargetData
    );

    virtual void UpdatePreview(
        APlayerController* PC,
        const FHitResult& Hit,
        FAbilityTargetData& TargetData,
        UAbilityComponent* AbilityComponent
    );

    virtual void ClearPreview(APlayerController* PC);

    void StartTargeting(AActor* Instigator, UAbility* Ability);

protected:
    TArray<TWeakObjectPtr<AActor>> HighlightedActors;
    TArray<TWeakObjectPtr<AActor>> TargetableActors;
    TArray<AActor*> TargetActors;
};