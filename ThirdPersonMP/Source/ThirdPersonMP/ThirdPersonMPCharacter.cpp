// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonMPCharacter.h"

#include "BaseProjectile_DT.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "PlayerHUD.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "ThirdPersonMPProjectile.h"
#include "ThirdPersonMPGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Engine/DamageEvents.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AThirdPersonMPCharacter

AThirdPersonMPCharacter::AThirdPersonMPCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// INFO: Initialize players' health
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	// INFO: Initialize projectile class
	ProjectileClass = AThirdPersonMPProjectile::StaticClass();

	// INFO: Initialize fire rate
	FireRate = 0.25f;
	bIsFiringWeapon = false;
}

void AThirdPersonMPCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	// INFO: The super needs to be called, otherwise the base class properties won't be replicated
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// INFO: Replicate current health
	DOREPLIFETIME(AThirdPersonMPCharacter, CurrentHealth);

	// INFO: Replicate starting transform
	DOREPLIFETIME(AThirdPersonMPCharacter, StartingTransform);
}

void AThirdPersonMPCharacter::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		// INFO: Ensures CurrentHealth never goes below 0 or above MaxHealth
		CurrentHealth = FMath::Clamp(healthValue, 0.0f, MaxHealth);
		OnHealthUpdate();
	}
}

float AThirdPersonMPCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	float damageApplied = CurrentHealth - DamageAmount;
	SetCurrentHealth(damageApplied);

	// INFO: Debug only on server side
	if (GetLocalRole() == ROLE_Authority)
	{
		DamageEvent.DamageTypeClass->GetDefaultObject<UBaseProjectile_DT>()->PrintDamageMessage();
	}
	
	return damageApplied;
}

void AThirdPersonMPCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// INFO: Initialize starting transform
	StartingTransform = GetActorTransform();

	// INFO: Create and assign HUD asset only on local clients
	if (IsLocallyControlled())
	{
		if (HUDAsset)
		{
			HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), HUDAsset);

			if (HUD)
			{
				HUD->AddToViewport();
				HUD->SetVisibility(ESlateVisibility::Visible);

				// INFO: Assign the owning character to the HUD
				Cast<UPlayerHUD>(HUD)->Character = this;
			}
		}
	}
}

void AThirdPersonMPCharacter::RespawnDelay()
{
	if (AThirdPersonMPGameMode* GameMode = GetWorld()->GetAuthGameMode<AThirdPersonMPGameMode>())
	{
		GameMode->Respawn(GetController(), this, StartingTransform);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AThirdPersonMPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AThirdPersonMPCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AThirdPersonMPCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}

	// INFO: Handle firing projectiles
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AThirdPersonMPCharacter::StartFire);
}

void AThirdPersonMPCharacter::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}

void AThirdPersonMPCharacter::OnHealthUpdate()
{
	// INFO: Client Specific Functionality
	if (IsLocallyControlled())
	{
		FString healthMessage = FString::Printf(TEXT("You now have %f health remaining"), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, healthMessage);

		if (CurrentHealth <= 0)
		{
			FString deathMessage = FString::Printf(TEXT("You have died!"));
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, deathMessage);
			HUD->RemoveFromParent();
		}
	}

	// INFO: Server Specific Functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		FString healthMessage = FString::Printf(TEXT("%s now has %f health remaining"), *GetFName().ToString(), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, healthMessage);

		if (CurrentHealth <= 0)
		{
			// INFO: Respawn the player after some delay to allow clients to remove their HUDs
			FTimerHandle RespawnTimer;
			GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &AThirdPersonMPCharacter::RespawnDelay, 0.1f, false);
		}
	}

	// INFO: All Machines Functionality
}

void AThirdPersonMPCharacter::StartFire()
{
	if (!bIsFiringWeapon)
	{
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		World->GetTimerManager().SetTimer(FiringTimer, this, &AThirdPersonMPCharacter::StopFire, FireRate, false);
		HandleFire();
	}
}

void AThirdPersonMPCharacter::StopFire()
{
	bIsFiringWeapon = false;
}

void AThirdPersonMPCharacter::HandleFire_Implementation()
{
	FVector spawnLocation = GetActorLocation() + (GetActorRotation().Vector() * 100.0f) + (GetActorUpVector() * 50.0f);
	FRotator spawnRotation = GetActorRotation();

	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;

	AThirdPersonMPProjectile* spawnedProjectile = GetWorld()->SpawnActor<AThirdPersonMPProjectile>(spawnLocation, spawnRotation, spawnParameters);
}

void AThirdPersonMPCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AThirdPersonMPCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

