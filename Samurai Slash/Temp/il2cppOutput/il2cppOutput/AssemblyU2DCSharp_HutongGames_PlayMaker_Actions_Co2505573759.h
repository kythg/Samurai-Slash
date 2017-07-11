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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertBoolToString
struct  ConvertBoolToString_t2505573759  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ConvertBoolToString::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertBoolToString::stringVariable
	FsmString_t2414474701 * ___stringVariable_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertBoolToString::falseString
	FsmString_t2414474701 * ___falseString_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertBoolToString::trueString
	FsmString_t2414474701 * ___trueString_14;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertBoolToString::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(ConvertBoolToString_t2505573759, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_stringVariable_12() { return static_cast<int32_t>(offsetof(ConvertBoolToString_t2505573759, ___stringVariable_12)); }
	inline FsmString_t2414474701 * get_stringVariable_12() const { return ___stringVariable_12; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_12() { return &___stringVariable_12; }
	inline void set_stringVariable_12(FsmString_t2414474701 * value)
	{
		___stringVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_12, value);
	}

	inline static int32_t get_offset_of_falseString_13() { return static_cast<int32_t>(offsetof(ConvertBoolToString_t2505573759, ___falseString_13)); }
	inline FsmString_t2414474701 * get_falseString_13() const { return ___falseString_13; }
	inline FsmString_t2414474701 ** get_address_of_falseString_13() { return &___falseString_13; }
	inline void set_falseString_13(FsmString_t2414474701 * value)
	{
		___falseString_13 = value;
		Il2CppCodeGenWriteBarrier(&___falseString_13, value);
	}

	inline static int32_t get_offset_of_trueString_14() { return static_cast<int32_t>(offsetof(ConvertBoolToString_t2505573759, ___trueString_14)); }
	inline FsmString_t2414474701 * get_trueString_14() const { return ___trueString_14; }
	inline FsmString_t2414474701 ** get_address_of_trueString_14() { return &___trueString_14; }
	inline void set_trueString_14(FsmString_t2414474701 * value)
	{
		___trueString_14 = value;
		Il2CppCodeGenWriteBarrier(&___trueString_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(ConvertBoolToString_t2505573759, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
