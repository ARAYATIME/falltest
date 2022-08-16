// Fill out your copyright notice in the Description page of Project Settings.


#include "Mine.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "ProyectoFallguysCharacter.h"
#include "Kismet//GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine.h"


// Sets default values
AMine::AMine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MineMesh"));
	RootComponent = MineMesh;
	MineSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("MineSphereComponent"));
	MineSphereComponent->SetupAttachment(MineMesh);
	MineSphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AMine::OnOverlapBegin);
	MineSphereComponent->OnComponentEndOverlap.AddDynamic(this, &AMine::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AMine::BeginPlay()
{
	Super::BeginPlay();
	
	Player = Cast<AProyectoFallguysCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void AMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMine::Explode()
{
	Player = Player == nullptr ? Cast<AProyectoFallguysCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)) : Player;
	if (Player)
	{
		// Call take damage function from player character
		Player->TakeDamage(Damage);

		// Add impulse force on explosion
		MineMesh->SetSimulatePhysics(true);
		MineSphereComponent->SetSimulatePhysics(true);
		Player->GetMesh()->SetSimulatePhysics(true);
		Player->GetMesh()->AddImpulse(Player->GetFollowCamera()->GetForwardVector() * ImpulseForce * MineMesh->GetMass());

		// Effects
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), MineExplosionSoundCue, this->GetActorLocation());
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MineExplosionEffect, GetActorLocation());
		
		// Destroy object
		Destroy();
	}
}

void AMine::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Player = Player == nullptr ? Cast<AProyectoFallguysCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)) : Player;
	
	// Start Timer if overlapping actor is the player and gets inside the sphere component
	if (Player == Cast<AProyectoFallguysCharacter>(OtherActor))
	{
		GetWorld()->GetTimerManager().SetTimer(MineTimerHandle, this, &AMine::Explode, MineDelay, false);
	}
}

void AMine::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Player = Player == nullptr ? Cast<AProyectoFallguysCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)) : Player;
	
	// Clear Timer if overlapping actor is the player and gets outside the sphere component
	if (Player == Cast<AProyectoFallguysCharacter>(OtherActor))
	{
		GetWorld()->GetTimerManager().ClearTimer(MineTimerHandle);
	}
}

