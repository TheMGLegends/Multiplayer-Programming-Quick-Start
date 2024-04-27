// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPersonMPProjectile.h"

#include "ArcingProjectile_DT.h"
#include "BouncingProjectile_DT.h"
#include "HomingProjectile_DT.h"
#include "StraightProjectile_DT.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AThirdPersonMPProjectile::AThirdPersonMPProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// INFO: Makes the actor replicate on the server
	bReplicates = true;

	// INFO: Definition for the SphereComponent that will serve as the root component for the projectile and its collision
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	SphereComponent->InitSphereRadius(37.5f);
	SphereComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	RootComponent = SphereComponent;

	// INFO: Registering the Projectile Impact function on a hit event
	if (GetLocalRole() == ROLE_Authority)
	{
		SphereComponent->OnComponentHit.AddDynamic(this, &AThirdPersonMPProjectile::OnProjectileImpact);
	}

	// INFO: Definition for the Mesh that will serve as your visual representation
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultMesh(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	// INFO: Set the Static Mesh and its position/scale if you successfully found a mesh asset to use
	if (DefaultMesh.Succeeded())
	{
		StaticMesh->SetStaticMesh(DefaultMesh.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -37.5f));
		StaticMesh->SetRelativeScale3D(FVector(0.75f, 0.75f, 0.75f));
	}

	// INFO: Set the Particle System if you successfully found a particle system asset to use
	static ConstructorHelpers::FObjectFinder<UParticleSystem> DefaultExplosionEffect(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (DefaultExplosionEffect.Succeeded())
	{
		ExplosionEffect = DefaultExplosionEffect.Object;
	}

	// INFO: Definition for the Projectile Movement Component
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->SetUpdatedComponent(SphereComponent);
	ProjectileMovementComponent->bRotationFollowsVelocity = true;

	// INFO: Initialize Variables
    Damage = 5.0f;
    ExplosionRadius = 500.0f;
    bDebugMode = true;
    HomingRadius = 1000.0f;
	BounceCount = 5;
}

// Called when the game starts or when spawned
void AThirdPersonMPProjectile::BeginPlay()
{
	Super::BeginPlay();

	// INFO: Only the server should randomize the projectile type, clients will receive the replicated value
	if (GetLocalRole() == ROLE_Authority)
	{
		// INFO: Randomize the Projectiles' Type
		RandomizeProjectileType();
	}
	
	// INFO: Different Projectile behaviour based on the Projectile Type
    switch (ProjectileType)
    {
    case EProjectileType::Straight:
    	SetupStraightProjectile();
		break;
    case EProjectileType::Homing:
    	SetupHomingProjectile();
    	break;
	case EProjectileType::Bouncing:
		SetupBouncingProjectile();
		break;
    case EProjectileType::Arcing:
    	SetupArcingProjectile();
    	break;
    default:
    	break;
    }
}

void AThirdPersonMPProjectile::Destroyed()
{
	FVector spawnLocation = GetActorLocation();

	// INFO: Spawn Particle Effect at the location of the projectile
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, spawnLocation, FRotator::ZeroRotator, true, EPSCPoolMethod::AutoRelease);
}

void AThirdPersonMPProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// INFO: Skip Sphere Trace if the projectile is a bouncing projectile and still has bounces to go
	if (ProjectileType == EProjectileType::Bouncing && BounceCount > 0)
	{
		BounceCount--;
		return;
	}
	
	// INFO: Create Sphere Trace to detect any actors within the explosion radius
	TArray<FHitResult> hitResults;
	FVector startLocation = GetActorLocation();
	FVector endLocation = startLocation;

	// INFO: We only want to detect pawns
	FCollisionObjectQueryParams objectQueryParams  = FCollisionObjectQueryParams();
	objectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	// INFO: Create a sphere collision shape with a radius of ExplosionRadius
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(ExplosionRadius);

	// INFO: Initialize a Set to store already hit actors
	TSet<AActor*> hitActors;

	if (GetWorld()->SweepMultiByObjectType(hitResults, startLocation, endLocation, FQuat::Identity,objectQueryParams, collisionShape))
	{
		
		for (FHitResult hitResult : hitResults)
		{
			AActor* hitActor = hitResult.GetActor();

			// INFO: Check if actor already hit (Prevents multiple hits on the same actor)
			if (!hitActors.Contains(hitActor))
			{
				// INFO: Apply damage to any pawns within the explosion radius
				UGameplayStatics::ApplyPointDamage(hitResult.GetActor(), Damage, NormalImpulse, hitResult, GetInstigator()->Controller, this, DamageType);

				// INFO: Add actor to hit actors set
				hitActors.Add(hitActor);
			}
			
		}
	}

	// INFO: Debug the Sphere Sweep if Debug Mode is enabled
	if (bDebugMode)
	{
		FVector sphereCentre = ((endLocation - startLocation) / 2) + startLocation;
		DrawDebugSphere(GetWorld(), sphereCentre, collisionShape.GetSphereRadius(), 12, FColor::Red, false, 2.0f);
	}

	Destroy();
}

