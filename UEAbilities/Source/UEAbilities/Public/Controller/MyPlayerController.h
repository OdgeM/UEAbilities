// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilityStructs.h"
#include "MyPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

/**
 * 
 */
UCLASS()
class UEABILITIES_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

protected:
	FHitResult LastHit;


	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Ability1;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Ability2;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Ability3;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Ability4;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Confirm;

	void StartTargeting(int32 AbilityIndex);
	
	// Functions
	void OnAbility1();
	void OnAbility2();
	void OnAbility3();
	void OnAbility4();
	void OnConfirm();
	void Move();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	FAbilityTargetData LastTarget;

private:
	int32 CurrentAbilityIndex = INDEX_NONE;
	bool bIsTargeting = false;
	struct FEnhancedInputActionValueBinding* MoveActionBinding;
};
