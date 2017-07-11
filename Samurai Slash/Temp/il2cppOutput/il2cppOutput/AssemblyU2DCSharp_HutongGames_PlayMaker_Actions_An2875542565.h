#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_An3469388247.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ani322151382.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateFloatV2
struct  AnimateFloatV2_t2875542565  : public AnimateFsmAction_t3469388247
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimateFloatV2::floatVariable
	FsmFloat_t937133978 * ___floatVariable_34;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateFloatV2::animCurve
	FsmAnimationCurve_t326747561 * ___animCurve_35;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateFloatV2::calculation
	int32_t ___calculation_36;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateFloatV2::finishInNextStep
	bool ___finishInNextStep_37;

public:
	inline static int32_t get_offset_of_floatVariable_34() { return static_cast<int32_t>(offsetof(AnimateFloatV2_t2875542565, ___floatVariable_34)); }
	inline FsmFloat_t937133978 * get_floatVariable_34() const { return ___floatVariable_34; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_34() { return &___floatVariable_34; }
	inline void set_floatVariable_34(FsmFloat_t937133978 * value)
	{
		___floatVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_34, value);
	}

	inline static int32_t get_offset_of_animCurve_35() { return static_cast<int32_t>(offsetof(AnimateFloatV2_t2875542565, ___animCurve_35)); }
	inline FsmAnimationCurve_t326747561 * get_animCurve_35() const { return ___animCurve_35; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_animCurve_35() { return &___animCurve_35; }
	inline void set_animCurve_35(FsmAnimationCurve_t326747561 * value)
	{
		___animCurve_35 = value;
		Il2CppCodeGenWriteBarrier(&___animCurve_35, value);
	}

	inline static int32_t get_offset_of_calculation_36() { return static_cast<int32_t>(offsetof(AnimateFloatV2_t2875542565, ___calculation_36)); }
	inline int32_t get_calculation_36() const { return ___calculation_36; }
	inline int32_t* get_address_of_calculation_36() { return &___calculation_36; }
	inline void set_calculation_36(int32_t value)
	{
		___calculation_36 = value;
	}

	inline static int32_t get_offset_of_finishInNextStep_37() { return static_cast<int32_t>(offsetof(AnimateFloatV2_t2875542565, ___finishInNextStep_37)); }
	inline bool get_finishInNextStep_37() const { return ___finishInNextStep_37; }
	inline bool* get_address_of_finishInNextStep_37() { return &___finishInNextStep_37; }
	inline void set_finishInNextStep_37(bool value)
	{
		___finishInNextStep_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
