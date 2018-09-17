// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ArrowGameGameMode.h"
#include "ArrowGamePlayerController.h"
#include "ArrowGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArrowGameGameMode::AArrowGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArrowGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}