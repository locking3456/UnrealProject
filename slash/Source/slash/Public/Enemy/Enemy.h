// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Enemy.generated.h"

class UAnimMontage;
UCLASS()
class SLASH_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	AEnemy();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit(const FVector& ImpactPoint) override;
	void DirectionalHitReact(const FVector& ImpactPoint);
private:
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnyWhere, Category = Sounds)
	USoundBase* HitSound;

	UPROPERTY(EditAnyWhere, Category = VisualEffects)
	UParticleSystem* HitParticles;
protected:
	virtual void BeginPlay() override;

	/**
* Play montage functions
*/
	void PlayHitReactMontage(const FName & SectionName);
public:	


};
