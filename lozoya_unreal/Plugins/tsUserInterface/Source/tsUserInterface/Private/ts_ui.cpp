// Copyright Christian Lozoya. All Rights Reserved.

#include <cmath>
#include "tsUserInterfaceBPLibrary.h"
#include "tsUserInterface.h"


UtsUserInterfaceBPLibrary::UtsUserInterfaceBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UtsUserInterfaceBPLibrary::tsUserInterfaceSampleFunction(float Param)
{
	return -1;
}

FVector UtsMathBPLibrary::shortest_vector(TArray<FVector> vectorArray)
{
	FVector shortestVector = FVector(MAX_flt, MAX_flt, MAX_flt);
	for (int i = 0; i < vectorArray.Num(); i++)
	{
		if (vectorArray[i].Size() < shortestVector.Size())
		{
			shortestVector = vectorArray[i];
		}
	}
	return shortestVector;
}


FVector UtsMathBPLibrary::clamp_vector(FVector vector, FVector min, FVector max)
{
	return ClampVector(vector, min, max);
}

FVector UtsMathBPLibrary::unit_direction(
	FVector point1,
	FVector point2
)
{
	return (point2 - point1).GetSafeNormal();
}


// ACTIVATIONS
float UtsMathBPLibrary::activation_cos(float x, float scale)
{
	return (1 / 2) * (cos((PI * x / scale) + PI) + 1);
}


float UtsMathBPLibrary::activation_power(float x, float scale, float power)
{
	return pow(x / scale, power);
}


float UtsMathBPLibrary::activation_sigmoid(float x, float scale, float shape)
{
	float m = (x / scale) - (1 / 2);
	float u = exp(shape * m);
	return u / (u + 1);
}


// COORDINATES
FVector UtsMathBPLibrary::cartesian_to_spherical(FVector coordinate)
{
	float x = coordinate.X;
	float y = coordinate.Y;
	float z = coordinate.Z;
	float r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	//float theta = atan2f(sqrt(pow(x, 2) + pow(y, 2)), z);
	float theta = acos(z / r);
	float phi = atan2f(y, x);
	return FVector(r, theta, phi);
}


FVector UtsMathBPLibrary::spherical_to_cartesian(FVector coordinate)
{
	float r = coordinate.X;
	float theta = coordinate.Y;
	float phi = coordinate.Z;
	float x = r * cos(theta) * sin(phi);
	float y = r * sin(theta) * sin(phi);
	float z = r * cos(phi);
	return FVector(x, y, z);
}


// GEOMETRY
FVector UtsMathBPLibrary::random_point_in_cube(FVector origin, float length)
{
	return UKismetMathLibrary::RandomPointInBoundingBox(origin, FVector(length / 2));
}


FVector UtsMathBPLibrary::random_point_in_sphere(FVector origin, float radius, bool surfaceOnly)
{
	// cube rejection method
	/*FVector point = random_point_in_cube(origin, radius);
	while (!is_point_in_sphere(point, origin, radius))
	{
		point = random_point_in_cube(origin, radius);
	}*/
	// rotation method
	float multiplier = (surfaceOnly) ? radius : FMath::RandRange(0.0f, radius);
	return FMath::VRand().operator*(multiplier);
}


TArray<FVector> UtsMathBPLibrary::random_sphere(
	FVector origin,
	float radius,
	int numberOfPoints,
	bool surfaceOnly
)
{
	TArray<FVector> points;
	for (int i = 0; i < numberOfPoints; i++)
	{
		points.Add(random_point_in_sphere(origin, radius, surfaceOnly));
	}
	return points;
}


