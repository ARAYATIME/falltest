// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ProyectoFallguysController.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOFALLGUYS_API AProyectoFallguysController : public APlayerController
{
	GENERATED_BODY()
public:
	void SetHUDMatchCountdown(float CountdownTime);

	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	void SetHUDTime();
private:

	float MatchTime = 0.f;

	UPROPERTY()
	class AMyFallguysHUD* MyFallGuysHUD;

	UPROPERTY()
	class AProyectoFallguysGameMode* MyFallguysMode;

	UPROPERTY()
	class UMyFallguysOverlay* MyFallguysOverlay;
};
