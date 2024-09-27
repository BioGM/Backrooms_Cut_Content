// Copyright Epic Games, Inc. All Rights Reserved.

#include "TpsIAGameMode.h"
#include "TpsIACharacter.h"
#include "UObject/ConstructorHelpers.h"

ATpsIAGameMode::ATpsIAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
