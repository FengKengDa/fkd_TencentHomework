// Copyright Epic Games, Inc. All Rights Reserved.

#include "txHomework1GameMode.h"
#include "txHomework1Character.h"
#include "UObject/ConstructorHelpers.h"

AtxHomework1GameMode::AtxHomework1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