TArray<FVector> UtsMathBPLibrary::odd_sphere(
	FVector origin,
	float radius,
	int stepSize,
	bool surfaceOnly
)
{
	TArray<FVector> points;
	FVector point;
	float x, z;
	float armLength;
	float angle;
	int armSteps;
	int numberOfSteps = 2 * radius / stepSize;
	int rotations = 360 / stepSize;
	for (int i = 0; i <= numberOfSteps; i++)
	{
		z = radius * ((2 * (float)i / (float)numberOfSteps) - 1);
		if (!surfaceOnly) {
			points.Add(origin + FVector(0, 0, z));
		}
		armLength = sqrt(abs(pow(z, 2) - pow(radius, 2)));
		for (int j = 0; j < rotations; j++)
		{
			angle = (float)j * 360.0f / (float)rotations;
			armSteps = (surfaceOnly) ? 1 : (armLength / stepSize);
			for (int k = 0; k < armSteps; k++)
			{
				x = armLength * ((float)(k + 1) / (float)armSteps);
				point = origin + FVector(x, 0, z);
				points.Add(point.RotateAngleAxis(angle, FVector(0, 0, 1)));
			}
		}
	}
	return points;
}


TArray<FVector> UtsMathBPLibrary::uniform_square(
	FVector origin,
	float length,
	int stepSize
)
{
	TArray<FVector> points;
	FVector adjuster = origin - FVector(length / 2.0f, length / 2.0f, 0);
	for (int i = 0; i <= length; i += stepSize)
	{
		for (int j = 0; j <= length; j += stepSize)
		{
			points.Add(FVector(i, j, 0) + adjuster);
		}
	}
	return points;
}


TArray<FVector> UtsMathBPLibrary::uniform_cube(
	FVector origin,
	float length,
	int stepSize
)
{
	TArray<FVector> points;
	float z;
	for (int i = 0; i <= length; i += stepSize)
	{
		z = i - (length / 2.0f);
		points.Append(
			uniform_square(
				FVector(origin.X, origin.Y, z),
				length,
				stepSize
			)
		);
	}
	return points;
}


TArray<FVector> UtsMathBPLibrary::uniform_sphere(
	FVector origin,
	float radius,
	int stepSize,
	bool surfaceOnly
)
{
	float diameter = 2.0f * radius;
	bool condition;
	TArray<FVector> points;
	float x, y, z;
	float r;
	for (int i = 0; i <= diameter; i += stepSize)
	{
		x = i + origin.X - radius;
		for (int j = 0; j <= diameter; j += stepSize)
		{
			y = j + origin.Y - radius;
			for (int k = 0; k <= diameter; k += stepSize)
			{
				z = k + origin.Z - radius;
				r = sqrt(pow(x - origin.X, 2) + pow(y - origin.Y, 2) + pow(z - origin.Z, 2));
				condition = (surfaceOnly) ? (FMath::IsNearlyEqual(r, radius, stepSize)) : (r <= radius);
				if (condition)
				{
					points.Add(FVector(x, y, z));
				}
			}
		}
	}
	return points;
}


bool UtsMathBPLibrary::is_point_in_sphere(FVector point, FVector origin, float radius)
{
	if ((point - origin).Size() <= radius)
	{
		return true;
	}
	return false;
}


// PROBABILITY AND STATISTICS
float UtsMathBPLibrary::random_normal(float mean, float deviation)
{
	/*
	Use the Box-Muller Transform to sample a normal distribution.
	*/
	float u1 = FMath::FRandRange(0.0001, 1);
	float u2 = FMath::FRandRange(0.0001, 1);
	float r = sqrt(-2 * log(u1));
	float theta = 2 * PI * u2;
	return (deviation * r * sin(theta)) + mean;
}


float UtsMathBPLibrary::get_probability_normal(float x, float mean, float deviation)
{
	if (deviation != 0)
	{
		float coefficient = 1 / (deviation * sqrt(2 * PI));
		float exponent = (-1 / 2) * pow((x - mean) / deviation, 2);
		return coefficient * exp(exponent);
	}
	return 0;
}


float UtsMathBPLibrary::get_cumulative_distribution(float x, float mean, float deviation)
{
	float x0 = mean - 6 * deviation;
	float x1 = mean + 6 * deviation;
	return UtsMathBPLibrary::two_point_spline_power(x, x0, x1, 0, 1, 20);
}


