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
        AActor* Instigator,
        const struct FAbilityTargetData& TargetData,
        TArray<AActor*>& OutTargets
    );

    virtual void UpdatePreview(
        APlayerController* PC,
        const FHitResult& Hit
    );
};