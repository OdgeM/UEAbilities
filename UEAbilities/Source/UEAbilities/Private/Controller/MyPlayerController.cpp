// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "AbilityComponent.h"
#include "Targeting/AbilityTargeting.h"
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
			TargetData.TargetActor = HitActor;
		}
		TargetData.TargetLocation = Hit.ImpactPoint;

		
		
		AbilityComp->ActivateAbility(CurrentAbilityIndex, TargetData);
	}

	bIsTargeting = false;
	CurrentAbilityIndex = INDEX_NONE;
}


void AMyPlayerController::StartTargeting(int32 AbilityIndex) {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::FromInt(AbilityIndex));

	CurrentAbilityIndex = AbilityIndex;
	bIsTargeting = true;
}


void AMyPlayerController::Move() {
	
}

void AMyPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	const FVector2D InputValue = MoveActionBinding->GetValue().Get<FVector2D>();
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, InputValue.ToString());
	if (!bIsTargeting) return;

	APawn* CurrentPawn = GetPawn();
	if (!CurrentPawn) return;
	
	UAbilityComponent* Comp = CurrentPawn->FindComponentByClass<UAbilityComponent>();
	if (!Comp) return;

	if (!Comp->Abilities.IsValidIndex(CurrentAbilityIndex)) return;

	UAbility* Ability = Comp->Abilities[CurrentAbilityIndex];
	if (!Ability || !Ability->TargetingStrategy) return;

	FHitResult Hit;

	if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
	{
		Ability->TargetingStrategy->UpdatePreview(this, Hit);
	}
}