// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThirdPersonMPProjectile.generated.h"

UENUM(BlueprintType)
enum EProjectileType
{
	Straight UMETA(DisplayName = "Straight"),
	Homing UMETA(DisplayName = "Homing"),
	Bouncing UMETA(DisplayName = "Bouncing"),
	Arcing UMETA(DisplayName = "Arcing"),

	Max UMETA(Hidden)
};

UCLASS()
class THIRDPERSONMP_API AThirdPersonMPProjectile : public AActor
{
	GENERATED_BODY()
	
public:
	// INFO: Sphere Component used to test collision
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* SphereComponent;

	// INFO: Static Mesh used to provide a visual representation of the object
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* StaticMesh;

	// INFO: Movement Component for handling projectile movement
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* ProjectileMovementComponent;

	// INFO: Particle used when the projectile impacts against another object and explodes
	UPROPERTY(EditAnywhere, Category = "Effects")
	class UParticleSystem* ExplosionEffect;

	// INFO: The damage type and damage that will be done by this projectile
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	TSubclassOf<class UDamageType> DamageType;

	// INFO: The damage dealt by this projectile
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	float Damage;

	// INFO: Radius of the explosion
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	float ExplosionRadius;

	// INFO: Debug Mode Flag
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
	bool bDebugMode;

	// INFO: Projectile Type
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
	TEnumAsByte<EProjectileType> ProjectileType;

public:	
	// Sets default values for this actor's properties
	AThirdPersonMPProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Destroyed() override;

	UFUNCTION(Category = "Projectile")
	void OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void RandomizeProjectileType();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
