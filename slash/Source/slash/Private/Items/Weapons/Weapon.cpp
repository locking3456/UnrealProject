// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/Weapon.h"
#include "Characters/SlashCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
void AWeapon::Equip(USceneComponent* Inparent, FName InSocketName)
{
	AttachMeshToSocket(Inparent, InSocketName);
	ItemState = EItemState::EIS_Equipped;
	if (EquipSound) {
		UGameplayStatics::PlaySoundAtLocation(this, EquipSound, GetActorLocation());
	}
	if (Sphere) {
		Sphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}
void AWeapon::AttachMeshToSocket(USceneComponent* Inparent, const FName& InSocketName)
{
	FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
	itemMesh->AttachToComponent(Inparent, TransformRules, InSocketName);
}
void AWeapon::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	ASlashCharacter * SlashCharacter= Cast<ASlashCharacter>(OtherActor);

	//if (SlashCharacter) 
	//{

	//	FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget,true);
	//	itemMesh->AttachToComponent(SlashCharacter->GetMesh(), TransformRules, FName("RightHandSocket"));
	//}


}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

//void AWeapon::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}
