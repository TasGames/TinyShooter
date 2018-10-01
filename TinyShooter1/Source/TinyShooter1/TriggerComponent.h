// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerComponent.generated.h"

// Declare event
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerEvent, FVector, InputVector);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TINYSHOOTER1_API UTriggerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTriggerComponent();

	// Input vector
	FVector InputVector;

	// How fast it retriggers
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	bool TriggerOnZeroVector = true;

	// Event decleration
	UPROPERTY(BlueprintAssignable, Category = "TriggerState")
	FTriggerEvent OnTriggered;

	bool bCanTrigger = true;

	FTimerHandle TimerHandle_TriggerTimerExpired;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);
	
	void TriggerTimerExpired();
	
};
