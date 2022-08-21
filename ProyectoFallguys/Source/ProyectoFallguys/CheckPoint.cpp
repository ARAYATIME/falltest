// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "ProyectoFallguysCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACheckPoint::ACheckPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default Properties
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(128.f, 128.f, 128.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	// Attach events to on overlap begin and end triggers
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoint::OnOverlapBegin);
	//CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ACheckPoint::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ACheckPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// For debugging purposes
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Overlap Begin Function called");
	MyFallguysCharacter = MyFallguysCharacter == nullptr ? Cast<AProyectoFallguysCharacter>(OtherActor) : MyFallguysCharacter;

	if (MyFallguysCharacter)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Last Checkpoint Begin - Updated");
		MyFallguysCharacter->LastCheckPoint = MyFallguysCharacter->GetActorLocation();
	}

}

//void ACheckPoint::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
//{
//	// For debugging purposes
//	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Overlap End Function called");
//
//	MyFallguysCharacter = MyFallguysCharacter == nullptr ? Cast<AProyectoFallguysCharacter>(OtherActor) : MyFallguysCharacter;
//
//	if (MyFallguysCharacter)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Last Checkpoint End - Updated");
//		MyFallguysCharacter->LastCheckPoint = MyFallguysCharacter->GetActorLocation();
//	}
//
//}

