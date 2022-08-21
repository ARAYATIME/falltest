// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoFallguysGameMode.h"
#include "ProyectoFallguysCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectoFallguysGameMode::AProyectoFallguysGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AProyectoFallguysGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CountdownTime = MatchTime - DeltaTime;
}
