// Thomas Simon

#include "TriggerComponent.h"

// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bCanTrigger)
	{
		// Kick off the trigger event if we are triggering based purely on inputvector being non zero
		if (TriggerOnZeroVector)
		{
			// If we have some value in the input vector we can fire
			if (!InputVector.IsNearlyZero())
				OnTriggered.Broadcast(InputVector);
		}
		else
			OnTriggered.Broadcast(InputVector);

		// Disable this trigger tick code until timer says we can fire again
		bCanTrigger = false;

		// Kick off a timer based on timer handle and firing rate
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_TriggerTimerExpired, this, &UTriggerComponent::TriggerTimerExpired, FireRate);
	}
}

void UTriggerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);


	OnTriggered.Clear();
}

void UTriggerComponent::TriggerTimerExpired()
{
	bCanTrigger = true;
}

