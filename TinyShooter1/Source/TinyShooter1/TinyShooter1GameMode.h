// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TinyShooter1GameMode.generated.h"

UCLASS(MinimalAPI)
class ATinyShooter1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATinyShooter1GameMode();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	void SpawnEnemyTimerExpired();

	UFUNCTION()
	void HandleEnemyDestroyed(AActor * whodied);

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	int32 EnemyDeaths = 10;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	int32 EnemyCountMax = 10;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	int32 EnemyCountCurrent = 10;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float EnemySpawnInterval = 5000.0f;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float SpawnRadius = 5000.0f;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector SpawnOrigin;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> EnemyClass;

	FTimerHandle TimerHandle_EnemySpawnTimer;

};



