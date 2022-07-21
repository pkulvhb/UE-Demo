// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGameMode.h"
#include "TestCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "manager/PawnManager.h"

ATestGameMode::ATestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ATestGameMode::BeginPlay()
{
	Super::BeginPlay();
	PawnManager = GetWorld()->SpawnActor<APawnManager>();
}
