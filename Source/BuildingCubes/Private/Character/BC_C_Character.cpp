// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BC_C_Character.h"

// Sets default values
ABC_C_Character::ABC_C_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABC_C_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABC_C_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABC_C_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

