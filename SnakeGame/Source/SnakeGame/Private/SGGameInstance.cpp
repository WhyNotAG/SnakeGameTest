// Fill out your copyright notice in the Description page of Project Settings.


#include "SGGameInstance.h"

int32 USGGameInstance::GetScoreElement(int32 const Id)
{
	if (Id >= Score.Num())
	{
		return 0;
	}

	return Score[Id];
}

void USGGameInstance::SortScore()
{
}