float UtsMathBPLibrary::get_inverse_cumulative_distribution(float x, float mean, float deviation)
{
	float a = -deviation / sqrt(PI);
	float b = (1 / x) - 1;
	float c = -sqrt(PI) * mean / deviation;
	return a * log(b * exp(c));
}


void UtsMathBPLibrary::get_inverse_probability_normal(float& lower, float& upper, float probability, float mean, float deviation)
{
	float s = deviation * sqrt(-2 * log(probability * deviation * sqrt(2 * PI)));
	lower = mean - s;
	upper = mean + s;
}


// SUM AND AVERAGE
int UtsMathBPLibrary::int_cum_sum(int n)
{
	return (n * (n + 1)) / 2;
}


int UtsMathBPLibrary::int_sum(TArray<int> intArray)
{
	int sum = 0;
	int length = intArray.Num();
	if (length != 0) {
		for (int i = 0; i < length; i++)
		{
			sum += intArray[i];
		}
	}
	return sum;
}


float UtsMathBPLibrary::float_sum(TArray<float> floatArray)
{
	float sum = 0;
	int length = floatArray.Num();
	if (length != 0) {
		for (int i = 0; i < length; i++)
		{
			sum += floatArray[i];
		}
	}
	return sum;
}


float UtsMathBPLibrary::float_average(TArray<float> floatArray)
{
	return float_sum(floatArray) / floatArray.Num();
}


FVector UtsMathBPLibrary::vector_weighted_average(TArray<FVector> vectorArray, TArray<float> weights)
{
	FVector sum = FVector(0, 0, 0);
	int length = vectorArray.Num();
	if (vectorArray.Num() == weights.Num()) {
		for (int i = 0; i < length; i++)
		{
			sum += vectorArray[i].operator*(weights[i]);
		}
	}
	return sum;
}


float UtsMathBPLibrary::float_weighted_average(TArray<float> floatArray, TArray<float> weights)
{
	float sum = 0;
	int length = floatArray.Num();
	if (floatArray.Num() == weights.Num()) {
		for (int i = 0; i < length; i++)
		{
			sum += floatArray[i] * weights[i];
		}
		return sum;
	}
	return 0;
}


FVector UtsMathBPLibrary::vector_sum(TArray<FVector> vectorArray)
{
	FVector sum = FVector(0, 0, 0);
	int length = vectorArray.Num();
	for (int i = 0; i < length; i++)
	{
		sum += vectorArray[i];
	}
	return sum;
}


float UtsMathBPLibrary::vector_magnitude_sum(TArray<FVector> vectorArray)
{
	float sum = 0;
	int length = vectorArray.Num();
	for (int i = 0; i < length; i++)
	{
		sum += vectorArray[i].Size();
	}
	return sum;
}


// SIGNAL GENERATORS
float UtsMathBPLibrary::signal_sinusoid(
	float x,
	float amplitude,
	float frequency,
	float phase,
	float offset
)
{
	return (amplitude * sin((frequency * x) + phase)) + offset;
}


float UtsMathBPLibrary::signal_square(
	float x,
	float amplitude,
	float frequency,
	float phase,
	float offset
)
{
	float sine = sin((frequency * x) + phase);
	float sign = (float)UKismetMathLibrary::SignOfFloat(sine);
	return (amplitude * sign) + offset;
}


float UtsMathBPLibrary::signal_triangle(
	float x,
	float amplitude,
	float frequency,
	float phase,
	float offset
)
{
	float adjuster = 3 * PI / 2;
	float line = ((frequency * x + adjuster * phase) / PI) - (1 / 2);
	float triangle = amplitude * (fmod(line, 2) - 1);
	return (2 * abs(triangle)) + offset - amplitude;
}


float UtsMathBPLibrary::signal_sawtooth(
	float x,
	float amplitude,
	float frequency,
	float phase,
	float offset
)
{
	float saw = fmod(((2 * (frequency * x + phase) / PI) + 1), 2);
	return (amplitude * saw) + offset - amplitude;
}


