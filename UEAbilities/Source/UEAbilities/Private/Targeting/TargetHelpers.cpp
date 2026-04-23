// Fill out your copyright notice in the Description page of Project Settings.
#include "Targeting/TargetHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "TeamData.h"
#include "Interfaces/Targetable.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollectionInstance.h"

void TargetingHelpers::SetHighlight(AActor* Actor, bool bEnabled, int32 StencilValue)
{
    

    if (!Actor) return;

    ETeam TargetTeam = ITargetable::Execute_GetTeam(Actor);

    TArray<UPrimitiveComponent*> Comps;
    Actor->GetComponents<UPrimitiveComponent>(Comps);



    for (UPrimitiveComponent* Comp : Comps)
    {
        Comp->SetRenderCustomDepth(bEnabled);
        if (bEnabled)
        {
            if (StencilValue == -1) {
                Comp->SetCustomDepthStencilValue((int32)TargetTeam*2);
            }
            else {
                Comp->SetCustomDepthStencilValue(StencilValue);
            }
            
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

    if (!Actor->Implements<UTargetable>()) return;
    ITargetable::Execute_SetTargeted(Actor, false);
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


void TargetingHelpers::SetTargeted(AActor* Actor, bool bEnabled) {
    if (!Actor) return;
    int32 Selected = bEnabled ? 1 : 0;
    ETeam TargetTeam = ITargetable::Execute_GetTeam(Actor);

    SetHighlight(Actor, true, ((int32)TargetTeam)*2 + Selected);

    if (!Actor->Implements<UTargetable>()) return;
    ITargetable::Execute_SetTargeted(Actor, true);
}

bool TargetingHelpers::IsTargetable(AActor* Actor) {
    if (!Actor) return false;
    return Actor->GetClass()->ImplementsInterface(UTargetable::StaticClass());

}