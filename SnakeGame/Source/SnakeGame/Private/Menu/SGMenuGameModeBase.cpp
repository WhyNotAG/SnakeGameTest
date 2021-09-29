// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/SGMenuGameModeBase.h"

#include "Menu/SGMenuHUD.h"
#include "Menu/SGMenuPlayerController.h"

ASGMenuGameModeBase::ASGMenuGameModeBase()
{
	PlayerControllerClass = ASGMenuPlayerController::StaticClass();
	HUDClass = ASGMenuHUD::StaticClass();
}
