// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGTailComponent.generated.h"

class UBoxComponent;
UCLASS()
class SNAKEGAME_API ASGTailComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASGTailComponent();

	FString GetTailType() { return TailType; }
	void SetTailType(FString Type) { TailType = Type; }

	FVector GetLocation() { return StaticMesh->GetRelativeLocation();}
	void SetLocation(FVector Vector) { StaticMesh->SetRelativeLocation(Vector);}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxCollider;

private:
	FString TailType;

};
