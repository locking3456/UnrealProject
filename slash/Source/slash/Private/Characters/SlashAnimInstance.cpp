// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SlashAnimInstance.h"
#include "Characters/slashCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h" 
void USlashAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	SlashCharacter = Cast<AslashCharacter>(TryGetPawnOwner());
	if (SlashCharacter) {
		SlashCharacterMovement = SlashCharacter->GetCharacterMovement();
	}

}

void USlashAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (SlashCharacterMovement) {
		
		GroundSpeed = UKismetMathLibrary::VSizeXY(SlashCharacterMovement->Velocity);
		// ����� �޽��� ��� (ȭ�鿡 2�� ���� ǥ��)

		IsFalling = SlashCharacterMovement->IsFalling();
	}
}
