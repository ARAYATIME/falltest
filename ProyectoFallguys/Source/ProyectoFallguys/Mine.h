// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mine.generated.h"

UCLASS()
class PROYECTOFALLGUYS_API AMine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	class AProyectoFallguysCharacter* Player;

	UPROPERTY(EditAnywhere, Category = Mesh)
	UStaticMeshComponent* MineMesh;

	UPROPERTY(EditAnywhere, Category = Mesh)
	class USphereComponent* MineSphereComponent;

	UPROPERTY(EditAnywhere, Category = Effects)
	class UParticleSystem* MineExplosionEffect;

	UPROPERTY(EditAnywhere, Category = Effects)
	class USoundCue* MineExplosionSoundCue;

	UFUNCTION()
	void Explode();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,int32 OtherBodyIndex);

	FTimerHandle MineTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Delay)
	float MineDelay = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
	float Damage = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
	float ImpulseForce = 3000.0f;
	
};
