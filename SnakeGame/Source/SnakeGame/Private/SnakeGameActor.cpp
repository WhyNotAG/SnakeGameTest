#include "SnakeGame/Public/SnakeGameActor.h"

#include "SGBarrier.h"
#include "SGGameInstance.h"
#include "SnakeGameApple.h"
#include "SnakeGameCamera.h"
#include "Blueprint/UserWidget.h"
#include "Components/BoxComponent.h"
#include "SnakeGame/Public/SGTailComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogGameActor, All, All)

ASnakeGameActor::ASnakeGameActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Head = CreateDefaultSubobject<UBoxComponent>("Head");
	Head->SetRelativeLocation(GetActorLocation());
	Head->SetGenerateOverlapEvents(true);
	Head->SetBoxExtent(FVector(Step / 2, Step / 2, Step / 2));
	Head->OnComponentBeginOverlap.AddDynamic(this, &ASnakeGameActor::OnComponentBeginOverlap);
	SetRootComponent(Head);

}


void ASnakeGameActor::BeginPlay()
{
	Super::BeginPlay();

	if(!GetWorld()) { return; }
	CreateSnake(FString("Head"));

	auto const HUDWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
	if(HUDWidget)
	{
		HUDWidget->AddToViewport();
	}

	APlayerController* const PlayerController = Cast<APlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
	PlayerController->bShowMouseCursor = false;
	PlayerController->SetInputMode(FInputModeGameOnly());
}

void ASnakeGameActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	BufferTime += DeltaTime;

	if(BufferTime > Delay)
	{
		MoveSnake();
		BufferTime = 0;
	}
}

void ASnakeGameActor::CreateSnake(FString Type)
{
	if (GetWorld()) 
	{
		FVector const Location(FVector( 
			-SnakeBody.Num() * Step * DirectionMove.X + Head->GetRelativeLocation().X, 
			SnakeBody.Num() * Step * DirectionMove.Y + Head->GetRelativeLocation().Y, 
			Head->GetRelativeLocation().Z));

		FRotator const Rotation(FRotator::ZeroRotator);
		ASGTailComponent* Tail = GetWorld()->SpawnActor<ASGTailComponent>(TailClass, Location, Rotation);

		Tail->SetTailType(Type);
		SnakeBody.Add(Tail);
	}
}

void ASnakeGameActor::MoveSnake()
{
	if((DirectionMove.X != 0) || (DirectionMove.Y != 0))
	{
		FVector StartPoint = SnakeBody[0]->GetLocation();
		FVector Temp = SnakeBody[0]->GetLocation();

		if (DirectionMove.X > 0) StartPoint.X -= Step;
		if (DirectionMove.X < 0) StartPoint.X += Step;
		if (DirectionMove.Y > 0) StartPoint.Y += Step;
		if (DirectionMove.Y < 0) StartPoint.Y -= Step;

		SnakeBody[0]->SetLocation(StartPoint);
		Head->SetRelativeLocation(StartPoint);

		if (SnakeBody.Num() > 1)
		{
			for (int i = 1; i <= SnakeBody.Num() - 1; i++)
			{
				StartPoint = SnakeBody[i]->GetLocation();
				SnakeBody[i]->SetLocation(Temp);
				Temp = StartPoint;
			}

		}
	}
}

void ASnakeGameActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComponent != nullptr))
	{
		ASGTailComponent* Tail = Cast<ASGTailComponent>(OtherActor);
		ASnakeGameApple* Apple = Cast<ASnakeGameApple>(OtherActor);
		ASGBarrier* Barrier = Cast<ASGBarrier>(OtherActor);

		if ((Tail && Tail->GetTailType().Equals("Tail")) || Barrier) {

			if(!GetWorld()) { return; }

			APlayerController* const PlayerController = Cast<APlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
			PlayerController->SetPause(true);
			PlayerController->bShowMouseCursor = true;
			PlayerController->SetInputMode(FInputModeUIOnly());

			auto const EndWidget = CreateWidget<UUserWidget>(GetWorld(), EndWidgetClass);
			if (EndWidget)
			{
				EndWidget->AddToViewport();
			}
		}
		else if(Apple)
		{
			Apple->Destroy();
			CreateSnake("Tail");
			AppleCount++;
		}
	}
}
