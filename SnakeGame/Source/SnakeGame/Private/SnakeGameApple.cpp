
#include "SnakeGame/Public/SnakeGameApple.h"
#include "SnakeGame/Public/SGTailComponent.h"
#include "Components/SphereComponent.h"
#include "SnakeGameActor.h"

ASnakeGameApple::ASnakeGameApple()
{
	PrimaryActorTick.bCanEverTick = false;

	UStaticMesh* BodyMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Sphere")).Object;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetStaticMesh(BodyMesh);
	StaticMesh->SetGenerateOverlapEvents(true);
	SetRootComponent(StaticMesh);

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetRelativeLocation(GetActorLocation());
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->SetupAttachment(StaticMesh);

}


void ASnakeGameApple::BeginPlay()
{
	Super::BeginPlay();
}

void ASnakeGameApple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


