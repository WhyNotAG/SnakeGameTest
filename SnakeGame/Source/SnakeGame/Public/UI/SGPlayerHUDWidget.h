// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SGPlayerHUDWidget.generated.h"


UCLASS()
class SNAKEGAME_API USGPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	int32 GetAppleCount() const;

	UFUNCTION(BlueprintCallable)
	FString GetTime() const;


	bool CheckComponent() const;
};
