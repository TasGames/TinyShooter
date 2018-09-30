// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MyFloatingPawnMovement.generated.h"

UCLASS()
class TINYSHOOTER1_API UMyFloatingPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
	
public:
	// how fast the pawn rotates
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float RotateSpeed = 100.0f;

	virtual void ApplyInput(float ForwardValue, float RightValue, float DeltaSeconds);
	
	
};
