// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class AActor;

namespace TargetingHelpers
{
	void SetHighlight(AActor* Actor, bool bEnabled, int32 StencilValue = -1);
	void ClearHighlight(AActor* Actor);
	void GetAllTargetables(UWorld* World, TArray<AActor*>& OutActors);
	void SetTargeted(AActor* Actor, bool bEnabled);
	bool IsTargetable(AActor* Actor);

}
