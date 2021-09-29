// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SGMenuPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASGMenuPlayerController : public APlayerController
{
	GENERATED_BODY()

	protected:
	virtual void BeginPlay() override;
};
