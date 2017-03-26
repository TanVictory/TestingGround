// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundGame.h"
#include "TestingGroundGameGameMode.h"
#include "TestingGroundGameHUD.h"
#include "TestingGroundGameCharacter.h"

ATestingGroundGameGameMode::ATestingGroundGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundGameHUD::StaticClass();
}
