// Thomas Simon

#include "TriggerableWeaponComponent.h"
#include "TriggerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TinyShooter1Projectile.h"


// Sets default values for this component's properties
UTriggerableWeaponComponent::UTriggerableWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UTriggerableWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	UTriggerComponent * pTrigger = GetOwner()->FindComponentByClass<UTriggerComponent>();
	if (pTrigger)
		pTrigger->OnTriggered.AddDynamic(this, &UTriggerableWeaponComponent::Triggered);
	
}

void UTriggerableWeaponComponent::Triggered(FVector InputVector)
{
	UWorld* const World = GetWorld();
	if (World != NULL && ProjectileType != nullptr)
	{
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		params.bNoFail = true;
		params.Owner = GetOwner();
		params.Instigator = Cast<APawn>(GetOwner());

		ATinyShooter1Projectile * SpawnedActor = World->SpawnActor<ATinyShooter1Projectile>(ProjectileType, GetComponentLocation(), GetComponentRotation(), params);
		if (SpawnedActor != nullptr)
		{
			if (FireSound != nullptr)
				UGameplayStatics::PlaySoundAtLocation(GetOwner(), FireSound, GetComponentLocation());
		}
	}
}


// Called every frame
void UTriggerableWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

