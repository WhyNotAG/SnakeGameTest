#include "SnakeGame/Public/SGTailComponent.h"

#include "SnakeGameApple.h"
#include "SnakeGame/Public/SnakeGameActor.h"
#include "Components/BoxComponent.h"

ASGTailComponent::ASGTailComponent()
{
	PrimaryActorTick.bCanEverTick = true;

	UStaticMesh* BodyMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Cube")).Object;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetStaticMesh(BodyMesh);
	SetRootComponent(StaticMesh);


	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetRelativeLocation(GetActorLocation());
	BoxCollider->SetGenerateOverlapEvents(true);
	BoxCollider->SetBoxExtent(FVector(1.0f, 1.0f, 1.0f));
	BoxCollider->SetupAttachment(StaticMesh);
}

// Called when the game starts or when spawned
void ASGTailComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

