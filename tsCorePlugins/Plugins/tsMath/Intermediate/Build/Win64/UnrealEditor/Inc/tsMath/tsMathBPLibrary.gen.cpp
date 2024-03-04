// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "tsMath/Public/tsMathBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetsMathBPLibrary() {}
// Cross Module References
	TSMATH_API UClass* Z_Construct_UClass_UtsMathBPLibrary_NoRegister();
	TSMATH_API UClass* Z_Construct_UClass_UtsMathBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_tsMath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UtsMathBPLibrary::execjitter_vector)
	{
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_GET_STRUCT(FVector,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::jitter_vector(Z_Param_vector,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execplus_minus)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_num);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_a);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		UtsMathBPLibrary::plus_minus(Z_Param_num,Z_Param_range,Z_Param_Out_a,Z_Param_Out_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execnegate_int)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UtsMathBPLibrary::negate_int(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execnegate_float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::negate_float(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::exectwo_point_spline_smoothramp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rho);
		P_GET_PROPERTY(FFloatProperty,Z_Param_power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::two_point_spline_smoothramp(Z_Param_x,Z_Param_x0,Z_Param_x1,Z_Param_y0,Z_Param_y1,Z_Param_rho,Z_Param_power);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::exectwo_point_spline_sinusoid)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rho);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::two_point_spline_sinusoid(Z_Param_x,Z_Param_x0,Z_Param_x1,Z_Param_y0,Z_Param_y1,Z_Param_rho);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::exectwo_point_spline_sigmoid)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rho);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::two_point_spline_sigmoid(Z_Param_x,Z_Param_x0,Z_Param_x1,Z_Param_y0,Z_Param_y1,Z_Param_rho);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::exectwo_point_spline_power)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rho);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::two_point_spline_power(Z_Param_x,Z_Param_x0,Z_Param_x1,Z_Param_y0,Z_Param_y1,Z_Param_rho);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execactivation_sigmoid)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::activation_sigmoid(Z_Param_x,Z_Param_scale,Z_Param_shape);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execactivation_power)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::activation_power(Z_Param_x,Z_Param_scale,Z_Param_power);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execactivation_cos)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::activation_cos(Z_Param_x,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execsignal_sawtooth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_phase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::signal_sawtooth(Z_Param_x,Z_Param_amplitude,Z_Param_frequency,Z_Param_phase,Z_Param_offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execsignal_triangle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_phase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::signal_triangle(Z_Param_x,Z_Param_amplitude,Z_Param_frequency,Z_Param_phase,Z_Param_offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execsignal_square)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_phase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::signal_square(Z_Param_x,Z_Param_amplitude,Z_Param_frequency,Z_Param_phase,Z_Param_offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execsignal_sinusoid)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_phase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::signal_sinusoid(Z_Param_x,Z_Param_amplitude,Z_Param_frequency,Z_Param_phase,Z_Param_offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execvector_magnitude_sum)
	{
		P_GET_TARRAY(FVector,Z_Param_vectorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::vector_magnitude_sum(Z_Param_vectorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execvector_sum)
	{
		P_GET_TARRAY(FVector,Z_Param_vectorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::vector_sum(Z_Param_vectorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execvector_weighted_average)
	{
		P_GET_TARRAY(FVector,Z_Param_vectorArray);
		P_GET_TARRAY(float,Z_Param_weights);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::vector_weighted_average(Z_Param_vectorArray,Z_Param_weights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execfloat_weighted_average)
	{
		P_GET_TARRAY(float,Z_Param_floatArray);
		P_GET_TARRAY(float,Z_Param_weights);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::float_weighted_average(Z_Param_floatArray,Z_Param_weights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execfloat_average)
	{
		P_GET_TARRAY(float,Z_Param_floatArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::float_average(Z_Param_floatArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execfloat_sum)
	{
		P_GET_TARRAY(float,Z_Param_floatArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::float_sum(Z_Param_floatArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execint_sum)
	{
		P_GET_TARRAY(int32,Z_Param_intArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UtsMathBPLibrary::int_sum(Z_Param_intArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execint_cum_sum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UtsMathBPLibrary::int_cum_sum(Z_Param_n);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execget_inverse_probability_normal)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_lower);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_upper);
		P_GET_PROPERTY(FFloatProperty,Z_Param_probability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UtsMathBPLibrary::get_inverse_probability_normal(Z_Param_Out_lower,Z_Param_Out_upper,Z_Param_probability,Z_Param_mean,Z_Param_deviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execget_inverse_cumulative_distribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::get_inverse_cumulative_distribution(Z_Param_x,Z_Param_mean,Z_Param_deviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execget_cumulative_distribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::get_cumulative_distribution(Z_Param_x,Z_Param_mean,Z_Param_deviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execget_probability_normal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::get_probability_normal(Z_Param_x,Z_Param_mean,Z_Param_deviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execrandom_normal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsMathBPLibrary::random_normal(Z_Param_mean,Z_Param_deviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execspherical_to_cartesian)
	{
		P_GET_STRUCT(FVector,Z_Param_coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::spherical_to_cartesian(Z_Param_coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execcartesian_to_spherical)
	{
		P_GET_STRUCT(FVector,Z_Param_coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::cartesian_to_spherical(Z_Param_coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execis_point_in_sphere)
	{
		P_GET_STRUCT(FVector,Z_Param_point);
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UtsMathBPLibrary::is_point_in_sphere(Z_Param_point,Z_Param_origin,Z_Param_radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execodd_sphere)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_stepSize);
		P_GET_UBOOL(Z_Param_surfaceOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsMathBPLibrary::odd_sphere(Z_Param_origin,Z_Param_radius,Z_Param_stepSize,Z_Param_surfaceOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execuniform_sphere)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_stepSize);
		P_GET_UBOOL(Z_Param_surfaceOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsMathBPLibrary::uniform_sphere(Z_Param_origin,Z_Param_radius,Z_Param_stepSize,Z_Param_surfaceOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execuniform_cube)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_stepSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsMathBPLibrary::uniform_cube(Z_Param_origin,Z_Param_length,Z_Param_stepSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execuniform_square)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_stepSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsMathBPLibrary::uniform_square(Z_Param_origin,Z_Param_length,Z_Param_stepSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execrandom_sphere)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfPoints);
		P_GET_UBOOL(Z_Param_surfaceOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsMathBPLibrary::random_sphere(Z_Param_origin,Z_Param_radius,Z_Param_numberOfPoints,Z_Param_surfaceOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execrandom_point_in_sphere)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_UBOOL(Z_Param_surfaceOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::random_point_in_sphere(Z_Param_origin,Z_Param_radius,Z_Param_surfaceOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execrandom_point_in_cube)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::random_point_in_cube(Z_Param_origin,Z_Param_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execshortest_vector)
	{
		P_GET_TARRAY(FVector,Z_Param_vectorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::shortest_vector(Z_Param_vectorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsMathBPLibrary::execclamp_vector)
	{
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_GET_STRUCT(FVector,Z_Param_min);
		P_GET_STRUCT(FVector,Z_Param_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsMathBPLibrary::clamp_vector(Z_Param_vector,Z_Param_min,Z_Param_max);
		P_NATIVE_END;
	}
	void UtsMathBPLibrary::StaticRegisterNativesUtsMathBPLibrary()
	{
		UClass* Class = UtsMathBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "activation_cos", &UtsMathBPLibrary::execactivation_cos },
			{ "activation_power", &UtsMathBPLibrary::execactivation_power },
			{ "activation_sigmoid", &UtsMathBPLibrary::execactivation_sigmoid },
			{ "cartesian_to_spherical", &UtsMathBPLibrary::execcartesian_to_spherical },
			{ "clamp_vector", &UtsMathBPLibrary::execclamp_vector },
			{ "float_average", &UtsMathBPLibrary::execfloat_average },
			{ "float_sum", &UtsMathBPLibrary::execfloat_sum },
			{ "float_weighted_average", &UtsMathBPLibrary::execfloat_weighted_average },
			{ "get_cumulative_distribution", &UtsMathBPLibrary::execget_cumulative_distribution },
			{ "get_inverse_cumulative_distribution", &UtsMathBPLibrary::execget_inverse_cumulative_distribution },
			{ "get_inverse_probability_normal", &UtsMathBPLibrary::execget_inverse_probability_normal },
			{ "get_probability_normal", &UtsMathBPLibrary::execget_probability_normal },
			{ "int_cum_sum", &UtsMathBPLibrary::execint_cum_sum },
			{ "int_sum", &UtsMathBPLibrary::execint_sum },
			{ "is_point_in_sphere", &UtsMathBPLibrary::execis_point_in_sphere },
			{ "jitter_vector", &UtsMathBPLibrary::execjitter_vector },
			{ "negate_float", &UtsMathBPLibrary::execnegate_float },
			{ "negate_int", &UtsMathBPLibrary::execnegate_int },
			{ "odd_sphere", &UtsMathBPLibrary::execodd_sphere },
			{ "plus_minus", &UtsMathBPLibrary::execplus_minus },
			{ "random_normal", &UtsMathBPLibrary::execrandom_normal },
			{ "random_point_in_cube", &UtsMathBPLibrary::execrandom_point_in_cube },
			{ "random_point_in_sphere", &UtsMathBPLibrary::execrandom_point_in_sphere },
			{ "random_sphere", &UtsMathBPLibrary::execrandom_sphere },
			{ "shortest_vector", &UtsMathBPLibrary::execshortest_vector },
			{ "signal_sawtooth", &UtsMathBPLibrary::execsignal_sawtooth },
			{ "signal_sinusoid", &UtsMathBPLibrary::execsignal_sinusoid },
			{ "signal_square", &UtsMathBPLibrary::execsignal_square },
			{ "signal_triangle", &UtsMathBPLibrary::execsignal_triangle },
			{ "spherical_to_cartesian", &UtsMathBPLibrary::execspherical_to_cartesian },
			{ "two_point_spline_power", &UtsMathBPLibrary::exectwo_point_spline_power },
			{ "two_point_spline_sigmoid", &UtsMathBPLibrary::exectwo_point_spline_sigmoid },
			{ "two_point_spline_sinusoid", &UtsMathBPLibrary::exectwo_point_spline_sinusoid },
			{ "two_point_spline_smoothramp", &UtsMathBPLibrary::exectwo_point_spline_smoothramp },
			{ "uniform_cube", &UtsMathBPLibrary::execuniform_cube },
			{ "uniform_sphere", &UtsMathBPLibrary::execuniform_sphere },
			{ "uniform_square", &UtsMathBPLibrary::execuniform_square },
			{ "vector_magnitude_sum", &UtsMathBPLibrary::execvector_magnitude_sum },
			{ "vector_sum", &UtsMathBPLibrary::execvector_sum },
			{ "vector_weighted_average", &UtsMathBPLibrary::execvector_weighted_average },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics
	{
		struct tsMathBPLibrary_eventactivation_cos_Parms
		{
			float x;
			float scale;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_cos_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_cos_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_cos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Activation" },
		{ "Comment", "// activation\n" },
		{ "DisplayName", "Activation Cosine" },
		{ "Keywords", "tsMath activation" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "activation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "activation_cos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::tsMathBPLibrary_eventactivation_cos_Parms), Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_activation_cos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_activation_cos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics
	{
		struct tsMathBPLibrary_eventactivation_power_Parms
		{
			float x;
			float scale;
			float power;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_power;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_power_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_power_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_power_Parms, power), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_power_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_power,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Activation" },
		{ "DisplayName", "Activation Power" },
		{ "Keywords", "tsMath activation" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "activation_power", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::tsMathBPLibrary_eventactivation_power_Parms), Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_activation_power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_activation_power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics
	{
		struct tsMathBPLibrary_eventactivation_sigmoid_Parms
		{
			float x;
			float scale;
			float shape;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_shape;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_sigmoid_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_sigmoid_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_sigmoid_Parms, shape), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventactivation_sigmoid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Activation" },
		{ "DisplayName", "Activation Sigmoid" },
		{ "Keywords", "tsMath activation" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "activation_sigmoid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::tsMathBPLibrary_eventactivation_sigmoid_Parms), Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics
	{
		struct tsMathBPLibrary_eventcartesian_to_spherical_Parms
		{
			FVector coordinate;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_coordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::NewProp_coordinate = { "coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventcartesian_to_spherical_Parms, coordinate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventcartesian_to_spherical_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::NewProp_coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry|Coordinates" },
		{ "Comment", "// coordinates\n" },
		{ "DisplayName", "Cartesian to Spherical" },
		{ "Keywords", "tsMath coordinates" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "cartesian_to_spherical", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::tsMathBPLibrary_eventcartesian_to_spherical_Parms), Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics
	{
		struct tsMathBPLibrary_eventclamp_vector_Parms
		{
			FVector vector;
			FVector min;
			FVector max;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_min;
		static const UECodeGen_Private::FStructPropertyParams NewProp_max;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventclamp_vector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventclamp_vector_Parms, min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventclamp_vector_Parms, max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventclamp_vector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Vector" },
		{ "DisplayName", "Clamp Vector" },
		{ "Keywords", "tsMath vector" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "clamp_vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::tsMathBPLibrary_eventclamp_vector_Parms), Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics
	{
		struct tsMathBPLibrary_eventfloat_average_Parms
		{
			TArray<float> floatArray;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_floatArray_Inner = { "floatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_floatArray = { "floatArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_average_Parms, floatArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_average_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_floatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_floatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Float Averageg" },
		{ "Keywords", "tsMath average" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "float_average", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::tsMathBPLibrary_eventfloat_average_Parms), Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_float_average()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_float_average_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics
	{
		struct tsMathBPLibrary_eventfloat_sum_Parms
		{
			TArray<float> floatArray;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_floatArray_Inner = { "floatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_floatArray = { "floatArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_sum_Parms, floatArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_sum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_floatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_floatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Float Sum" },
		{ "Keywords", "tsMath sum" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "float_sum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::tsMathBPLibrary_eventfloat_sum_Parms), Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_float_sum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_float_sum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics
	{
		struct tsMathBPLibrary_eventfloat_weighted_average_Parms
		{
			TArray<float> floatArray;
			TArray<float> weights;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weights;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_floatArray_Inner = { "floatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_floatArray = { "floatArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_weighted_average_Parms, floatArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_weights_Inner = { "weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_weights = { "weights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_weighted_average_Parms, weights), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventfloat_weighted_average_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_floatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_floatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Float Weighted Average" },
		{ "Keywords", "tsMath weighted average" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "float_weighted_average", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::tsMathBPLibrary_eventfloat_weighted_average_Parms), Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics
	{
		struct tsMathBPLibrary_eventget_cumulative_distribution_Parms
		{
			float x;
			float mean;
			float deviation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_cumulative_distribution_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_cumulative_distribution_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_deviation = { "deviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_cumulative_distribution_Parms, deviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_cumulative_distribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_deviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Probability|Normal" },
		{ "DisplayName", "Cumulative Probability Normal" },
		{ "Keywords", "tsMath probability normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "get_cumulative_distribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::tsMathBPLibrary_eventget_cumulative_distribution_Parms), Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics
	{
		struct tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms
		{
			float x;
			float mean;
			float deviation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_deviation = { "deviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms, deviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_deviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Probability|Normal" },
		{ "DisplayName", "Inverse Cumulative Probability Normal" },
		{ "Keywords", "tsMath probability normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "get_inverse_cumulative_distribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::tsMathBPLibrary_eventget_inverse_cumulative_distribution_Parms), Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics
	{
		struct tsMathBPLibrary_eventget_inverse_probability_normal_Parms
		{
			float lower;
			float upper;
			float probability;
			float mean;
			float deviation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_upper;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_probability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deviation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_lower = { "lower", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_probability_normal_Parms, lower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_upper = { "upper", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_probability_normal_Parms, upper), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_probability = { "probability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_probability_normal_Parms, probability), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_probability_normal_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_deviation = { "deviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_inverse_probability_normal_Parms, deviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_lower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_upper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::NewProp_deviation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Probability|Normal" },
		{ "CPP_Default_deviation", "1.000000" },
		{ "CPP_Default_mean", "0.000000" },
		{ "DisplayName", "Inverse Probability Normal" },
		{ "Keywords", "tsMath inverse probability normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "get_inverse_probability_normal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::tsMathBPLibrary_eventget_inverse_probability_normal_Parms), Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics
	{
		struct tsMathBPLibrary_eventget_probability_normal_Parms
		{
			float x;
			float mean;
			float deviation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_probability_normal_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_probability_normal_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_deviation = { "deviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_probability_normal_Parms, deviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventget_probability_normal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_deviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Probability|Normal" },
		{ "DisplayName", "Probability Normal" },
		{ "Keywords", "tsMath probability normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "get_probability_normal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::tsMathBPLibrary_eventget_probability_normal_Parms), Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics
	{
		struct tsMathBPLibrary_eventint_cum_sum_Parms
		{
			int32 n;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_n;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventint_cum_sum_Parms, n), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventint_cum_sum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::NewProp_n,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "Comment", "// SUM AND AVERAGE\n" },
		{ "DisplayName", "Int Cum Sum" },
		{ "Keywords", "tsMath sum" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "SUM AND AVERAGE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "int_cum_sum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::tsMathBPLibrary_eventint_cum_sum_Parms), Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics
	{
		struct tsMathBPLibrary_eventint_sum_Parms
		{
			TArray<int32> intArray;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_intArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_intArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_intArray_Inner = { "intArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_intArray = { "intArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventint_sum_Parms, intArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventint_sum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_intArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_intArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Int Sum" },
		{ "Keywords", "tsMath sum" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "int_sum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::tsMathBPLibrary_eventint_sum_Parms), Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_int_sum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_int_sum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics
	{
		struct tsMathBPLibrary_eventis_point_in_sphere_Parms
		{
			FVector point;
			FVector origin;
			float radius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventis_point_in_sphere_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventis_point_in_sphere_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventis_point_in_sphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((tsMathBPLibrary_eventis_point_in_sphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(tsMathBPLibrary_eventis_point_in_sphere_Parms), &Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "DisplayName", "Is Point in Sphere" },
		{ "Keywords", "tsMath random normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "is_point_in_sphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::tsMathBPLibrary_eventis_point_in_sphere_Parms), Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics
	{
		struct tsMathBPLibrary_eventjitter_vector_Parms
		{
			FVector vector;
			FVector range;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_range;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventjitter_vector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventjitter_vector_Parms, range), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventjitter_vector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Utility" },
		{ "DisplayName", "Jitter Vector" },
		{ "Keywords", "tsMath +-" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "jitter_vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::tsMathBPLibrary_eventjitter_vector_Parms), Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics
	{
		struct tsMathBPLibrary_eventnegate_float_Parms
		{
			float x;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventnegate_float_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventnegate_float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Utility" },
		{ "Comment", "// UTILITY\n" },
		{ "CompactNodeTitle", "*(-1)" },
		{ "DisplayName", "Negate Float" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "UTILITY" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "negate_float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::tsMathBPLibrary_eventnegate_float_Parms), Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_negate_float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_negate_float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics
	{
		struct tsMathBPLibrary_eventnegate_int_Parms
		{
			int32 x;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventnegate_int_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventnegate_int_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Utility" },
		{ "CompactNodeTitle", "*(-1)" },
		{ "DisplayName", "Negate Int" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "negate_int", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::tsMathBPLibrary_eventnegate_int_Parms), Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_negate_int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_negate_int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics
	{
		struct tsMathBPLibrary_eventodd_sphere_Parms
		{
			FVector origin;
			float radius;
			int32 stepSize;
			bool surfaceOnly;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stepSize;
		static void NewProp_surfaceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_surfaceOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventodd_sphere_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventodd_sphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_stepSize = { "stepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventodd_sphere_Parms, stepSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_surfaceOnly_SetBit(void* Obj)
	{
		((tsMathBPLibrary_eventodd_sphere_Parms*)Obj)->surfaceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_surfaceOnly = { "surfaceOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(tsMathBPLibrary_eventodd_sphere_Parms), &Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_surfaceOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventodd_sphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_stepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_surfaceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_radius", "100.000000" },
		{ "CPP_Default_stepSize", "10" },
		{ "CPP_Default_surfaceOnly", "false" },
		{ "DisplayName", "Odd Sphere" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "odd_sphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::tsMathBPLibrary_eventodd_sphere_Parms), Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics
	{
		struct tsMathBPLibrary_eventplus_minus_Parms
		{
			float num;
			float range;
			float a;
			float b;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_num;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_b;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventplus_minus_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventplus_minus_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventplus_minus_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventplus_minus_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::NewProp_b,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Utility" },
		{ "DisplayName", "+-" },
		{ "Keywords", "tsMath +-" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "plus_minus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::tsMathBPLibrary_eventplus_minus_Parms), Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_plus_minus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_plus_minus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics
	{
		struct tsMathBPLibrary_eventrandom_normal_Parms
		{
			float mean;
			float deviation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_mean = { "mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_normal_Parms, mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_deviation = { "deviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_normal_Parms, deviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_normal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_deviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Probability|Normal" },
		{ "Comment", "// PROBABILITY AND STATISTICS\n" },
		{ "CPP_Default_deviation", "1.000000" },
		{ "CPP_Default_mean", "0.000000" },
		{ "DisplayName", "Random Normal" },
		{ "Keywords", "tsMath random normal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "PROBABILITY AND STATISTICS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "random_normal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::tsMathBPLibrary_eventrandom_normal_Parms), Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_random_normal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_random_normal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics
	{
		struct tsMathBPLibrary_eventrandom_point_in_cube_Parms
		{
			FVector origin;
			float length;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_cube_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_cube_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_cube_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "Comment", "// GEOMETRY\n" },
		{ "DisplayName", "Random Point in Cube" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "GEOMETRY" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "random_point_in_cube", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::tsMathBPLibrary_eventrandom_point_in_cube_Parms), Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics
	{
		struct tsMathBPLibrary_eventrandom_point_in_sphere_Parms
		{
			FVector origin;
			float radius;
			bool surfaceOnly;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static void NewProp_surfaceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_surfaceOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_sphere_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_sphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_surfaceOnly_SetBit(void* Obj)
	{
		((tsMathBPLibrary_eventrandom_point_in_sphere_Parms*)Obj)->surfaceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_surfaceOnly = { "surfaceOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(tsMathBPLibrary_eventrandom_point_in_sphere_Parms), &Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_surfaceOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_point_in_sphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_surfaceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_radius", "100.000000" },
		{ "CPP_Default_surfaceOnly", "false" },
		{ "DisplayName", "Random Point in Sphere" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "random_point_in_sphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::tsMathBPLibrary_eventrandom_point_in_sphere_Parms), Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics
	{
		struct tsMathBPLibrary_eventrandom_sphere_Parms
		{
			FVector origin;
			float radius;
			int32 numberOfPoints;
			bool surfaceOnly;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfPoints;
		static void NewProp_surfaceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_surfaceOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_sphere_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_sphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_numberOfPoints = { "numberOfPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_sphere_Parms, numberOfPoints), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_surfaceOnly_SetBit(void* Obj)
	{
		((tsMathBPLibrary_eventrandom_sphere_Parms*)Obj)->surfaceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_surfaceOnly = { "surfaceOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(tsMathBPLibrary_eventrandom_sphere_Parms), &Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_surfaceOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventrandom_sphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_numberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_surfaceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_numberOfPoints", "1000" },
		{ "CPP_Default_radius", "100.000000" },
		{ "CPP_Default_surfaceOnly", "false" },
		{ "DisplayName", "Random Sphere" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "random_sphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::tsMathBPLibrary_eventrandom_sphere_Parms), Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_random_sphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_random_sphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics
	{
		struct tsMathBPLibrary_eventshortest_vector_Parms
		{
			TArray<FVector> vectorArray;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_vectorArray_Inner = { "vectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_vectorArray = { "vectorArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventshortest_vector_Parms, vectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventshortest_vector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_vectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_vectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Vector" },
		{ "DisplayName", "Shortest Vector" },
		{ "Keywords", "tsMath vector" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "shortest_vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::tsMathBPLibrary_eventshortest_vector_Parms), Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics
	{
		struct tsMathBPLibrary_eventsignal_sawtooth_Parms
		{
			float x;
			float amplitude;
			float frequency;
			float phase;
			float offset;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_phase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sawtooth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Generator" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_frequency", "1.000000" },
		{ "CPP_Default_offset", "0.000000" },
		{ "CPP_Default_phase", "0.000000" },
		{ "DisplayName", "Signal Sawtooth" },
		{ "Keywords", "tsMath signal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "signal_sawtooth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::tsMathBPLibrary_eventsignal_sawtooth_Parms), Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics
	{
		struct tsMathBPLibrary_eventsignal_sinusoid_Parms
		{
			float x;
			float amplitude;
			float frequency;
			float phase;
			float offset;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_phase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_sinusoid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Generator" },
		{ "Comment", "// SIGNAL\n// generator\n" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_frequency", "1.000000" },
		{ "CPP_Default_offset", "0.000000" },
		{ "CPP_Default_phase", "0.000000" },
		{ "DisplayName", "Signal Sinusoid" },
		{ "Keywords", "tsMath signal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "SIGNAL\ngenerator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "signal_sinusoid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::tsMathBPLibrary_eventsignal_sinusoid_Parms), Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics
	{
		struct tsMathBPLibrary_eventsignal_square_Parms
		{
			float x;
			float amplitude;
			float frequency;
			float phase;
			float offset;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_phase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_square_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Generator" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_frequency", "1.000000" },
		{ "CPP_Default_offset", "0.000000" },
		{ "CPP_Default_phase", "0.000000" },
		{ "DisplayName", "Signal Square" },
		{ "Keywords", "tsMath signal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "signal_square", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::tsMathBPLibrary_eventsignal_square_Parms), Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_signal_square()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_signal_square_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics
	{
		struct tsMathBPLibrary_eventsignal_triangle_Parms
		{
			float x;
			float amplitude;
			float frequency;
			float phase;
			float offset;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_phase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventsignal_triangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Signal|Generator" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_frequency", "1.000000" },
		{ "CPP_Default_offset", "0.000000" },
		{ "CPP_Default_phase", "0.000000" },
		{ "DisplayName", "Signal Triangle" },
		{ "Keywords", "tsMath signal" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "signal_triangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::tsMathBPLibrary_eventsignal_triangle_Parms), Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics
	{
		struct tsMathBPLibrary_eventspherical_to_cartesian_Parms
		{
			FVector coordinate;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_coordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::NewProp_coordinate = { "coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventspherical_to_cartesian_Parms, coordinate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventspherical_to_cartesian_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::NewProp_coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry|Coordinates" },
		{ "DisplayName", "Spherical to Cartesian" },
		{ "Keywords", "tsMath coordinates" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "spherical_to_cartesian", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::tsMathBPLibrary_eventspherical_to_cartesian_Parms), Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics
	{
		struct tsMathBPLibrary_eventtwo_point_spline_power_Parms
		{
			float x;
			float x0;
			float x1;
			float y0;
			float y1;
			float rho;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rho;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x0 = { "x0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, x0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x1 = { "x1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, x1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_y0 = { "y0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, y0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_y1 = { "y1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, y1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_rho = { "rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, rho), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_power_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_x1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_rho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Interpolation" },
		{ "CPP_Default_rho", "1.000000" },
		{ "CPP_Default_x0", "0.000000" },
		{ "CPP_Default_x1", "1.000000" },
		{ "CPP_Default_y0", "0.000000" },
		{ "CPP_Default_y1", "1.000000" },
		{ "DisplayName", "Two-Point Spline Power" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "two_point_spline_power", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::tsMathBPLibrary_eventtwo_point_spline_power_Parms), Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics
	{
		struct tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms
		{
			float x;
			float x0;
			float x1;
			float y0;
			float y1;
			float rho;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rho;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x0 = { "x0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, x0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x1 = { "x1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, x1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_y0 = { "y0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, y0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_y1 = { "y1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, y1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_rho = { "rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, rho), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_x1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_rho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Interpolation" },
		{ "CPP_Default_rho", "1.000000" },
		{ "CPP_Default_x0", "0.000000" },
		{ "CPP_Default_x1", "1.000000" },
		{ "CPP_Default_y0", "0.000000" },
		{ "CPP_Default_y1", "1.000000" },
		{ "DisplayName", "Two-Point Spline Sigmoid" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "two_point_spline_sigmoid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::tsMathBPLibrary_eventtwo_point_spline_sigmoid_Parms), Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics
	{
		struct tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms
		{
			float x;
			float x0;
			float x1;
			float y0;
			float y1;
			float rho;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rho;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x0 = { "x0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, x0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x1 = { "x1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, x1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_y0 = { "y0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, y0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_y1 = { "y1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, y1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_rho = { "rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, rho), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_x1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_rho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Interpolation" },
		{ "CPP_Default_rho", "1.000000" },
		{ "CPP_Default_x0", "0.000000" },
		{ "CPP_Default_x1", "1.000000" },
		{ "CPP_Default_y0", "0.000000" },
		{ "CPP_Default_y1", "1.000000" },
		{ "DisplayName", "Two-Point Spline Sinusoid" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "two_point_spline_sinusoid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::tsMathBPLibrary_eventtwo_point_spline_sinusoid_Parms), Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics
	{
		struct tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms
		{
			float x;
			float x0;
			float x1;
			float y0;
			float y1;
			float rho;
			float power;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rho;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_power;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x0 = { "x0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, x0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x1 = { "x1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, x1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_y0 = { "y0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, y0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_y1 = { "y1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, y1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_rho = { "rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, rho), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, power), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_x1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_y0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_y1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_rho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_power,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Interpolation" },
		{ "CPP_Default_power", "1.000000" },
		{ "CPP_Default_rho", "1.000000" },
		{ "CPP_Default_x0", "0.000000" },
		{ "CPP_Default_x1", "1.000000" },
		{ "CPP_Default_y0", "0.000000" },
		{ "CPP_Default_y1", "1.000000" },
		{ "DisplayName", "Two-Point Spline Smooth-Ramp" },
		{ "Keywords", "tsMath spline" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "two_point_spline_smoothramp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::tsMathBPLibrary_eventtwo_point_spline_smoothramp_Parms), Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics
	{
		struct tsMathBPLibrary_eventuniform_cube_Parms
		{
			FVector origin;
			float length;
			int32 stepSize;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stepSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_cube_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_cube_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_stepSize = { "stepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_cube_Parms, stepSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_cube_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_stepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_length", "100.000000" },
		{ "CPP_Default_stepSize", "10" },
		{ "DisplayName", "Uniform Cube" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "uniform_cube", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::tsMathBPLibrary_eventuniform_cube_Parms), Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics
	{
		struct tsMathBPLibrary_eventuniform_sphere_Parms
		{
			FVector origin;
			float radius;
			int32 stepSize;
			bool surfaceOnly;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stepSize;
		static void NewProp_surfaceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_surfaceOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_sphere_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_sphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_stepSize = { "stepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_sphere_Parms, stepSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_surfaceOnly_SetBit(void* Obj)
	{
		((tsMathBPLibrary_eventuniform_sphere_Parms*)Obj)->surfaceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_surfaceOnly = { "surfaceOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(tsMathBPLibrary_eventuniform_sphere_Parms), &Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_surfaceOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_sphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_stepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_surfaceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_radius", "100.000000" },
		{ "CPP_Default_stepSize", "10" },
		{ "CPP_Default_surfaceOnly", "false" },
		{ "DisplayName", "Uniform Sphere" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "uniform_sphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::tsMathBPLibrary_eventuniform_sphere_Parms), Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics
	{
		struct tsMathBPLibrary_eventuniform_square_Parms
		{
			FVector origin;
			float length;
			int32 stepSize;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stepSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_square_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_square_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_stepSize = { "stepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_square_Parms, stepSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventuniform_square_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_stepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Geometry" },
		{ "CPP_Default_length", "100.000000" },
		{ "CPP_Default_stepSize", "10" },
		{ "DisplayName", "Uniform Square" },
		{ "Keywords", "tsMath geometry" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "uniform_square", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::tsMathBPLibrary_eventuniform_square_Parms), Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_uniform_square()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_uniform_square_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics
	{
		struct tsMathBPLibrary_eventvector_magnitude_sum_Parms
		{
			TArray<FVector> vectorArray;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vectorArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_vectorArray_Inner = { "vectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_vectorArray = { "vectorArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_magnitude_sum_Parms, vectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_magnitude_sum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_vectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_vectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Vector Magnitude Sum" },
		{ "Keywords", "tsMath vector magnitude sum" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "vector_magnitude_sum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::tsMathBPLibrary_eventvector_magnitude_sum_Parms), Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics
	{
		struct tsMathBPLibrary_eventvector_sum_Parms
		{
			TArray<FVector> vectorArray;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_vectorArray_Inner = { "vectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_vectorArray = { "vectorArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_sum_Parms, vectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_sum_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_vectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_vectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Vector Sum" },
		{ "Keywords", "tsMath vector sum" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "vector_sum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::tsMathBPLibrary_eventvector_sum_Parms), Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_vector_sum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_vector_sum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics
	{
		struct tsMathBPLibrary_eventvector_weighted_average_Parms
		{
			TArray<FVector> vectorArray;
			TArray<float> weights;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vectorArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_vectorArray_Inner = { "vectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_vectorArray = { "vectorArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_weighted_average_Parms, vectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_weights_Inner = { "weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_weights = { "weights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_weighted_average_Parms, weights), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsMathBPLibrary_eventvector_weighted_average_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_vectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_vectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsMath|Sum and Average" },
		{ "DisplayName", "Vector Weighted Average" },
		{ "Keywords", "tsMath weighted average" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsMathBPLibrary, nullptr, "vector_weighted_average", nullptr, nullptr, sizeof(Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::tsMathBPLibrary_eventvector_weighted_average_Parms), Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UtsMathBPLibrary);
	UClass* Z_Construct_UClass_UtsMathBPLibrary_NoRegister()
	{
		return UtsMathBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UtsMathBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UtsMathBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_tsMath,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UtsMathBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UtsMathBPLibrary_activation_cos, "activation_cos" }, // 4112889613
		{ &Z_Construct_UFunction_UtsMathBPLibrary_activation_power, "activation_power" }, // 3564969306
		{ &Z_Construct_UFunction_UtsMathBPLibrary_activation_sigmoid, "activation_sigmoid" }, // 3230298012
		{ &Z_Construct_UFunction_UtsMathBPLibrary_cartesian_to_spherical, "cartesian_to_spherical" }, // 1534716830
		{ &Z_Construct_UFunction_UtsMathBPLibrary_clamp_vector, "clamp_vector" }, // 1597328699
		{ &Z_Construct_UFunction_UtsMathBPLibrary_float_average, "float_average" }, // 139796550
		{ &Z_Construct_UFunction_UtsMathBPLibrary_float_sum, "float_sum" }, // 1540795215
		{ &Z_Construct_UFunction_UtsMathBPLibrary_float_weighted_average, "float_weighted_average" }, // 672950975
		{ &Z_Construct_UFunction_UtsMathBPLibrary_get_cumulative_distribution, "get_cumulative_distribution" }, // 4005040692
		{ &Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_cumulative_distribution, "get_inverse_cumulative_distribution" }, // 938859906
		{ &Z_Construct_UFunction_UtsMathBPLibrary_get_inverse_probability_normal, "get_inverse_probability_normal" }, // 2168586427
		{ &Z_Construct_UFunction_UtsMathBPLibrary_get_probability_normal, "get_probability_normal" }, // 1596233270
		{ &Z_Construct_UFunction_UtsMathBPLibrary_int_cum_sum, "int_cum_sum" }, // 235672039
		{ &Z_Construct_UFunction_UtsMathBPLibrary_int_sum, "int_sum" }, // 3720513041
		{ &Z_Construct_UFunction_UtsMathBPLibrary_is_point_in_sphere, "is_point_in_sphere" }, // 390745104
		{ &Z_Construct_UFunction_UtsMathBPLibrary_jitter_vector, "jitter_vector" }, // 2638859935
		{ &Z_Construct_UFunction_UtsMathBPLibrary_negate_float, "negate_float" }, // 1976138318
		{ &Z_Construct_UFunction_UtsMathBPLibrary_negate_int, "negate_int" }, // 3312753173
		{ &Z_Construct_UFunction_UtsMathBPLibrary_odd_sphere, "odd_sphere" }, // 3795248365
		{ &Z_Construct_UFunction_UtsMathBPLibrary_plus_minus, "plus_minus" }, // 2835356102
		{ &Z_Construct_UFunction_UtsMathBPLibrary_random_normal, "random_normal" }, // 3023222827
		{ &Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_cube, "random_point_in_cube" }, // 3620894293
		{ &Z_Construct_UFunction_UtsMathBPLibrary_random_point_in_sphere, "random_point_in_sphere" }, // 2602561115
		{ &Z_Construct_UFunction_UtsMathBPLibrary_random_sphere, "random_sphere" }, // 3993249502
		{ &Z_Construct_UFunction_UtsMathBPLibrary_shortest_vector, "shortest_vector" }, // 3554975308
		{ &Z_Construct_UFunction_UtsMathBPLibrary_signal_sawtooth, "signal_sawtooth" }, // 260657683
		{ &Z_Construct_UFunction_UtsMathBPLibrary_signal_sinusoid, "signal_sinusoid" }, // 3641915861
		{ &Z_Construct_UFunction_UtsMathBPLibrary_signal_square, "signal_square" }, // 1052405668
		{ &Z_Construct_UFunction_UtsMathBPLibrary_signal_triangle, "signal_triangle" }, // 2840307778
		{ &Z_Construct_UFunction_UtsMathBPLibrary_spherical_to_cartesian, "spherical_to_cartesian" }, // 2063899253
		{ &Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_power, "two_point_spline_power" }, // 1474079725
		{ &Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sigmoid, "two_point_spline_sigmoid" }, // 3395760024
		{ &Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_sinusoid, "two_point_spline_sinusoid" }, // 241826227
		{ &Z_Construct_UFunction_UtsMathBPLibrary_two_point_spline_smoothramp, "two_point_spline_smoothramp" }, // 4115504980
		{ &Z_Construct_UFunction_UtsMathBPLibrary_uniform_cube, "uniform_cube" }, // 1400796279
		{ &Z_Construct_UFunction_UtsMathBPLibrary_uniform_sphere, "uniform_sphere" }, // 992888826
		{ &Z_Construct_UFunction_UtsMathBPLibrary_uniform_square, "uniform_square" }, // 3490900569
		{ &Z_Construct_UFunction_UtsMathBPLibrary_vector_magnitude_sum, "vector_magnitude_sum" }, // 1014702479
		{ &Z_Construct_UFunction_UtsMathBPLibrary_vector_sum, "vector_sum" }, // 1937918336
		{ &Z_Construct_UFunction_UtsMathBPLibrary_vector_weighted_average, "vector_weighted_average" }, // 4258989341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UtsMathBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "tsMathBPLibrary.h" },
		{ "ModuleRelativePath", "Public/tsMathBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UtsMathBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UtsMathBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UtsMathBPLibrary_Statics::ClassParams = {
		&UtsMathBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UtsMathBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UtsMathBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UtsMathBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UtsMathBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UtsMathBPLibrary.OuterSingleton, Z_Construct_UClass_UtsMathBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UtsMathBPLibrary.OuterSingleton;
	}
	template<> TSMATH_API UClass* StaticClass<UtsMathBPLibrary>()
	{
		return UtsMathBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UtsMathBPLibrary);
	struct Z_CompiledInDeferFile_FID_tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UtsMathBPLibrary, UtsMathBPLibrary::StaticClass, TEXT("UtsMathBPLibrary"), &Z_Registration_Info_UClass_UtsMathBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UtsMathBPLibrary), 4193265099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_451949482(TEXT("/Script/tsMath"),
		Z_CompiledInDeferFile_FID_tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
