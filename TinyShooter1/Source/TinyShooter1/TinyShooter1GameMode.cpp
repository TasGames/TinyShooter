// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TinyShooter1GameMode.h"
#include "TinyShooter1Pawn.h"

ATinyShooter1GameMode::ATinyShooter1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATinyShooter1Pawn::StaticClass();
}

void ATinyShooter1GameMode::Tick(float DeltaTime)
{
}

void ATinyShooter1GameMode::BeginPlay()
{
}

void ATinyShooter1GameMode::SpawnEnemyTimerExpired()
{
}

void ATinyShooter1GameMode::HandleEnemyDestroyed(AActor * whodied)
{
}
