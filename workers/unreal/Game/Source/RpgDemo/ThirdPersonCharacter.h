// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityId.h"
#include "GameFramework/Character.h"
#include "ThirdPersonCharacter.generated.h"

UCLASS(Blueprintable)
class RPGDEMO_API AThirdPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AThirdPersonCharacter();

	UFUNCTION(BlueprintPure, Category = "ThirdPersonCharacter")
		FEntityId GetEntityId() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
