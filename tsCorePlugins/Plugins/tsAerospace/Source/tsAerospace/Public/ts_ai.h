// Copyright Christian Lozoya. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "tsMotionPlannerBPLibrary.generated.h"

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
class TSMOTIONPLANNER_API UtsMotionPlannerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()



	static void get_prioritization_policy(
		FVector vector,
		float perceptionLength,
		float exponent,
		float& alpha,
		float& beta
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Memory Prioritization Policy", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Memory")
	static void get_memory_prioritization_policy(
		FVector lambdaD,
		float perceptionLength,
		float instinct,
		float& memoryWeight,
		float& instinctWeight
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Direction Prioritization Policy", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Memory")
	static void get_direction_prioritization_policy(
		FVector repulsor,
		float perceptionLength,
		float precaution,
		float& attractorWeight,
		float& repulsorWeight
	);

	// ATTRACTION
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Attractor", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Attraction")
	static FVector get_attractor(
		FVector agentCoordinates,
		FRotator agentOrientation,
		FVector targetCoordinates
	);

	// REPULSION
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Repulsor", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Repulsion")
	static FVector get_repulsor(
		TArray<FVector> lambdas
	);

	// DECISION
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Direction", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Decision")
	static FVector get_direction(
		float attractorWeight,
		float repulsorWeight,
		FVector attractor,
		FVector repulsor
	);

	// PERCEPTION
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Average Lambda Prime", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Perception")
	static FVector get_average_lambda_prime(
		TArray<FVector> perceptionVectors,
		float exponent,
		float perceptionLength
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Lambdas", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Perception")
	static void get_lambdas(
		TArray<FVector> perceptionVectors,
		TArray<FVector> memoryArray,
		float perceptionLength,
		float instinct,
		FVector& shortestVector,
		FVector& averageVector,
		FVector& weightedAverageVector,
		FVector& memoryVector
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Memory-Weighted Lambda", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Perception")
	static FVector get_memory_weighted_lambda(
		FVector shortestVector,
		TArray<FVector> memoryArray
	);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Memory Full", Keywords = "tsMotionPlanner"), Category = "tsMotionPlanner|Forcefield|Perception")
		static bool is_memory_full(
			TArray<FVector> memoryArray,
			int memoryLength
		);
};
