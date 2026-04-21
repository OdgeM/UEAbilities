// Fill out your copyright notice in the Description page of Project Settings.
#include "Targeting/TargetHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/Targetable.h"

void TargetingHelpers::SetHighlight(AActor* Actor, bool bEnabled, int32 StencilValue)
{
    if (!Actor) return;

    TArray<UPrimitiveComponent*> Comps;
    Actor->GetComponents<UPrimitiveComponent>(Comps);

    for (UPrimitiveComponent* Comp : Comps)
    {
        Comp->SetRenderCustomDepth(bEnabled);
        if (bEnabled)
        {
            Comp->SetCustomDepthStencilValue(StencilValue);
        }
    }
}

void TargetingHelpers::ClearHighlight(AActor* Actor)
{
    if (!Actor) return;

    TArray<UPrimitiveComponent*> Comps;
    Actor->GetComponents<UPrimitiveComponent>(Comps);

    for (UPrimitiveComponent* Comp : Comps)
    {
        Comp->SetRenderCustomDepth(false);
    }
}

void TargetingHelpers::GetAllTargetables(UWorld* World, TArray<AActor*>& OutActors) {
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), AllActors);

    for (AActor* a : AllActors) {
        if (a->GetClass()->ImplementsInterface(UTargetable::StaticClass())) {
            OutActors.Add(a);
        }
    }
}