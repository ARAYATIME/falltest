// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadFall.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "ProyectoFallguysCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADeadFall::ADeadFall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default Properties
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(1024.f, 1024.f, 64.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	// Attach events to on overlap begin and end triggers
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeadFall::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ADeadFall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeadFall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeadFall::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// For debugging purposes
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Overlap Begin Function called");
	MyFallguysCharacter = MyFallguysCharacter == nullptr ? Cast<AProyectoFallguysCharacter>(OtherActor) : MyFallguysCharacter;

	if (MyFallguysCharacter)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Teleport To Location");
		MyFallguysCharacter->TeleportToLocation();
	}

}

