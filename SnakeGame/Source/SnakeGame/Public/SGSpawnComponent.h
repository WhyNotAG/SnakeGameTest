// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGSpawnComponent.generated.h"

class ASnakeGameApple;

UCLASS()
class SNAKEGAME_API ASGSpawnComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	ASGSpawnComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TSubclassOf<ASnakeGameApple> AppleSubclass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Spawn")
		float SpawnDelay = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Spawn")
		float SpawnUpdateTime = 3.0f;


private:
	void SpawnApple();
	FTimerHandle SpawnTimerHandle;
	float const MaxX = 550.0f;
	float const MinX = -550.0f;

	float const MaxY = 950.0f;
	float const MinY = -950.0f;

};
