// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamData.h"
#include "Interfaces/Targetable.h"
#include "GameFramework/Actor.h"
#include "TargetableActor.generated.h"

class UAbilityComponent;
class UStatComponent;

UCLASS()
class UEABILITIES_API ATargetableActor : public AActor, public ITargetable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetableActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team")
	ETeam Team = ETeam::Player;
	virtual ETeam GetTeam_Implementation() const override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStatComponent* StatComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
