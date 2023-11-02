// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BC_C_Character.generated.h"

UCLASS()
class BUILDINGCUBES_API ABC_C_Character : public ACharacter
{
	GENERATED_BODY()

public:

	ABC_C_Character();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
