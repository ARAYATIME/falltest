// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyFallguysHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOFALLGUYS_API AMyFallguysHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, Category = "Player Stats")
	TSubclassOf<class UUserWidget> CharacterOverlayClass;

	UPROPERTY()
	class UMyFallguysOverlay* MyFallguysOverlay;

	void AddCharacterOverlay();

protected:
	virtual void BeginPlay() override;
};
