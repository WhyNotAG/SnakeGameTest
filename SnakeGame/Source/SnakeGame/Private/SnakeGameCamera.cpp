// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeGame/Public/SnakeGameCamera.h"

#include "SGSpawnComponent.h"
#include "SnakeGame/Public/SnakeGameActor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ASnakeGameCamera::ASnakeGameCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxRootComponent = CreateDefaultSubobject<UBoxComponent>("BoxRootComponent");
	BoxRootComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -50.0f));
	SetRootComponent(BoxRootComponent);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->SetRelativeLocation(FVector::ZeroVector);
	SpringArmComponent->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	SpringArmComponent->TargetArmLength = ArmLength;
	SpringArmComponent->bDoCollisionTest = false;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);
}

void ASnakeGameCamera::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld()) {
		FVector const Location(GetActorLocation());
		FRotator const Rotation(FRotator::ZeroRotator);
		SGActor = GetWorld()->SpawnActor<ASnakeGameActor>(SGActorSubclass, Location, Rotation);
		SpawnComponent = GetWorld()->SpawnActor<ASGSpawnComponent>(SpawnComponentSubclass, Location, Rotation);
	}

}

void ASnakeGameCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SGActor->SetMovement(MovementVector);
}

void ASnakeGameCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("MoveForward", IE_Pressed, this, &ASnakeGameCamera::MoveForward);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ASnakeGameCamera::MoveRight);
	PlayerInputComponent->BindAction("MoveBackward", IE_Pressed, this, &ASnakeGameCamera::MoveBackward);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ASnakeGameCamera::MoveLeft);
}

void ASnakeGameCamera::MoveForward()
{
	if(!MovementVector.Equals(FVector2D(1.0f, 0.0f)))
		MovementVector = FVector2D(-1.0f, 0.0f);
}

void ASnakeGameCamera::MoveRight()
{
	if (!MovementVector.Equals(FVector2D(0.0f, -1.0f)))
		MovementVector = FVector2D(0.0f, 1.0f);
}

void ASnakeGameCamera::MoveBackward()
{
	if (!MovementVector.Equals(FVector2D(-1.0f, 0.0f)))
		MovementVector = FVector2D(1.0f, 0.0f);
}

void ASnakeGameCamera::MoveLeft()
{
	if (!MovementVector.Equals(FVector2D(0.0f, 1.0f)))
		MovementVector = FVector2D(0.0f, -1.0f);
}