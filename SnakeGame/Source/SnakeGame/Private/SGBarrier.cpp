// Fill out your copyright notice in the Description page of Project Settings.


#include "SGBarrier.h"
#include "Components/BoxComponent.h"
// Sets default values
ASGBarrier::ASGBarrier()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	UStaticMesh* BodyMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Cube")).Object;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetStaticMesh(BodyMesh);
	StaticMesh->SetGenerateOverlapEvents(false);
	SetRootComponent(StaticMesh);

	
	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetRelativeLocation(GetActorLocation());
	BoxCollider->SetGenerateOverlapEvents(true);
	BoxCollider->SetBoxExtent(FVector(10.0f, 10.0f, 10.0f));
	BoxCollider->SetupAttachment(StaticMesh);

}

// Called when the game starts or when spawned
void ASGBarrier::BeginPlay()
{
	Super::BeginPlay();
	
}


