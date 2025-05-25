// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "CharacterTypes.h"
#include "SlashCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UGroomComponent;
class AItem;
class AWeapon;

UCLASS()
class SLASH_API ASlashCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASlashCharacter();

	UFUNCTION(BlueprintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputMappingContext* SlashContext;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* MovementAction;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* EquipAction;

	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* AttackAction;

	/**
	* Play montage functions
	*/
	void PlayAttackMontage();

	/**
	* Call Back for Input
	*/
	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void EKeyPressed();

	void Attack();

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;

	UPROPERTY(VisibleAnywhere, Category = "Hair")
	UGroomComponent* Hair;

	UPROPERTY(VisibleAnywhere, Category = "Hair")
	UGroomComponent* EyeBrows;

	UPROPERTY(VisibleInstanceOnly)
	AItem* OverlappingItem;

	void PlayEquipMontage(FName SectionName);
	bool CanDisarm();
	bool CanArm();

	UFUNCTION(BlueprintCallable)
	void Disarm();

	UFUNCTION(BlueprintCallable)
	void Arm();


	UFUNCTION(BlueprintCallable)
	void FinishEquipping();

/*
* Animation montages
*/
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* EquipMontage;

	UFUNCTION(BlueprintCallable)
	void AttackEnd();
	bool CanAttack();

private:
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	AWeapon* EquippedWeapon;
public:	
	FORCEINLINE void SetOverlappiongItem(AItem* Item) {
		OverlappingItem = Item;
	}

	FORCEINLINE ECharacterState GetCharacterState() const{
		return CharacterState;
	}
	// Called every frame

	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Jump() override;


};
