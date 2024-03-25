// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "tsAerospace/Public/tsAerospaceBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetsAerospaceBPLibrary() {}
// Cross Module References
	TSAEROSPACE_API UClass* Z_Construct_UClass_UtsAerospaceBPLibrary_NoRegister();
	TSAEROSPACE_API UClass* Z_Construct_UClass_UtsAerospaceBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_tsAerospace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UtsAerospaceBPLibrary::execgenerate_orbit_points)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_semimajorAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_eccentricity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inclination);
		P_GET_PROPERTY(FFloatProperty,Z_Param_periapsis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ascension);
		P_GET_STRUCT(FVector,Z_Param_focus);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UtsAerospaceBPLibrary::generate_orbit_points(Z_Param_semimajorAxis,Z_Param_eccentricity,Z_Param_inclination,Z_Param_periapsis,Z_Param_ascension,Z_Param_focus,Z_Param_numberOfPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsAerospaceBPLibrary::execcompute_true_anomaly)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_semimajorAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_eccentricity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gravitationalParameter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tolerance);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxIterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UtsAerospaceBPLibrary::compute_true_anomaly(Z_Param_semimajorAxis,Z_Param_eccentricity,Z_Param_gravitationalParameter,Z_Param_time,Z_Param_tolerance,Z_Param_maxIterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsAerospaceBPLibrary::execkepler_orbit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_semimajorAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_eccentricity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inclination);
		P_GET_PROPERTY(FFloatProperty,Z_Param_periapsis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ascension);
		P_GET_STRUCT(FVector,Z_Param_focus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_trueAnomaly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsAerospaceBPLibrary::kepler_orbit(Z_Param_semimajorAxis,Z_Param_eccentricity,Z_Param_inclination,Z_Param_periapsis,Z_Param_ascension,Z_Param_focus,Z_Param_trueAnomaly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsAerospaceBPLibrary::execaverage_force)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_averageMass);
		P_GET_STRUCT(FVector,Z_Param_averageCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsAerospaceBPLibrary::average_force(Z_Param_averageMass,Z_Param_averageCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UtsAerospaceBPLibrary::execcompute_gravitational_force)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gravitationalConstant);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mass1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mass2);
		P_GET_STRUCT(FVector,Z_Param_position1);
		P_GET_STRUCT(FVector,Z_Param_position2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UtsAerospaceBPLibrary::compute_gravitational_force(Z_Param_gravitationalConstant,Z_Param_mass1,Z_Param_mass2,Z_Param_position1,Z_Param_position2);
		P_NATIVE_END;
	}
	void UtsAerospaceBPLibrary::StaticRegisterNativesUtsAerospaceBPLibrary()
	{
		UClass* Class = UtsAerospaceBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "average_force", &UtsAerospaceBPLibrary::execaverage_force },
			{ "compute_gravitational_force", &UtsAerospaceBPLibrary::execcompute_gravitational_force },
			{ "compute_true_anomaly", &UtsAerospaceBPLibrary::execcompute_true_anomaly },
			{ "generate_orbit_points", &UtsAerospaceBPLibrary::execgenerate_orbit_points },
			{ "kepler_orbit", &UtsAerospaceBPLibrary::execkepler_orbit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics
	{
		struct tsAerospaceBPLibrary_eventaverage_force_Parms
		{
			float averageMass;
			FVector averageCoordinate;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_averageMass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_averageCoordinate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_averageMass = { "averageMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventaverage_force_Parms, averageMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_averageCoordinate = { "averageCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventaverage_force_Parms, averageCoordinate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventaverage_force_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_averageMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_averageCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsAerospace|UniversalGravitation" },
		{ "DisplayName", "Average Gravitational Force" },
		{ "Keywords", "gravitational force" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsAerospaceBPLibrary, nullptr, "average_force", nullptr, nullptr, sizeof(tsAerospaceBPLibrary_eventaverage_force_Parms), Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics
	{
		struct tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms
		{
			float gravitationalConstant;
			float mass1;
			float mass2;
			FVector position1;
			FVector position2;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravitationalConstant;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_gravitationalConstant = { "gravitationalConstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, gravitationalConstant), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_mass1 = { "mass1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, mass1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_mass2 = { "mass2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, mass2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_position1 = { "position1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, position1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_position2 = { "position2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, position2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_gravitationalConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_mass1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_mass2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_position1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_position2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsAerospace|UniversalGravitation" },
		{ "DisplayName", "Gravitational Force" },
		{ "Keywords", "gravitational force" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsAerospaceBPLibrary, nullptr, "compute_gravitational_force", nullptr, nullptr, sizeof(tsAerospaceBPLibrary_eventcompute_gravitational_force_Parms), Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics
	{
		struct tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms
		{
			float semimajorAxis;
			float eccentricity;
			float gravitationalParameter;
			float time;
			float tolerance;
			int32 maxIterations;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_semimajorAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eccentricity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravitationalParameter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tolerance;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_semimajorAxis = { "semimajorAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, semimajorAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_eccentricity = { "eccentricity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, eccentricity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_gravitationalParameter = { "gravitationalParameter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, gravitationalParameter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, tolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_maxIterations = { "maxIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, maxIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_semimajorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_eccentricity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_gravitationalParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_maxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsAerospace|Orbit|Classical (Kepler)" },
		{ "CPP_Default_maxIterations", "10" },
		{ "CPP_Default_tolerance", "0.010000" },
		{ "DisplayName", "Compute True Anomaly" },
		{ "Keywords", "kepler true anomaly" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsAerospaceBPLibrary, nullptr, "compute_true_anomaly", nullptr, nullptr, sizeof(tsAerospaceBPLibrary_eventcompute_true_anomaly_Parms), Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics
	{
		struct tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms
		{
			float semimajorAxis;
			float eccentricity;
			float inclination;
			float periapsis;
			float ascension;
			FVector focus;
			int32 numberOfPoints;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_semimajorAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eccentricity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inclination;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_periapsis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ascension;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_focus;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_semimajorAxis = { "semimajorAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, semimajorAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_eccentricity = { "eccentricity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, eccentricity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_inclination = { "inclination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, inclination), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_periapsis = { "periapsis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, periapsis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ascension = { "ascension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, ascension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_focus = { "focus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, focus), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_numberOfPoints = { "numberOfPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, numberOfPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_semimajorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_eccentricity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_inclination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_periapsis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ascension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_focus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_numberOfPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsAerospace|Orbit|Classical (Kepler)" },
		{ "CPP_Default_numberOfPoints", "100" },
		{ "DisplayName", "Generate Orbit Points" },
		{ "Keywords", "kepler orbit points" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsAerospaceBPLibrary, nullptr, "generate_orbit_points", nullptr, nullptr, sizeof(tsAerospaceBPLibrary_eventgenerate_orbit_points_Parms), Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics
	{
		struct tsAerospaceBPLibrary_eventkepler_orbit_Parms
		{
			float semimajorAxis;
			float eccentricity;
			float inclination;
			float periapsis;
			float ascension;
			FVector focus;
			float trueAnomaly;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_semimajorAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eccentricity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inclination;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_periapsis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ascension;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_focus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_trueAnomaly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_semimajorAxis = { "semimajorAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, semimajorAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_eccentricity = { "eccentricity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, eccentricity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_inclination = { "inclination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, inclination), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_periapsis = { "periapsis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, periapsis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_ascension = { "ascension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, ascension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_focus = { "focus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, focus), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_trueAnomaly = { "trueAnomaly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, trueAnomaly), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(tsAerospaceBPLibrary_eventkepler_orbit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_semimajorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_eccentricity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_inclination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_periapsis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_ascension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_focus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_trueAnomaly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::Function_MetaDataParams[] = {
		{ "Category", "tsAerospace|Orbit|Classical (Kepler)" },
		{ "DisplayName", "Kepler Orbit" },
		{ "Keywords", "kepler orbit" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UtsAerospaceBPLibrary, nullptr, "kepler_orbit", nullptr, nullptr, sizeof(tsAerospaceBPLibrary_eventkepler_orbit_Parms), Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UtsAerospaceBPLibrary_NoRegister()
	{
		return UtsAerospaceBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UtsAerospaceBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_tsAerospace,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UtsAerospaceBPLibrary_average_force, "average_force" }, // 951327330
		{ &Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_gravitational_force, "compute_gravitational_force" }, // 2702782707
		{ &Z_Construct_UFunction_UtsAerospaceBPLibrary_compute_true_anomaly, "compute_true_anomaly" }, // 414290845
		{ &Z_Construct_UFunction_UtsAerospaceBPLibrary_generate_orbit_points, "generate_orbit_points" }, // 1435440580
		{ &Z_Construct_UFunction_UtsAerospaceBPLibrary_kepler_orbit, "kepler_orbit" }, // 2139907414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "tsAerospaceBPLibrary.h" },
		{ "ModuleRelativePath", "Public/tsAerospaceBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UtsAerospaceBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::ClassParams = {
		&UtsAerospaceBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UtsAerospaceBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UtsAerospaceBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UtsAerospaceBPLibrary, 3422010841);
	template<> TSAEROSPACE_API UClass* StaticClass<UtsAerospaceBPLibrary>()
	{
		return UtsAerospaceBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UtsAerospaceBPLibrary(Z_Construct_UClass_UtsAerospaceBPLibrary, &UtsAerospaceBPLibrary::StaticClass, TEXT("/Script/tsAerospace"), TEXT("UtsAerospaceBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UtsAerospaceBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