void AThirdPersonMPProjectile::RandomizeProjectileType()
{
	// INFO: Randomize the Projectile Type
	ProjectileType = static_cast<EProjectileType>(FMath::RandRange(0, EProjectileType::Max - 1));
}

// Called every frame
void AThirdPersonMPProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AThirdPersonMPProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	// INFO: The super needs to be called, otherwise the base class properties won't be replicated
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// INFO: Replicate projectile type
	DOREPLIFETIME(AThirdPersonMPProjectile, ProjectileType);
}

void AThirdPersonMPProjectile::SetupStraightProjectile()
{
	DamageType = UStraightProjectile_DT::StaticClass();
	
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->Velocity = GetActorForwardVector() * ProjectileMovementComponent->InitialSpeed;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
}

void AThirdPersonMPProjectile::SetupHomingProjectile()
{
	DamageType = UHomingProjectile_DT::StaticClass();
	
	// INFO: Create Sphere Trace to detect any actors within the homing radius
	TArray<FHitResult> hitResults;
	FVector startLocation = GetActorLocation();
	FVector endLocation = startLocation;

	// INFO: We only want to detect pawns
	FCollisionObjectQueryParams objectQueryParams  = FCollisionObjectQueryParams();
	objectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	// INFO: Create a sphere collision shape with a radius of ExplosionRadius
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(HomingRadius);

	// INFO: Has a valid target been found
	bool bTargetFound = false;
    	
	if (GetWorld()->SweepMultiByObjectType(hitResults, startLocation, endLocation, FQuat::Identity,objectQueryParams, collisionShape))
	{
		for (FHitResult hitResult : hitResults)
		{
			if (hitResult.GetActor() !=	this->GetOwner())
			{
				ProjectileMovementComponent->InitialSpeed = 1500.0f;
				ProjectileMovementComponent->MaxSpeed = 1500.0f;
				ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
				ProjectileMovementComponent->bIsHomingProjectile = true;
				ProjectileMovementComponent->HomingAccelerationMagnitude = 1500.0f;
				ProjectileMovementComponent->HomingTargetComponent = hitResult.GetActor()->GetRootComponent();
				bTargetFound = true;
				break;
			}
		}
	}

	// INFO: Performs straight projectile behaviour if no target is found
	if (!bTargetFound)
	{
		SetupStraightProjectile();
	}

	// INFO: Debug the Sphere Sweep if Debug Mode is enabled
	if (bDebugMode)
	{
		FVector sphereCentre = ((endLocation - startLocation) / 2) + startLocation;
		DrawDebugSphere(GetWorld(), sphereCentre, collisionShape.GetSphereRadius(), 12, FColor::Green, false, 2.0f);
	}   
}

void AThirdPersonMPProjectile::SetupBouncingProjectile()
{
	DamageType = UBouncingProjectile_DT::StaticClass();
	
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->Velocity = GetActorForwardVector() * ProjectileMovementComponent->InitialSpeed;
	ProjectileMovementComponent->ProjectileGravityScale = 1.0f;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 1.0f;
}

void AThirdPersonMPProjectile::SetupArcingProjectile()
{
	DamageType = UArcingProjectile_DT::StaticClass();
	
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->Velocity = ((GetActorUpVector() - GetActorForwardVector()) / 2 + GetActorForwardVector()) * ProjectileMovementComponent->InitialSpeed;
	ProjectileMovementComponent->ProjectileGravityScale = 1.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = false;
}

