// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeGameActor.generated.h"


class ASGTailComponent;
class UBoxComponent;
class USplineComponent;

UCLASS()
class SNAKEGAME_API ASnakeGameActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeGameActor();
	void CreateSnake(FString Type);
	void SetMovement(FVector2D Amount) { DirectionMove = Amount; };


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float Step = 110;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UBoxComponent* Head;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<ASGTailComponent> TailClass;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DirectionMove;

	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
			UPrimitiveComponent* OtherComponent, int32	OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float Delay = 0.3f;
	float BufferTime = 0.0f;

	int32 AppleCount = 0;
	TArray<ASGTailComponent*> SnakeBody = {};
	void MoveSnake();
	
};
