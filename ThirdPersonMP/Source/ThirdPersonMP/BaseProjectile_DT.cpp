// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile_DT.h"

void UBaseProjectile_DT::PrintDamageMessage() const
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, DamageMessage);
}
