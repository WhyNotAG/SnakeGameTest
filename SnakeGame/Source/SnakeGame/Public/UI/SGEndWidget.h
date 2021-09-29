// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SGEndWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class SNAKEGAME_API USGEndWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
		UButton* MenuButton;

	UPROPERTY(meta = (BindWidget))
		UButton* RestartGameButton;

	virtual void NativeOnInitialized() override;

private:
	UFUNCTION()
	void RestartGame();

	UFUNCTION()
	void Menu();

public:
	UFUNCTION(BlueprintCallable)
		int32 GetAppleCount() const;

	UFUNCTION(BlueprintCallable)
		FString GetTime() const;
};
