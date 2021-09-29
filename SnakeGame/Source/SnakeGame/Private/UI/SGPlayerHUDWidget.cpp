// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SGPlayerHUDWidget.h"

#include "SnakeGameCamera.h"
#include "SnakeGame/Public/SnakeGameActor.h"

int32 USGPlayerHUDWidget::GetAppleCount() const
{
	const auto Player = GetOwningPlayerPawn();
	if (!Player) { return 0; }

	const auto Component = Cast<ASnakeGameCamera>(Player);
	const auto Snake = Cast<ASnakeGameActor>(Component->GetSnakeGameActor());
	if (!Snake) { return 0; }

	return Snake->GetAppleCount();
}

FString USGPlayerHUDWidget::GetTime() const
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
