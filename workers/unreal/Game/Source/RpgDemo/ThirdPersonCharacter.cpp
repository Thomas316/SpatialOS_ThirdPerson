// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCharacter.h"

#include "EntityRegistry.h"
#include "RPGDemoGameInstance.h"


// Sets default values
AThirdPersonCharacter::AThirdPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThirdPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThirdPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThirdPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FEntityId AThirdPersonCharacter::GetEntityId() const
{
	auto GameInstance = Cast<URPGDemoGameInstance>(GetWorld()->GetGameInstance());

	if (GameInstance != nullptr)
	{
		auto EntityRegistry = GameInstance->GetEntityRegistry();
		if (EntityRegistry != nullptr)
		{
			return EntityRegistry->GetEntityIdFromActor(this);
		}
	}

	return FEntityId();
}
