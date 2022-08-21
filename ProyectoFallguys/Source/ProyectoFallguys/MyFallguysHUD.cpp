// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFallguysHUD.h"
#include "MyFallguysOverlay.h"

void AMyFallguysHUD::BeginPlay()
{
	Super::BeginPlay();
	AddCharacterOverlay();

}

void AMyFallguysHUD::AddCharacterOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();

	if (PlayerController && CharacterOverlayClass)
	{
		MyFallguysOverlay = CreateWidget<UMyFallguysOverlay>(PlayerController, CharacterOverlayClass);
		MyFallguysOverlay->AddToViewport();
	}
}