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


void UTriggerableWeaponComponent::Triggered(FVector InputVector)
{

}

// Called when the game starts
void UTriggerableWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTriggerableWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

