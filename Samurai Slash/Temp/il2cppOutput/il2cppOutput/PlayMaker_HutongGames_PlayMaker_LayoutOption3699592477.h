#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_LayoutOption_Layou4193526299.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.LayoutOption
struct  LayoutOption_t3699592477  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.LayoutOption/LayoutOptionType HutongGames.PlayMaker.LayoutOption::option
	int32_t ___option_0;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.LayoutOption::floatParam
	FsmFloat_t937133978 * ___floatParam_1;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.LayoutOption::boolParam
	FsmBool_t664485696 * ___boolParam_2;

public:
	inline static int32_t get_offset_of_option_0() { return static_cast<int32_t>(offsetof(LayoutOption_t3699592477, ___option_0)); }
	inline int32_t get_option_0() const { return ___option_0; }
	inline int32_t* get_address_of_option_0() { return &___option_0; }
	inline void set_option_0(int32_t value)
	{
		___option_0 = value;
	}

	inline static int32_t get_offset_of_floatParam_1() { return static_cast<int32_t>(offsetof(LayoutOption_t3699592477, ___floatParam_1)); }
	inline FsmFloat_t937133978 * get_floatParam_1() const { return ___floatParam_1; }
	inline FsmFloat_t937133978 ** get_address_of_floatParam_1() { return &___floatParam_1; }
	inline void set_floatParam_1(FsmFloat_t937133978 * value)
	{
		___floatParam_1 = value;
		Il2CppCodeGenWriteBarrier(&___floatParam_1, value);
	}

	inline static int32_t get_offset_of_boolParam_2() { return static_cast<int32_t>(offsetof(LayoutOption_t3699592477, ___boolParam_2)); }
	inline FsmBool_t664485696 * get_boolParam_2() const { return ___boolParam_2; }
	inline FsmBool_t664485696 ** get_address_of_boolParam_2() { return &___boolParam_2; }
	inline void set_boolParam_2(FsmBool_t664485696 * value)
	{
		___boolParam_2 = value;
		Il2CppCodeGenWriteBarrier(&___boolParam_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
