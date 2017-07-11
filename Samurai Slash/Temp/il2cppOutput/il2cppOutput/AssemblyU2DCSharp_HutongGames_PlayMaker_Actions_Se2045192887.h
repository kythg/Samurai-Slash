#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetBoolValue
struct  SetBoolValue_t2045192887  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetBoolValue::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetBoolValue::boolValue
	FsmBool_t664485696 * ___boolValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetBoolValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(SetBoolValue_t2045192887, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_boolValue_12() { return static_cast<int32_t>(offsetof(SetBoolValue_t2045192887, ___boolValue_12)); }
	inline FsmBool_t664485696 * get_boolValue_12() const { return ___boolValue_12; }
	inline FsmBool_t664485696 ** get_address_of_boolValue_12() { return &___boolValue_12; }
	inline void set_boolValue_12(FsmBool_t664485696 * value)
	{
		___boolValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___boolValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetBoolValue_t2045192887, ___everyFrame_13)); }
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
