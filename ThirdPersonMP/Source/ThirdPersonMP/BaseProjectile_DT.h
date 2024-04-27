// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "BaseProjectile_DT.generated.h"

UCLASS()
class THIRDPERSONMP_API UBaseProjectile_DT : public UDamageType
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageMessage")
	FString DamageMessage;
	
public:
	UFUNCTION(BlueprintCallable, Category = "DamageMessage")
	void PrintDamageMessage() const;
};
