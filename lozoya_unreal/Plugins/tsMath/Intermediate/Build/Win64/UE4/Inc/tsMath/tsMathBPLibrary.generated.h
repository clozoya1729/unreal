// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TSMATH_tsMathBPLibrary_generated_h
#error "tsMathBPLibrary.generated.h already included, missing '#pragma once' in tsMathBPLibrary.h"
#endif
#define TSMATH_tsMathBPLibrary_generated_h

#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_SPARSE_DATA
#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execjitter_vector); \
	DECLARE_FUNCTION(execplus_minus); \
	DECLARE_FUNCTION(execnegate_int); \
	DECLARE_FUNCTION(execnegate_float); \
	DECLARE_FUNCTION(exectwo_point_spline_smoothramp); \
	DECLARE_FUNCTION(exectwo_point_spline_sinusoid); \
	DECLARE_FUNCTION(exectwo_point_spline_sigmoid); \
	DECLARE_FUNCTION(exectwo_point_spline_power); \
	DECLARE_FUNCTION(execactivation_sigmoid); \
	DECLARE_FUNCTION(execactivation_power); \
	DECLARE_FUNCTION(execactivation_cos); \
	DECLARE_FUNCTION(execsignal_sawtooth); \
	DECLARE_FUNCTION(execsignal_triangle); \
	DECLARE_FUNCTION(execsignal_square); \
	DECLARE_FUNCTION(execsignal_sinusoid); \
	DECLARE_FUNCTION(execvector_magnitude_sum); \
	DECLARE_FUNCTION(execvector_sum); \
	DECLARE_FUNCTION(execvector_weighted_average); \
	DECLARE_FUNCTION(execfloat_weighted_average); \
	DECLARE_FUNCTION(execfloat_average); \
	DECLARE_FUNCTION(execfloat_sum); \
	DECLARE_FUNCTION(execint_sum); \
	DECLARE_FUNCTION(execint_cum_sum); \
	DECLARE_FUNCTION(execget_inverse_probability_normal); \
	DECLARE_FUNCTION(execget_inverse_cumulative_distribution); \
	DECLARE_FUNCTION(execget_cumulative_distribution); \
	DECLARE_FUNCTION(execget_probability_normal); \
	DECLARE_FUNCTION(execrandom_normal); \
	DECLARE_FUNCTION(execspherical_to_cartesian); \
	DECLARE_FUNCTION(execcartesian_to_spherical); \
	DECLARE_FUNCTION(execis_point_in_sphere); \
	DECLARE_FUNCTION(execodd_sphere); \
	DECLARE_FUNCTION(execuniform_sphere); \
	DECLARE_FUNCTION(execuniform_cube); \
	DECLARE_FUNCTION(execuniform_square); \
	DECLARE_FUNCTION(execrandom_sphere); \
	DECLARE_FUNCTION(execrandom_point_in_sphere); \
	DECLARE_FUNCTION(execrandom_point_in_cube); \
	DECLARE_FUNCTION(execshortest_vector); \
	DECLARE_FUNCTION(execclamp_vector);


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execjitter_vector); \
	DECLARE_FUNCTION(execplus_minus); \
	DECLARE_FUNCTION(execnegate_int); \
	DECLARE_FUNCTION(execnegate_float); \
	DECLARE_FUNCTION(exectwo_point_spline_smoothramp); \
	DECLARE_FUNCTION(exectwo_point_spline_sinusoid); \
	DECLARE_FUNCTION(exectwo_point_spline_sigmoid); \
	DECLARE_FUNCTION(exectwo_point_spline_power); \
	DECLARE_FUNCTION(execactivation_sigmoid); \
	DECLARE_FUNCTION(execactivation_power); \
	DECLARE_FUNCTION(execactivation_cos); \
	DECLARE_FUNCTION(execsignal_sawtooth); \
	DECLARE_FUNCTION(execsignal_triangle); \
	DECLARE_FUNCTION(execsignal_square); \
	DECLARE_FUNCTION(execsignal_sinusoid); \
	DECLARE_FUNCTION(execvector_magnitude_sum); \
	DECLARE_FUNCTION(execvector_sum); \
	DECLARE_FUNCTION(execvector_weighted_average); \
	DECLARE_FUNCTION(execfloat_weighted_average); \
	DECLARE_FUNCTION(execfloat_average); \
	DECLARE_FUNCTION(execfloat_sum); \
	DECLARE_FUNCTION(execint_sum); \
	DECLARE_FUNCTION(execint_cum_sum); \
	DECLARE_FUNCTION(execget_inverse_probability_normal); \
	DECLARE_FUNCTION(execget_inverse_cumulative_distribution); \
	DECLARE_FUNCTION(execget_cumulative_distribution); \
	DECLARE_FUNCTION(execget_probability_normal); \
	DECLARE_FUNCTION(execrandom_normal); \
	DECLARE_FUNCTION(execspherical_to_cartesian); \
	DECLARE_FUNCTION(execcartesian_to_spherical); \
	DECLARE_FUNCTION(execis_point_in_sphere); \
	DECLARE_FUNCTION(execodd_sphere); \
	DECLARE_FUNCTION(execuniform_sphere); \
	DECLARE_FUNCTION(execuniform_cube); \
	DECLARE_FUNCTION(execuniform_square); \
	DECLARE_FUNCTION(execrandom_sphere); \
	DECLARE_FUNCTION(execrandom_point_in_sphere); \
	DECLARE_FUNCTION(execrandom_point_in_cube); \
	DECLARE_FUNCTION(execshortest_vector); \
	DECLARE_FUNCTION(execclamp_vector);


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUtsMathBPLibrary(); \
	friend struct Z_Construct_UClass_UtsMathBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UtsMathBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/tsMath"), NO_API) \
	DECLARE_SERIALIZER(UtsMathBPLibrary)


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUtsMathBPLibrary(); \
	friend struct Z_Construct_UClass_UtsMathBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UtsMathBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/tsMath"), NO_API) \
	DECLARE_SERIALIZER(UtsMathBPLibrary)


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UtsMathBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UtsMathBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UtsMathBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UtsMathBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UtsMathBPLibrary(UtsMathBPLibrary&&); \
	NO_API UtsMathBPLibrary(const UtsMathBPLibrary&); \
public:


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UtsMathBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UtsMathBPLibrary(UtsMathBPLibrary&&); \
	NO_API UtsMathBPLibrary(const UtsMathBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UtsMathBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UtsMathBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UtsMathBPLibrary)


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_25_PROLOG
#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_SPARSE_DATA \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_RPC_WRAPPERS \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_INCLASS \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_SPARSE_DATA \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class tsMathBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TSMATH_API UClass* StaticClass<class UtsMathBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID tsCorePlugins_Plugins_tsMath_Source_tsMath_Public_tsMathBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
