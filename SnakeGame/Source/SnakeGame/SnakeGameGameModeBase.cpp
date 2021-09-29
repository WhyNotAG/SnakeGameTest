// Copyright Epic Games, Inc. All Rights Reserved.


#include "SnakeGameGameModeBase.h"

#include "SGPlayerController.h"
#include "Public/SnakeGameCamera.h"

ASnakeGameGameModeBase::ASnakeGameGameModeBase()
{
    PlayerControllerClass = ASGPlayerController::StaticClass();
    DefaultPawnClass = ASnakeGameCamera::StaticClass();
}
