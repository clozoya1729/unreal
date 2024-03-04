// Copyright Christian Lozoya. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "tsAerospaceBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UtsAerospaceBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		// U N I V E R S A L
		// G R A V I T A T I O N

		static float compute_gravitational_force_magnitude(
			float gravitationalConstant,
			float mass1,
			float mass2,
			FVector position1,
			FVector position2
		);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Gravitational Force", Keywords = "gravitational force"), Category = "tsAerospace|UniversalGravitation")
		static FVector compute_gravitational_force(
			float gravitationalConstant,
			float mass1,
			float mass2,
			FVector position1,
			FVector position2
		);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Average Gravitational Force", Keywords = "gravitational force"), Category = "tsAerospace|UniversalGravitation")
		static FVector average_force(float averageMass, FVector averageCoordinate);

	// O R B I T
	static float kepler_n(float semimajorAxis, float gravitationalParameter);

	static float kepler_p(float semimajorAxis, float eccentricity);

	static float kepler_r(float semimajorAxis, float eccentricity, float trueAnomaly);

	static float kepler_equation(float eccentricity, float eccentricAnomaly, float meanAnomaly);

	static float kepler_equation_derivative(float eccentricity, float eccentricAnomaly);

	static float solve_kepler_equation(
		float semimajorAxis,
		float eccentricity,
		float gravitationlParameter,
		float time,
		float tolerance = 0.01,
		int maxIterations = 10
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Kepler Orbit", Keywords = "kepler orbit"), Category = "tsAerospace|Orbit|Classical (Kepler)")
		static FVector kepler_orbit(
			float semimajorAxis,
			float eccentricity,
			float inclination,
			float periapsis,
			float ascension,
			FVector focus,
			float trueAnomaly
		);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Compute True Anomaly", Keywords = "kepler true anomaly"), Category = "tsAerospace|Orbit|Classical (Kepler)")
		static float compute_true_anomaly(
			float semimajorAxis,
			float eccentricity,
			float gravitationalParameter,
			float time,
			float tolerance = 0.01,
			int maxIterations = 10
		);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Generate Orbit Points", Keywords = "kepler orbit points"), Category = "tsAerospace|Orbit|Classical (Kepler)")
		static TArray<FVector> generate_orbit_points(
			float semimajorAxis,
			float eccentricity,
			float inclination,
			float periapsis,
			float ascension,
			FVector focus,
			int numberOfPoints = 100
		);
};