// TWO-POINT SPLINE FUNCTIONS
float UtsMathBPLibrary::tps_psi(float x, float x0, float x1)
{
	return (x - x0) / (x1 - x0);
}


float UtsMathBPLibrary::two_point_spline_power(
	float x,
	float x0,
	float x1,
	float y0,
	float y1,
	float rho
)
{
	float dx = x1 - x0;
	float dy = y1 - y0;
	float r = x - x0;
	float psi = r / dx;
	return y0 + (dy * pow(psi, rho));
}


float UtsMathBPLibrary::two_point_spline_sigmoid(
	float x,
	float x0,
	float x1,
	float y0,
	float y1,
	float rho
)
{
	float dx = x1 - x0;
	float dy = y1 - y0;
	float r = x - x0;
	float psi = r / dx;
	return y0 + dy * pow(sin(PI * psi / 2), 2);
}


float UtsMathBPLibrary::two_point_spline_sinusoid(
	float x,
	float x0,
	float x1,
	float y0,
	float y1,
	float rho
)
{
	float dx = x1 - x0;
	float dy = y1 - y0;
	float r = x - x0;
	float psi = r / dx;
	float k = rho * ((1 / 2) - psi);
	return y0 + dy * (1 / (1 + exp(k)));
}


float UtsMathBPLibrary::two_point_spline_smoothramp(
	float x,
	float x0,
	float x1,
	float y0,
	float y1,
	float rho,
	float power
)
{
	float dx = x1 - x0;
	float dy = y1 - y0;
	float r = x - x0;
	float psi = r / dx;
	float k = rho * ((1 / 2) - psi);
	float a = two_point_spline_sigmoid(
		x,
		x0,
		x1,
		y0,
		y1,
		rho
	);
	float b = two_point_spline_sinusoid(
		x,
		x0,
		x1,
		y0,
		y1,
		rho
	);
	return  pow(a * b, power);
}


//UTILILTY
float UtsMathBPLibrary::negate_float(float x)
{
	return x * (-1);
}


int UtsMathBPLibrary::negate_int(int x)
{
	return x * (-1);
}


void UtsMathBPLibrary::plus_minus(float num, float range, float& a, float& b)
{
	a = num - range;
	b = num + range;
}


