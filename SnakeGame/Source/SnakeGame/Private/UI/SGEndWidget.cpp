// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SGEndWidget.h"

#include "SGGameInstance.h"
#include "SnakeGameActor.h"
#include "SnakeGameCamera.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void USGEndWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (MenuButton)
	{
		MenuButton->OnClicked.AddDynamic(this, &USGEndWidget::Menu);
	}

	if (RestartGameButton)
	{
		RestartGameButton->OnClicked.AddDynamic(this, &USGEndWidget::RestartGame);
	}
}

void USGEndWidget::RestartGame()
{
	if (!GetWorld()) return;

	const auto SGGameInstance = GetWorld()->GetGameInstance<USGGameInstance>();

	if (!SGGameInstance || SGGameInstance->GetStartupName().IsNone()) return;

	const FName StartupLevelName = SGGameInstance->GetStartupName();

	SGGameInstance->AddElement(GetAppleCount());
	UGameplayStatics::OpenLevel(this, StartupLevelName);
}

void USGEndWidget::Menu()
{
	if (!GetWorld()) return;

	const auto SGGameInstance = GetWorld()->GetGameInstance<USGGameInstance>();

	if (!SGGameInstance || SGGameInstance->GetMenuName().IsNone()) return;

	const FName MenuLevelName = SGGameInstance->GetMenuName();

	SGGameInstance->AddElement(GetAppleCount());
	UGameplayStatics::OpenLevel(this, MenuLevelName);
}

int32 USGEndWidget::GetAppleCount() const
{
	const auto Player = GetOwningPlayerPawn();
	if (!Player) { return 0; }

	const auto Component = Cast<ASnakeGameCamera>(Player);
	const auto Snake = Cast<ASnakeGameActor>(Component->GetSnakeGameActor());
	if (!Snake) { return 0; }

	return Snake->GetAppleCount();
}

FString USGEndWidget::GetTime() const
{
	const auto Player = GetOwningPlayerPawn();
	if (!Player) { return FString::FromInt(0); }

	const auto Component = Cast<ASnakeGameCamera>(Player);
	const auto Snake = Cast<ASnakeGameActor>(Component->GetSnakeGameActor());
	if (!Snake) { return FString::FromInt(0); }

	FString Result = FString::FromInt(Snake->GetGameTimeSinceCreation() / 60) + FString(":") + FString::FromInt(
		static_cast<int32>(Snake->GetGameTimeSinceCreation()) % 60);

	return Result;
}
