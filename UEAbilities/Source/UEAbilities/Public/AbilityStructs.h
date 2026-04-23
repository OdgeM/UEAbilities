// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamData.h"
#include "AbilityStructs.generated.h"

class AActor;


USTRUCT(BlueprintType)
struct FAbilityTargetData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* HoverActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SourceLocation = FVector::ZeroVector;
};
