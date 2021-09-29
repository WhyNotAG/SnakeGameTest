// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SGMenuWidget.generated.h"


class UTextBlock;
class UListViewBase;
class UListView;
class UButton;

UCLASS()
class SNAKEGAME_API USGMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* StartGameButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LeaderBoard1;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LeaderBoard2;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LeaderBoard3;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LeaderBoard4;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LeaderBoard5;

	virtual void NativeOnInitialized() override;

private:
	UFUNCTION()
	void OnStartGame();
};