FVector UtsMathBPLibrary::jitter_vector(FVector vector, FVector range)
{
	FVector newVector = FVector(0, 0, 0);
	float a;
	float b;
	float r;
	UtsMathBPLibrary::plus_minus(vector.X, range.X, a, b);
	r = FMath::RandRange(a, b);
	newVector.X = r;
	UtsMathBPLibrary::plus_minus(vector.Y, range.Y, a, b);
	r = FMath::RandRange(a, b);
	newVector.Y = r;
	UtsMathBPLibrary::plus_minus(vector.Z, range.Z, a, b);
	r = FMath::RandRange(a, b);
	newVector.Z = r;
	return newVector;
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

// U N I V E R S A L
// G R A V I T A T I O N

float UtsAerospaceBPLibrary::compute_gravitational_force_magnitude(
	float gravitationalConstant,
	float mass1,
	float mass2,
	FVector position1,
	FVector position2
)
{
	float distanceSquared = FVector::DistSquared(position1, position2);
	if (distanceSquared != 0) {
		return (gravitationalConstant * mass1 * mass2) / distanceSquared;
	}
	return 0;
}

FVector UtsAerospaceBPLibrary::compute_gravitational_force(
	float gravitationalConstant,
	float mass1,
	float mass2,
	FVector position1,
	FVector position2
)
{
	float forceMagnitude = compute_gravitational_force_magnitude(
		gravitationalConstant,
		mass1,
		mass2,
		position1,
		position2
	);
	FVector forceDirection = UtsMathBPLibrary::unit_direction(
		position1,
		position2
	);
	return forceDirection.operator*(forceMagnitude);
}

FVector UtsAerospaceBPLibrary::average_force(float averageMass, FVector averageCoordinate)
{
	float averageCoordinateMagnitude = averageCoordinate.Size();
	return averageMass * averageCoordinate / (pow(averageCoordinateMagnitude, 3));
}

// O R B I T

float UtsAerospaceBPLibrary::kepler_n(float semimajorAxis, float gravitationalParameter)
{
	return sqrt(gravitationalParameter / pow(semimajorAxis, 3));
}

float UtsAerospaceBPLibrary::kepler_p(float semimajorAxis, float eccentricity)
{
	return semimajorAxis * (1 - pow(eccentricity, 2));
}

float UtsAerospaceBPLibrary::kepler_r(float semimajorAxis, float eccentricity, float trueAnomaly)
{
	return kepler_p(semimajorAxis, eccentricity) / (1 + eccentricity * cos(trueAnomaly));
}

float UtsAerospaceBPLibrary::kepler_equation(float eccentricity, float eccentricAnomaly, float meanAnomaly)
{
	return meanAnomaly - eccentricAnomaly + (eccentricity * sin(eccentricAnomaly));
}

float UtsAerospaceBPLibrary::kepler_equation_derivative(float eccentricity, float eccentricAnomaly)
{
	return (eccentricity * cos(eccentricAnomaly)) - 1;
}

float UtsAerospaceBPLibrary::solve_kepler_equation(
	float semimajorAxis,
	float eccentricity,
	float gravitationalParameter,
	float time,
	float tolerance,
	int maxIterations
)
{
	/*
	This function uses Newton's root-finding method to solve Kepler's equation.
	*/
	float E;
	float dE;
	float meanAnomaly = kepler_n(semimajorAxis, gravitationalParameter) * time;
	float eccentricAnomaly = meanAnomaly;
	int iteration = 0;
	while (iteration < maxIterations)
	{
		E = kepler_equation(eccentricity, eccentricAnomaly, meanAnomaly);
		dE = kepler_equation_derivative(eccentricity, eccentricAnomaly);
		eccentricAnomaly = eccentricAnomaly - (E / dE);
		if (abs(E) < tolerance) {
			break;
		}
		iteration += 1;
	}
	return eccentricAnomaly;
}

FVector UtsAerospaceBPLibrary::kepler_orbit(
	float semimajorAxis,
	float eccentricity,
	float inclination,
	float periapsis,
	float ascension,
	FVector focus,
	float trueAnomaly
)
{
	float pos = periapsis + trueAnomaly;
	float length = kepler_r(semimajorAxis, eccentricity, trueAnomaly);
	float x = length * (cos(ascension) * cos(pos) - sin(ascension) * sin(pos) * cos(inclination));
	float y = length * (sin(ascension) * cos(pos) + cos(ascension) * sin(pos) * cos(inclination));
	float z = length * sin(inclination) * sin(pos);
	return FVector(x, y, z) + focus;
}

float UtsAerospaceBPLibrary::compute_true_anomaly(
	float semimajorAxis,
	float eccentricity,
	float gravitationalParameter,
	float time,
	float tolerance,
	int maxIterations
)
{
	float eccentricAnomaly = solve_kepler_equation(
		semimajorAxis,
		eccentricity,
		gravitationalParameter,
		time,
		tolerance,
		maxIterations
	);
	return 2 * atan(sqrt((1 + eccentricity) / (1 - eccentricity)) * tan(eccentricAnomaly / 2));
}

TArray<FVector> UtsAerospaceBPLibrary::generate_orbit_points(
	float semimajorAxis,
	float eccentricity,
	float inclination,
	float periapsis,
	float ascension,
	FVector focus,
	int numberOfPoints
)
{
	TArray<FVector> points;
	float trueAnomaly;
	for (int i = 0; i <= numberOfPoints; i++)
	{
		trueAnomaly = 2 * PI * ((float)i / (float)numberOfPoints);
		points.Add(
			kepler_orbit(
				semimajorAxis,
				eccentricity,
				inclination,
				periapsis,
				ascension,
				focus,
				trueAnomaly
			)
		);
	}
	return points;
}