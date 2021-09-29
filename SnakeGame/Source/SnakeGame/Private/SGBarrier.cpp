// Fill out your copyright notice in the Description page of Project Settings.


#include "SGBarrier.h"
#include "Components/BoxComponent.h"
// Sets default values
ASGBarrier::ASGBarrier()
{
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

void ASGBarrier::BeginPlay()
{
	Super::BeginPlay();
}


