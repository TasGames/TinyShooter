// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TriggerableWeaponComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TINYSHOOTER1_API UTriggerableWeaponComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTriggerableWeaponComponent();

	// Which projectile does it fire
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class ATinyShooter1Projectile> ProjectileType;

	// Sound plays when it fires
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// this has to be a ufunction so that it can be bound to the OnTriggered multicast delegate on the trigger component!
	UFUNCTION()
	void Triggered(FVector InputVector);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
