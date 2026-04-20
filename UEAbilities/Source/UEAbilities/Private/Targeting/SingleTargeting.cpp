// Fill out your copyright notice in the Description page of Project Settings.


#include "Targeting/SingleTargeting.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "Components/PrimitiveComponent.h"

void USingleTargeting::UpdatePreview(
	APlayerController* PC,
	const FHitResult& Hit
) {
	if (!PC) return;

	AActor* NewActor = Hit.GetActor();

	if (LastHighlightedActor.IsValid() && LastHighlightedActor.Get() != NewActor) {
		TArray<UPrimitiveComponent*> Comps;
		LastHighlightedActor->GetComponents<UPrimitiveComponent>(Comps);

		for (UPrimitiveComponent* Comp : Comps) {
			Comp->SetRenderCustomDepth(false);
		}

	}

	if (NewActor)
	{
		TArray<UPrimitiveComponent*> Comps;
		NewActor->GetComponents<UPrimitiveComponent>(Comps);

		for (UPrimitiveComponent* Comp : Comps) {
			Comp->SetRenderCustomDepth(true);
		}

		LastHighlightedActor = NewActor;
	}
}