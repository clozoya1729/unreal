// Copyright Christian Lozoya. All Rights Reserved.

#include "tsMotionPlannerBPLibrary.h"
#include "tsAerospaceBPLibrary.h"
#include "tsAerospace.h"
#include <cmath>
#include "tsMathBPLibrary.h"

UtsAerospaceBPLibrary::UtsAerospaceBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

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