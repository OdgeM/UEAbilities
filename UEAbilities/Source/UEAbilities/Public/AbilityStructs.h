// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamData.h"
#include "AbilityStructs.generated.h"

class AActor;

UENUM(BlueprintType)
enum class ETargetType : uint8 {
	SingleTarget	UMETA(DisplayName = "Single Target"),
	AreaEffect	UMETA(DisplayName = "Area of Effect")
};


USTRUCT(BlueprintType)
struct FAbilityResources
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ManaAmount = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StaminaAmount = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HealthAmount = 0.f;
};


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
};
