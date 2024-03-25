// Copyright Christian Lozoya. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

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
class TSMATH_API UtsMathBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static FVector unit_direction(FVector point1, FVector point2);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Clamp Vector", Keywords = "tsMath vector"), Category = "tsMath|Vector")
	static FVector clamp_vector(FVector vector, FVector min, FVector max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Shortest Vector", Keywords = "tsMath vector"), Category = "tsMath|Vector")
	static FVector shortest_vector(TArray<FVector> vectorArray);

	// GEOMETRY
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Random Point in Cube", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static FVector random_point_in_cube(FVector origin, float length);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Random Point in Sphere", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static FVector random_point_in_sphere(FVector origin, float radius = 100, bool surfaceOnly = false);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Random Sphere", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static TArray<FVector> random_sphere(
		FVector origin,
		float radius = 100,
		int numberOfPoints = 1000,
		bool surfaceOnly = false
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Uniform Square", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static TArray<FVector> uniform_square(
		FVector origin,
		float length = 100,
		int stepSize = 10
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Uniform Cube", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static TArray<FVector> uniform_cube(
		FVector origin,
		float length = 100,
		int stepSize = 10
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Uniform Sphere", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static TArray<FVector> uniform_sphere(
		FVector origin,
		float radius = 100,
		int stepSize = 10,
		bool surfaceOnly = false
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Odd Sphere", Keywords = "tsMath geometry"), Category = "tsMath|Geometry")
	static TArray<FVector> odd_sphere(
		FVector origin,
		float radius = 100,
		int stepSize = 10,
		bool surfaceOnly = false
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Point in Sphere", Keywords = "tsMath random normal"), Category = "tsMath|Geometry")
	static bool is_point_in_sphere(FVector point, FVector origin, float radius);


	// coordinates
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Cartesian to Spherical", Keywords = "tsMath coordinates"), Category = "tsMath|Geometry|Coordinates")
	static FVector cartesian_to_spherical(FVector coordinate);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Spherical to Cartesian", Keywords = "tsMath coordinates"), Category = "tsMath|Geometry|Coordinates")
	static FVector spherical_to_cartesian(FVector coordinate);


	// PROBABILITY AND STATISTICS
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Random Normal", Keywords = "tsMath random normal"), Category = "tsMath|Probability|Normal")
	static float random_normal(float mean = 0, float deviation = 1);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Probability Normal", Keywords = "tsMath probability normal"), Category = "tsMath|Probability|Normal")
	static float get_probability_normal(float x, float mean, float deviation);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Cumulative Probability Normal", Keywords = "tsMath probability normal"), Category = "tsMath|Probability|Normal")
	static float get_cumulative_distribution(float x, float mean, float deviation);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Inverse Cumulative Probability Normal", Keywords = "tsMath probability normal"), Category = "tsMath|Probability|Normal")
	static float get_inverse_cumulative_distribution(float x, float mean, float deviation);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Inverse Probability Normal", Keywords = "tsMath inverse probability normal"), Category = "tsMath|Probability|Normal")
	static void get_inverse_probability_normal(float& lower, float& upper, float probability, float mean = 0, float deviation = 1);


	// SUM AND AVERAGE
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Int Cum Sum", Keywords = "tsMath sum"), Category = "tsMath|Sum and Average")
	static int int_cum_sum(int n);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Int Sum", Keywords = "tsMath sum"), Category = "tsMath|Sum and Average")
	static int int_sum(TArray<int> intArray);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Float Sum", Keywords = "tsMath sum"), Category = "tsMath|Sum and Average")
	static float float_sum(TArray<float> floatArray);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Float Averageg", Keywords = "tsMath average"), Category = "tsMath|Sum and Average")
	static float float_average(TArray<float> floatArray);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Float Weighted Average", Keywords = "tsMath weighted average"), Category = "tsMath|Sum and Average")
	static float float_weighted_average(TArray<float> floatArray, TArray<float> weights);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vector Weighted Average", Keywords = "tsMath weighted average"), Category = "tsMath|Sum and Average")
	static FVector vector_weighted_average(TArray<FVector> vectorArray, TArray<float> weights);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vector Sum", Keywords = "tsMath vector sum"), Category = "tsMath|Sum and Average")
	static FVector vector_sum(TArray<FVector> vectorArray);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vector Magnitude Sum", Keywords = "tsMath vector magnitude sum"), Category = "tsMath|Sum and Average")
	static float vector_magnitude_sum(TArray<FVector> vectorArray);


	// SIGNAL
	// generator
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Signal Sinusoid", Keywords = "tsMath signal"), Category = "tsMath|Signal|Generator")
	static float signal_sinusoid(
		float x,
		float amplitude = 1,
		float frequency = 1,
		float phase = 0,
		float offset = 0
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Signal Square", Keywords = "tsMath signal"), Category = "tsMath|Signal|Generator")
	static float signal_square(
		float x,
		float amplitude = 1,
		float frequency = 1,
		float phase = 0,
		float offset = 0
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Signal Triangle", Keywords = "tsMath signal"), Category = "tsMath|Signal|Generator")
	static float signal_triangle(
		float x,
		float amplitude = 1,
		float frequency = 1,
		float phase = 0,
		float offset = 0
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Signal Sawtooth", Keywords = "tsMath signal"), Category = "tsMath|Signal|Generator")
	static float signal_sawtooth(
		float x,
		float amplitude = 1,
		float frequency = 1,
		float phase = 0,
		float offset = 0
	);


	// activation
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Activation Cosine", Keywords = "tsMath activation"), Category = "tsMath|Signal|Activation")
	static float activation_cos(float x, float scale);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Activation Power", Keywords = "tsMath activation"), Category = "tsMath|Signal|Activation")
	static float activation_power(float x, float scale, float power);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Activation Sigmoid", Keywords = "tsMath activation"), Category = "tsMath|Signal|Activation")
	static float activation_sigmoid(float x, float scale, float shape);


	// INTERPOLATION
	// two-point splines
	static float tps_psi(float x, float x0, float x1);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Two-Point Spline Power", Keywords = "tsMath spline"), Category = "tsMath|Interpolation")
	static float two_point_spline_power(
		float x,
		float x0 = 0,
		float x1 = 1,
		float y0 = 0,
		float y1 = 1,
		float rho = 1
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Two-Point Spline Sigmoid", Keywords = "tsMath spline"), Category = "tsMath|Interpolation")
	static float two_point_spline_sigmoid(
		float x,
		float x0 = 0,
		float x1 = 1,
		float y0 = 0,
		float y1 = 1,
		float rho = 1
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Two-Point Spline Sinusoid", Keywords = "tsMath spline"), Category = "tsMath|Interpolation")
	static float two_point_spline_sinusoid(
		float x,
		float x0 = 0,
		float x1 = 1,
		float y0 = 0,
		float y1 = 1,
		float rho = 1
	);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Two-Point Spline Smooth-Ramp", Keywords = "tsMath spline"), Category = "tsMath|Interpolation")
		static float two_point_spline_smoothramp(
			float x,
			float x0 = 0,
			float x1 = 1,
			float y0 = 0,
			float y1 = 1,
			float rho = 1,
			float power = 1
		);


	// UTILITY
	UFUNCTION(BlueprintPure, meta = (CompactNodeTitle = "*(-1)", DisplayName = "Negate Float", Keywords = "tsMath spline"), Category = "tsMath|Utility")
	static float negate_float(float x);


	UFUNCTION(BlueprintPure, meta = (CompactNodeTitle = "*(-1)", DisplayName = "Negate Int", Keywords = "tsMath spline"), Category = "tsMath|Utility")
	static int negate_int(int x);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "+-", Keywords = "tsMath +-"), Category = "tsMath|Utility")
	static void plus_minus(float num, float range, float& a, float& b);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Jitter Vector", Keywords = "tsMath +-"), Category = "tsMath|Utility")
	static FVector jitter_vector(FVector vector, FVector range);
};

