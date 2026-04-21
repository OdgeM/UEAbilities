// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Stats/StatData.h"
#include "StatComponent.generated.h"

USTRUCT()
struct FStatData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	float Current;
	UPROPERTY(EditAnywhere)
	float Max;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEABILITIES_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	virtual void BeginPlay() override;
	float GetStat(EStatsType Stat) const;
	void ApplyModifier(const FStatModifier& Modifier, AActor* Instigator);
	bool HasStat(EStatsType Stat) const;
	bool CanAfford(const FStatModifier& Mod) const;
	bool CanAffordModifiers(const TArray<FStatModifier>& Mods) const;
	

protected:
	UPROPERTY(EditAnywhere)
	TMap<EStatsType, FStatData> BaseStats;
	TMap<EStatsType, FStatData> CurrentStats;
		
};
