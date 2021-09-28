// Copyright Epic Games, Inc. All Rights Reserved.


#include "SnakeGameGameModeBase.h"
#include "Public/SnakeGameCamera.h"

ASnakeGameGameModeBase::ASnakeGameGameModeBase()
{
    DefaultPawnClass = ASnakeGameCamera::StaticClass();
}
