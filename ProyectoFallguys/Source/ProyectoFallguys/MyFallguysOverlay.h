// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"

#include "MyFallguysOverlay.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOFALLGUYS_API UMyFallguysOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* MatchCountdownText;
};
