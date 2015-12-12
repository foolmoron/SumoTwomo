// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SumoTwomo.h"
#include "SumoTwomoGameMode.h"
#include "SumoTwomoBall.h"

ASumoTwomoGameMode::ASumoTwomoGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ASumoTwomoBall::StaticClass();
}
