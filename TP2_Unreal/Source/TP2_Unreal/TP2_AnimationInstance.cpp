// Fill out your copyright notice in the Description page of Project Settings.


#include "TP2_AnimationInstance.h"

UTP2_AnimationInstance::UTP2_AnimationInstance()
{
	Speed = 0.0;
}

void UTP2_AnimationInstance::NativeUpdateAnimation(float DeltaSeconds) 
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	AActor* OwningActor = GetOwningActor();

	if (OwningActor != nullptr)
	{
		Speed = OwningActor->GetVelocity().Size();
	}
}
