// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/SGMenuHUD.h"
#include "Blueprint/UserWidget.h"

void ASGMenuHUD::BeginPlay()
{
	if(MenuWidgetClass)
	{
		const auto MenuWidget = CreateWidget<UUserWidget>(GetWorld(),
			MenuWidgetClass);

		if(MenuWidget)
		{
			MenuWidget->AddToViewport();
		}
	}
}
