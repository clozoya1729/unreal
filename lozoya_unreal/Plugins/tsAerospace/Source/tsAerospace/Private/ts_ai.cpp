// Copyright Christian Lozoya. All Rights Reserved.

#include "tsMotionPlannerBPLibrary.h"
#include "tsMotionPlanner.h"
#include "tsMathBPLibrary.h"
#include "Kismet/KismetMathLibrary.h"


UtsMotionPlannerBPLibrary::UtsMotionPlannerBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

// MEMORY
bool UtsMotionPlannerBPLibrary::is_memory_full(
	TArray<FVector> memoryArray,
	int memoryLength
)
{
	if (memoryArray.Num() >= memoryLength)
	{
		return true;
	}
	return false;
}

void UtsMotionPlannerBPLibrary::get_prioritization_policy(
	FVector vector,
	float perceptionLength,
	float exponent,
	float& alpha,
	float& beta
)
{
	float x = FMath::Clamp(abs(vector.Size()) / perceptionLength, 0.0f, 1.0f);
	float u = UtsMathBPLibrary::two_point_spline_power(x, 0, 1, 0, 1, exponent);
	alpha = u;
	beta = 1 - u;
}

void UtsMotionPlannerBPLibrary::get_memory_prioritization_policy(
	FVector lambdaD,
	float perceptionLength,
	float instinct,
	float& memoryWeight,
	float& instinctWeight
)
{
	get_prioritization_policy(lambdaD, perceptionLength, instinct, memoryWeight, instinctWeight);
}

void UtsMotionPlannerBPLibrary::get_direction_prioritization_policy(
	FVector lambdaD,
	float perceptionLength,
	float precaution,
	float& attractorWeight,
	float& repulsorWeight
)
{
	get_prioritization_policy(lambdaD, perceptionLength, precaution, attractorWeight, repulsorWeight);
}

// ATTRACTION
FVector UtsMotionPlannerBPLibrary::get_attractor(
	FVector agentCoordinates,
	FRotator agentOrientation,
	FVector targetCoordinates
)
{
	return agentOrientation.operator*(-1).RotateVector(targetCoordinates - agentCoordinates);
}

// REPULSION
FVector UtsMotionPlannerBPLibrary::get_repulsor(
	TArray<FVector> lambdas
)
{
	return lambdas[3].operator*(-1);
}

// DIRECTION
FVector UtsMotionPlannerBPLibrary::get_direction(
	float attractorWeight,
	float repulsorWeight,
	FVector attractor,
	FVector repulsor
)
{
	TArray<FVector> vectors = { attractor.GetSafeNormal(), repulsor.GetSafeNormal() };
	TArray<float> weights = { attractorWeight, repulsorWeight };
	return UtsMathBPLibrary::vector_weighted_average(vectors, weights);
}

// PERCEPTION
FVector UtsMotionPlannerBPLibrary::get_average_lambda_prime(
	TArray<FVector> perceptionVectors,
	float exponent,
	float perceptionLength
)
{
	float magnitudeSum = UtsMathBPLibrary::vector_magnitude_sum(perceptionVectors);
	FVector currentWeightedLambda = FVector(0, 0, 0);
	for (int i = 0; i < perceptionVectors.Num(); i++)
	{
		currentWeightedLambda += (perceptionVectors[i] / pow(perceptionVectors[i].Size(), exponent));
	}
	return perceptionLength * currentWeightedLambda / magnitudeSum;
}

void UtsMotionPlannerBPLibrary::get_lambdas(
	TArray<FVector> perceptionVectors,
	TArray<FVector> memoryArray,
	float perceptionLength,
	float instinct,
	FVector& shortestVector,
	FVector& averageVector,
	FVector& weightedAverageVector,
	FVector& memoryVector
)
{
	if (perceptionVectors.Num() != 0)
	{
		shortestVector = UtsMathBPLibrary::shortest_vector(perceptionVectors);
		averageVector = UKismetMathLibrary::GetVectorArrayAverage(perceptionVectors);
		float x = FMath::Clamp(abs(shortestVector.Size()) / perceptionLength, 0.0f, 1.0f);
		float exponent = UtsMathBPLibrary::two_point_spline_power(x, 0, 1, 0, 1, 1);
		weightedAverageVector = get_average_lambda_prime(perceptionVectors, exponent, perceptionLength);
		memoryVector = get_memory_weighted_lambda(shortestVector, memoryArray);
	}
	else
	{
		shortestVector = FVector(0);
		averageVector = shortestVector;
		weightedAverageVector = shortestVector;
		memoryVector = shortestVector;
	}
	shortestVector = shortestVector.operator-();
	averageVector = averageVector.operator-();
	weightedAverageVector = weightedAverageVector.operator-();
	//memoryVector = memoryVector.operator-();
	// lambdaPlusM
	//float memoryWeight;
	//float instinctWeight;
	//get_memory_prioritization_policy(shortestVector, perceptionLength, instinct, memoryWeight, instinctWeight);
	//TArray<FVector> vectors = { shortestVector, weightedAverageVector }; // use get_memory_weighted_lambda instead of LambdaPrimeBar or LambdaD?
	//TArray<float> weights = { instinctWeight, memoryWeight };
	//memoryVector = UtsMathBPLibrary::vector_weighted_average(vectors, weights);
}

FVector UtsMotionPlannerBPLibrary::get_memory_weighted_lambda(
	FVector shortestVector,
	TArray<FVector> memoryArray
)
{
	int lastIndex = memoryArray.Num();
	int cumSum = UtsMathBPLibrary::int_cum_sum(lastIndex);
	float u = 0;
	FVector lambdaPlusMBar = shortestVector;
	for (int i = 0; i < lastIndex; i++)
	{
		u = (float)(i + 1) / (float)cumSum;
		lambdaPlusMBar += memoryArray[i].operator*(u);
	}
	return lambdaPlusMBar;
}