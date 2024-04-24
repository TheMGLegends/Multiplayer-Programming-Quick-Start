// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonMPGameMode.h"
#include "ThirdPersonMPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonMPGameMode::AThirdPersonMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AThirdPersonMPGameMode::Respawn_Implementation(AController* Controller, ACharacter* Character,
	const FTransform SpawnTransform)
{
	if (AActor* actor = GetWorld()->SpawnActor(Character->GetClass(), &SpawnTransform))
	{
		Character->Destroy();
		Controller->UnPossess();
		Controller->Possess(Cast<APawn>(actor));
	}
}
