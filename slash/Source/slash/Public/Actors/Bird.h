// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "Bird.generated.h"

class UCapsuleComponent ;
class USkeletalMeshComponent;
class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
UCLASS()
class SLASH_API ABird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* BirdMesh;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UCameraComponent* ViewCamera;
protected:
	void MoveForward(float value);
	
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* BirdMappingContext;

	void Move(const FInputActionValue & Value);

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
