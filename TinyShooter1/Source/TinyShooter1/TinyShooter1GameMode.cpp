// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TinyShooter1GameMode.h"
#include "TinyShooter1Pawn.h"

ATinyShooter1GameMode::ATinyShooter1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATinyShooter1Pawn::StaticClass();
}

