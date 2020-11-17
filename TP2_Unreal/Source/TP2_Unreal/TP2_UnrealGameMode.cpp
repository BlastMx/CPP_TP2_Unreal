// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP2_UnrealGameMode.h"
#include "TP2_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP2_UnrealGameMode::ATP2_UnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
