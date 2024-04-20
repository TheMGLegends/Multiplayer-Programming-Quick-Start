// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPersonMPProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
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
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	// INFO: Initialize Variables
	DamageType = UDamageType::StaticClass();
	Damage = 10.0f;
	ExplosionRadius = 500.0f;
	bDebugMode = true;
}

// Called when the game starts or when spawned
void AThirdPersonMPProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

void AThirdPersonMPProjectile::Destroyed()
{
	FVector spawnLocation = GetActorLocation();

	// INFO: Spawn Particle Effect at the location of the projectile
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, spawnLocation, FRotator::ZeroRotator, true, EPSCPoolMethod::AutoRelease);
}

void AThirdPersonMPProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	/*
	if (OtherActor)
	{
		UGameplayStatics::ApplyPointDamage(OtherActor, Damage, NormalImpulse, Hit, GetInstigator()->Controller, this, DamageType);
	}
	*/

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

// Called every frame
void AThirdPersonMPProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

