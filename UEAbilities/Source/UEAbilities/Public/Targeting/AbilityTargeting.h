#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityTargeting.generated.h"

struct FAbilityTargetData;
class UAbilityComponent;

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

protected:
    TArray<TWeakObjectPtr<AActor>> HighlightedActors;
    TArray<AActor*> TargetActors;
};