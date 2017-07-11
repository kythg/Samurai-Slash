#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmAnimationCurve
struct  FsmAnimationCurve_t326747561  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve HutongGames.PlayMaker.FsmAnimationCurve::curve
	AnimationCurve_t3306541151 * ___curve_0;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(FsmAnimationCurve_t326747561, ___curve_0)); }
	inline AnimationCurve_t3306541151 * get_curve_0() const { return ___curve_0; }
	inline AnimationCurve_t3306541151 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(AnimationCurve_t3306541151 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier(&___curve_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
