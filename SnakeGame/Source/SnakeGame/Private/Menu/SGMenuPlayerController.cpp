// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/SGMenuPlayerController.h"
#include "SnakeGame/Public/SGGameInstance.h"
void ASGMenuPlayerController::BeginPlay()
{
	Super::BeginPlay();
	bShowMouseCursor = true;
}
