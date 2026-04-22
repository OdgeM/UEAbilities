// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityStructs.h"
#include "TimerManager.h"

#include "AbilityComponent.generated.h"

class UAbility;
class APlayerController;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEABILITIES_API UAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	virtual void BeginPlay() override;
	// Sets default values for this component's properties
	UAbilityComponent();
	UFUNCTION(BlueprintCallable)
	void AddAbility(TSubclassOf<UAbility> AbilityClass);
	UFUNCTION(BlueprintCallable)
	void ActivateAbility(int32 Index,  FAbilityTargetData& TargetData, APlayerController* PC);

	void StopTargeting(APlayerController* PC, int32 Index);
	void StartTargeting(APlayerController* PC, int32 Index);
	void UpdatePreview(APlayerController* PC, int32 Index, const FHitResult& Hit);
	bool CanSelect(int32 Index);
	
	UPROPERTY()
	TArray<UAbility*> Abilities;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	TArray<TSubclassOf<UAbility>> AbilityClasses;
private:
	int32 CurrentIndex = INDEX_NONE;
};
	