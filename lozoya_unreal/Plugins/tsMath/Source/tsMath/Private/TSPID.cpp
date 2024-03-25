// Copyright Christian Lozoya. All Rights Reserved.

#include "tsPidComponent.h"

// Sets default values for this component's properties
UtsPidComponent::UtsPidComponent(float target, float gainProportional, float gainIntegral, float gainDerivative)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
	this->pidController = TSPID(
		target,
		gainProportional,
		gainIntegral,
		gainDerivative
	);
}


// Called when the game starts
void UtsPidComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UtsPidComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


float UtsPidComponent::run(float input, float timestep)
{
	return pidController.run(input, timestep);
}

UtsPidComponent::UtsPidComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}
