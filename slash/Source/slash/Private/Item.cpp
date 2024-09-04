// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	itemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = itemMesh;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(1, 60.0f, FColor::Cyan, FString("Item OnScreen Message!"));

	////

	//UWorld* World = GetWorld();
	//FVector Location = GetActorLocation();
	//FVector Forward = GetActorForwardVector();

	//DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.0f);
	//DRAW_POINT(Location + Forward * 100.f);

	int32 AvgInt = Avg<int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3 : %d"), AvgInt);
	
}
float AItem::TransformedSin()
{
	return amplitude * FMath::Sin(runningTime * timeConstant);
}

float AItem::TransformedCos()
{
	return amplitude * FMath::Cos(runningTime * timeConstant);
}
// Called every frame
void AItem::Tick(float DeltaTime)
{
	runningTime += DeltaTime;
	AddActorWorldOffset(FVector(0.f, 0.f, TransformedSin()));
}

