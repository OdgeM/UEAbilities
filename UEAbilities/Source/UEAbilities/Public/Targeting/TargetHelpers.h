// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class AActor;

namespace TargetingHelpers
{
	void SetHighlight(AActor* Actor, bool bEnabled, int32 StencilValue);
	void ClearHighlight(AActor* Actor);
	void GetAllTargetables(UWorld* World, TArray<AActor*>& OutActors);
}
