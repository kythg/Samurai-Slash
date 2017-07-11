#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatAddMultiple
struct  FloatAddMultiple_t2301168955  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.FloatAddMultiple::floatVariables
	FsmFloatU5BU5D_t4177556671* ___floatVariables_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatAddMultiple::addTo
	FsmFloat_t937133978 * ___addTo_12;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatAddMultiple::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_floatVariables_11() { return static_cast<int32_t>(offsetof(FloatAddMultiple_t2301168955, ___floatVariables_11)); }
	inline FsmFloatU5BU5D_t4177556671* get_floatVariables_11() const { return ___floatVariables_11; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_floatVariables_11() { return &___floatVariables_11; }
	inline void set_floatVariables_11(FsmFloatU5BU5D_t4177556671* value)
	{
		___floatVariables_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariables_11, value);
	}

	inline static int32_t get_offset_of_addTo_12() { return static_cast<int32_t>(offsetof(FloatAddMultiple_t2301168955, ___addTo_12)); }
	inline FsmFloat_t937133978 * get_addTo_12() const { return ___addTo_12; }
	inline FsmFloat_t937133978 ** get_address_of_addTo_12() { return &___addTo_12; }
	inline void set_addTo_12(FsmFloat_t937133978 * value)
	{
		___addTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___addTo_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(FloatAddMultiple_t2301168955, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
