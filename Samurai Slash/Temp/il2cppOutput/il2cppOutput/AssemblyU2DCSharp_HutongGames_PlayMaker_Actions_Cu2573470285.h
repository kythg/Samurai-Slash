#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Cu1654913835.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Cu2535927234.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CurveFloat
struct  CurveFloat_t2573470285  : public CurveFsmAction_t1654913835
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.CurveFloat::floatVariable
	FsmFloat_t937133978 * ___floatVariable_35;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.CurveFloat::fromValue
	FsmFloat_t937133978 * ___fromValue_36;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.CurveFloat::toValue
	FsmFloat_t937133978 * ___toValue_37;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.CurveFloat::animCurve
	FsmAnimationCurve_t326747561 * ___animCurve_38;
	// HutongGames.PlayMaker.Actions.CurveFsmAction/Calculation HutongGames.PlayMaker.Actions.CurveFloat::calculation
	int32_t ___calculation_39;
	// System.Boolean HutongGames.PlayMaker.Actions.CurveFloat::finishInNextStep
	bool ___finishInNextStep_40;

public:
	inline static int32_t get_offset_of_floatVariable_35() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___floatVariable_35)); }
	inline FsmFloat_t937133978 * get_floatVariable_35() const { return ___floatVariable_35; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_35() { return &___floatVariable_35; }
	inline void set_floatVariable_35(FsmFloat_t937133978 * value)
	{
		___floatVariable_35 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_35, value);
	}

	inline static int32_t get_offset_of_fromValue_36() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___fromValue_36)); }
	inline FsmFloat_t937133978 * get_fromValue_36() const { return ___fromValue_36; }
	inline FsmFloat_t937133978 ** get_address_of_fromValue_36() { return &___fromValue_36; }
	inline void set_fromValue_36(FsmFloat_t937133978 * value)
	{
		___fromValue_36 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_36, value);
	}

	inline static int32_t get_offset_of_toValue_37() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___toValue_37)); }
	inline FsmFloat_t937133978 * get_toValue_37() const { return ___toValue_37; }
	inline FsmFloat_t937133978 ** get_address_of_toValue_37() { return &___toValue_37; }
	inline void set_toValue_37(FsmFloat_t937133978 * value)
	{
		___toValue_37 = value;
		Il2CppCodeGenWriteBarrier(&___toValue_37, value);
	}

	inline static int32_t get_offset_of_animCurve_38() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___animCurve_38)); }
	inline FsmAnimationCurve_t326747561 * get_animCurve_38() const { return ___animCurve_38; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_animCurve_38() { return &___animCurve_38; }
	inline void set_animCurve_38(FsmAnimationCurve_t326747561 * value)
	{
		___animCurve_38 = value;
		Il2CppCodeGenWriteBarrier(&___animCurve_38, value);
	}

	inline static int32_t get_offset_of_calculation_39() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___calculation_39)); }
	inline int32_t get_calculation_39() const { return ___calculation_39; }
	inline int32_t* get_address_of_calculation_39() { return &___calculation_39; }
	inline void set_calculation_39(int32_t value)
	{
		___calculation_39 = value;
	}

	inline static int32_t get_offset_of_finishInNextStep_40() { return static_cast<int32_t>(offsetof(CurveFloat_t2573470285, ___finishInNextStep_40)); }
	inline bool get_finishInNextStep_40() const { return ___finishInNextStep_40; }
	inline bool* get_address_of_finishInNextStep_40() { return &___finishInNextStep_40; }
	inline void set_finishInNextStep_40(bool value)
	{
		___finishInNextStep_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
