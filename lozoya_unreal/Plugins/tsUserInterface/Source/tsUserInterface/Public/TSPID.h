// Copyright Christian Lozoya. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TSPID.generated.h"

class TSPID
{
public:
	float target;
	float gainProportional;
	float gainIntegral;
	float gainDerivative;
	float errorCurrent;
	float errorPrevious;
	float errorIntegral;
	float errorDerivative;
	TSPID() {}
	TSPID(float target,
		float gainProportional,
		float gainIntegral,
		float gainDerivative)
	{
		this->target = target;
		this->gainProportional = gainProportional;
		this->gainIntegral = gainIntegral;
		this->gainDerivative = gainDerivative;
	}

	float run(float input, float timestep)
	{
		errorCurrent = target - input;
		errorIntegral += errorCurrent * timestep;
		errorDerivative = (errorCurrent - errorPrevious) / timestep;
		errorPrevious = errorCurrent;
		return gainProportional * errorCurrent + gainIntegral * errorIntegral + gainDerivative * errorDerivative;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TSCOREPLUGINS_API UtsPidComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UtsPidComponent();
	UtsPidComponent(float target, float gainProportional, float gainIntegral, float gainDerivative);
	float errorCurrent;
	float errorPrevious;
	TSPID pidController;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual float run(float input, float timestep);	
};
