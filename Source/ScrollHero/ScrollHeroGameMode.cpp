// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScrollHeroGameMode.h"
#include "ScrollHeroCharacter.h"

AScrollHeroGameMode::AScrollHeroGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AScrollHeroCharacter::StaticClass();	
}
