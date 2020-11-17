// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "TP2_AnimationInstance.generated.h"

/**
 * 
 */
UCLASS(transient, Blueprintable, hideCategories=AnimInstance, BlueprintType)
class TP2_UNREAL_API UTP2_AnimationInstance: public UAnimInstance
{
	GENERATED_BODY()

public:
	UTP2_AnimationInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generic")
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generic")
		bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generic")
		bool IsCrouch;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
