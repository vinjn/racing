// Copyright Epic Games, Inc. All Rights Reserved.

#include "racingGameMode.h"
#include "racingPawn.h"
#include "racingHud.h"

AracingGameMode::AracingGameMode()
{
	DefaultPawnClass = AracingPawn::StaticClass();
	HUDClass = AracingHud::StaticClass();
}
