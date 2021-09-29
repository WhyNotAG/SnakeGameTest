// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SnakeGameCamera.generated.h"


class ASGSpawnComponent;
class ASnakeGameActor;
class ASGTailComponent;
class USpringArmComponent;
class UBoxComponent;
class UCameraComponent;

UCLASS()
class SNAKEGAME_API ASnakeGameCamera : public APawn
{
	GENERATED_BODY()

public:
	ASnakeGameCamera();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UBoxComponent* BoxRootComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ASnakeGameActor> SGActorSubclass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASnakeGameActor* SGActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	ASGSpawnComponent* SpawnComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<ASGSpawnComponent> SpawnComponentSubclass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float ArmLength = 2000.0f;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward();
	void MoveRight();
	void MoveBackward();
	void MoveLeft();

	FVector2D MovementVector = FVector2D(-1.0f, 0.0f);
};
