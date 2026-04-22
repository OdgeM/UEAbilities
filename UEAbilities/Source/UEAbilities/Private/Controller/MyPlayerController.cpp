// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "AbilityComponent.h"
#include "Targeting/AbilityTargeting.h"
#include "Interfaces/Targetable.h"
#include "Ability.h"
#include "AbilityStructs.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}


	bShowMouseCursor = true;
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	

	if(UEnhancedInputComponent * EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{

		EIC->BindAction(IA_Ability1, ETriggerEvent::Started, this, &AMyPlayerController::OnAbility1);
		EIC->BindAction(IA_Ability2, ETriggerEvent::Started, this, &AMyPlayerController::OnAbility2);
		EIC->BindAction(IA_Ability3, ETriggerEvent::Started, this, &AMyPlayerController::OnAbility3);
		EIC->BindAction(IA_Ability4, ETriggerEvent::Started, this, &AMyPlayerController::OnAbility4);

		EIC->BindAction(IA_Confirm, ETriggerEvent::Started, this, &AMyPlayerController::OnConfirm);

		EIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyPlayerController::Move);
		MoveActionBinding = &EIC->BindActionValue(IA_Move);
	}
}

void AMyPlayerController::OnAbility1() {StartTargeting(0);}
void AMyPlayerController::OnAbility2() { StartTargeting(1); }
void AMyPlayerController::OnAbility3() { StartTargeting(2); }
void AMyPlayerController::OnAbility4() { StartTargeting(3); }

void AMyPlayerController::OnConfirm() {

	if (!bIsTargeting || CurrentAbilityIndex == INDEX_NONE) return;

	APawn* CurrentPawn = GetPawn();
	if (!CurrentPawn) return;

	UAbilityComponent* AbilityComp = CurrentPawn->FindComponentByClass<UAbilityComponent>();
	if (!AbilityComp) return;

	FHitResult Hit;

	if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
	{
		AActor* HitActor = Hit.GetActor();

		FAbilityTargetData TargetData;
		if (HitActor) {
			TargetData.HoverActor = HitActor;
		}
		TargetData.TargetLocation = Hit.ImpactPoint;


		AbilityComp->ActivateAbility(CurrentAbilityIndex, TargetData, this);
	}

	bIsTargeting = false;
	CurrentAbilityIndex = INDEX_NONE;
}


void AMyPlayerController::StartTargeting(int32 AbilityIndex) {




	

	APawn* CurrentPawn = GetPawn();
	if (!CurrentPawn) return;

	UAbilityComponent* Comp = CurrentPawn->FindComponentByClass<UAbilityComponent>();
	if (!Comp) return;

	if (!Comp->CanSelect(AbilityIndex)) return;

	if (AbilityIndex != CurrentAbilityIndex) {
		Comp->StopTargeting(this, CurrentAbilityIndex);
		Comp->StartTargeting(this, AbilityIndex);

		CurrentAbilityIndex = AbilityIndex;
		bIsTargeting = true;
	}
	else {
		bIsTargeting = false;
		CurrentAbilityIndex = INDEX_NONE;
		Comp->StopTargeting(this, AbilityIndex);
	}
}


void AMyPlayerController::Move() {
	const FVector InputValue = MoveActionBinding->GetValue().Get<FVector>();
	APawn* CurrentPawn = GetPawn();
	
	if (!CurrentPawn) return;
	
	FVector Right = CurrentPawn->GetActorRightVector();
	FVector Forward = CurrentPawn->GetActorForwardVector();



	CurrentPawn->AddMovementInput(Forward, InputValue.X);
	CurrentPawn->AddMovementInput(Right, InputValue.Y);
}

void AMyPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);


	if (!bIsTargeting) return;

	APawn* CurrentPawn = GetPawn();
	if (!CurrentPawn) return;
	
	UAbilityComponent* Comp = CurrentPawn->FindComponentByClass<UAbilityComponent>();
	if (!Comp) return;


	FHitResult Hit;

	if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
	{
		Comp->UpdatePreview(this, CurrentAbilityIndex, Hit);
		LastHit = Hit;

	}
}