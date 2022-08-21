// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProyectoFallguysGameMode.generated.h"

UCLASS(minimalapi)
class AProyectoFallguysGameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	float CountdownTime = 0.f;

public:
	AProyectoFallguysGameMode();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 300.f;

	FORCEINLINE float GetCountdownTime() const { return CountdownTime; }
};



