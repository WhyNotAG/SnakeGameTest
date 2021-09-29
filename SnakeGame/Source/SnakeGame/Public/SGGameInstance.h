// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SGGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API USGGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Game")
		FName StartupLevelName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Game")
		FName MenuLevelName = NAME_None;

	

public:
	FName GetStartupName() const { return StartupLevelName; }
	FName GetMenuName() const { return MenuLevelName; }

	TArray<int32>  GetScore() const { return Score; }
	void AddElement(int32 const Id) { Score.Add(Id); }
	void SetScore(TArray<int32> const Array) { Score = Array; }

	int32 GetScoreNum() const { return Score.Num(); }
	int32 GetScoreElement(int32 Id);
	void SortScore();

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Game")
		TArray<int32> Score = {};
};
