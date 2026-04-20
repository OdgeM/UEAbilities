// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Targetable.h"
#include "TeamData.h"

#include "MyChar.generated.h"

class UAbilityComponent;
class UStatComponent;

UCLASS()
class UEABILITIES_API AMyChar : public ACharacter, public ITargetable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyChar();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team")
	ETeam Team = ETeam::Player;

	// Interface Implementation
	virtual ETeam GetTeam_Implementation() const override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UAbilityComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStatComponent* StatComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
