#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea2453967042.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EaseFloat
struct  EaseFloat_t1021472868  : public EaseFsmAction_t2453967042
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFloat::fromValue
	FsmFloat_t937133978 * ___fromValue_32;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFloat::toValue
	FsmFloat_t937133978 * ___toValue_33;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.EaseFloat::floatVariable
	FsmFloat_t937133978 * ___floatVariable_34;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseFloat::finishInNextStep
	bool ___finishInNextStep_35;

public:
	inline static int32_t get_offset_of_fromValue_32() { return static_cast<int32_t>(offsetof(EaseFloat_t1021472868, ___fromValue_32)); }
	inline FsmFloat_t937133978 * get_fromValue_32() const { return ___fromValue_32; }
	inline FsmFloat_t937133978 ** get_address_of_fromValue_32() { return &___fromValue_32; }
	inline void set_fromValue_32(FsmFloat_t937133978 * value)
	{
		___fromValue_32 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_32, value);
	}

	inline static int32_t get_offset_of_toValue_33() { return static_cast<int32_t>(offsetof(EaseFloat_t1021472868, ___toValue_33)); }
	inline FsmFloat_t937133978 * get_toValue_33() const { return ___toValue_33; }
	inline FsmFloat_t937133978 ** get_address_of_toValue_33() { return &___toValue_33; }
	inline void set_toValue_33(FsmFloat_t937133978 * value)
	{
		___toValue_33 = value;
		Il2CppCodeGenWriteBarrier(&___toValue_33, value);
	}

	inline static int32_t get_offset_of_floatVariable_34() { return static_cast<int32_t>(offsetof(EaseFloat_t1021472868, ___floatVariable_34)); }
	inline FsmFloat_t937133978 * get_floatVariable_34() const { return ___floatVariable_34; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_34() { return &___floatVariable_34; }
	inline void set_floatVariable_34(FsmFloat_t937133978 * value)
	{
		___floatVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_34, value);
	}

	inline static int32_t get_offset_of_finishInNextStep_35() { return static_cast<int32_t>(offsetof(EaseFloat_t1021472868, ___finishInNextStep_35)); }
	inline bool get_finishInNextStep_35() const { return ___finishInNextStep_35; }
	inline bool* get_address_of_finishInNextStep_35() { return &___finishInNextStep_35; }
	inline void set_finishInNextStep_35(bool value)
	{
		___finishInNextStep_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
