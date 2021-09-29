// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/SGMenuWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ListView.h"
#include "Components/ListViewBase.h"
#include "Components/NamedSlot.h"
#include "Kismet/GameplayStatics.h"
#include "SnakeGame/Public/SGGameInstance.h"

void USGMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if(StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &USGMenuWidget::OnStartGame);
	}

	const auto SGGameInstance = GetWorld()->GetGameInstance<USGGameInstance>();

	if(SGGameInstance->GetScoreNum() > 1)
	{
		TArray<int32> Array = SGGameInstance->GetScore();
 		Array.Sort([](const int32& A, const int32& B) { return A > B; });
		SGGameInstance->SetScore(Array);
	}
	TArray<UTextBlock*> LeaderBoards = { LeaderBoard1, LeaderBoard2, LeaderBoard3, LeaderBoard4, LeaderBoard5};

	for(int32 i = 0; i < SGGameInstance->GetScoreNum(); i++)
	{
		LeaderBoards[i]->SetText(FText::AsNumber(SGGameInstance->GetScoreElement(i)));
		if (i == LeaderBoards.Num() - 1) { break; }
	}
	
}


void USGMenuWidget::OnStartGame()
{
	if(!GetWorld()) return;

	const auto SGGameInstance = GetWorld()->GetGameInstance<USGGameInstance>();

	if (!SGGameInstance || SGGameInstance->GetStartupName().IsNone()) return;

	const FName StartupLevelName = SGGameInstance->GetStartupName();
	UGameplayStatics::OpenLevel(this, StartupLevelName);

}
