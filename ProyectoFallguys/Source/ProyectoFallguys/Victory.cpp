// Fill out your copyright notice in the Description page of Project Settings.


#include "Victory.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "ProyectoFallguysCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AVictory::AVictory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	VictoryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VictoryMesh"));
	RootComponent = VictoryMesh;

	// Default Properties
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(128.f, 128.f, 128.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	CollisionBox->SetupAttachment(VictoryMesh);

	// Attach events to on overlap begin and end triggers
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AVictory::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AVictory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVictory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVictory::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MyFallguysCharacter = MyFallguysCharacter == nullptr ? Cast<AProyectoFallguysCharacter>(OtherActor) : MyFallguysCharacter;

	if (MyFallguysCharacter)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "Victory");
		UGameplayStatics::OpenLevel(GetWorld(), LevelToLoad);
	}

}

