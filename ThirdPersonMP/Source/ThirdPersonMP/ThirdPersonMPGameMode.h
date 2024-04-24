// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ThirdPersonMPGameMode.generated.h"

UCLASS(minimalapi)
class AThirdPersonMPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AThirdPersonMPGameMode();

	UFUNCTION(Server, Reliable)
	void Respawn(AController* Controller, ACharacter* Character, const FTransform SpawnTransform);
};



