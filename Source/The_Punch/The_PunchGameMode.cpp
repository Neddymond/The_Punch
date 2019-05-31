// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "The_PunchGameMode.h"
#include "The_PunchCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThe_PunchGameMode::AThe_PunchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
