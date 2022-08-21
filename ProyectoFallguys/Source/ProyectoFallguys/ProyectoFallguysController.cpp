// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectoFallguysController.h"

#include "MyFallguysOverlay.h"
#include "MyFallguysHUD.h"
#include "ProyectoFallguysGameMode.h"
#include "Kismet/GameplayStatics.h"

void AProyectoFallguysController::BeginPlay()
{
	Super::BeginPlay();

	MyFallGuysHUD = Cast<AMyFallguysHUD>(GetHUD());

	MyFallguysMode = Cast<AProyectoFallguysGameMode>(UGameplayStatics::GetGameMode(this));

}

void AProyectoFallguysController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Validate or cast to have valid Game mode
	MyFallguysMode = MyFallguysMode == nullptr ? Cast<AProyectoFallguysGameMode>(UGameplayStatics::GetGameMode(this)) : MyFallguysMode;

	if (MyFallguysMode)
	{
		MatchTime = MyFallguysMode->MatchTime;
	}

	SetHUDTime();
}

void AProyectoFallguysController::SetHUDMatchCountdown(float CountdownTime)
{
	// Validate or cast to have valid HUD
	MyFallGuysHUD = MyFallGuysHUD == nullptr ? Cast<AMyFallguysHUD>(GetHUD()) : MyFallGuysHUD;

	bool BHUDValid = MyFallGuysHUD && 
			MyFallGuysHUD->MyFallguysOverlay &&
			MyFallGuysHUD->MyFallguysOverlay->MatchCountdownText;

	if (BHUDValid)
	{
		int32 Minutes = FMath::FloorToInt(CountdownTime  / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		if (Minutes < 0 )
		{
			CountdownText = "Game Over";
			MyFallGuysHUD->MyFallguysOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));
		}
		else
		{
			MyFallGuysHUD->MyFallguysOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));
		}
	}
}

void AProyectoFallguysController::SetHUDTime()
{
	float TimeLeft =  MatchTime - GetWorld()->GetTimeSeconds() ;

	SetHUDMatchCountdown(TimeLeft);
}
