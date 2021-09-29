// Fill out your copyright notice in the Description page of Project Settings.


#include "SGSpawnComponent.h"
#include "SnakeGameApple.h"
// Sets default values
ASGSpawnComponent::ASGSpawnComponent()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASGSpawnComponent::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ASGSpawnComponent::SpawnApple, SpawnUpdateTime, true, SpawnDelay);

}


void ASGSpawnComponent::SpawnApple()
{
	FVector const Location(FVector(FMath::RandRange(MinX, MaxX), FMath::RandRange(MinY, MaxY), 20.0f));
	FRotator const Rotation(FRotator::ZeroRotator);
	ASnakeGameApple* Apple = GetWorld()->SpawnActor<ASnakeGameApple>(AppleSubclass, Location, Rotation);
}

