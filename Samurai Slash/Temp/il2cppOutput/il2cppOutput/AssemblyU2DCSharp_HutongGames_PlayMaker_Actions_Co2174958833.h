#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertFloatToString
struct  ConvertFloatToString_t2174958833  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ConvertFloatToString::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertFloatToString::stringVariable
	FsmString_t2414474701 * ___stringVariable_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertFloatToString::format
	FsmString_t2414474701 * ___format_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertFloatToString::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(ConvertFloatToString_t2174958833, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_stringVariable_12() { return static_cast<int32_t>(offsetof(ConvertFloatToString_t2174958833, ___stringVariable_12)); }
	inline FsmString_t2414474701 * get_stringVariable_12() const { return ___stringVariable_12; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_12() { return &___stringVariable_12; }
	inline void set_stringVariable_12(FsmString_t2414474701 * value)
	{
		___stringVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_12, value);
	}

	inline static int32_t get_offset_of_format_13() { return static_cast<int32_t>(offsetof(ConvertFloatToString_t2174958833, ___format_13)); }
	inline FsmString_t2414474701 * get_format_13() const { return ___format_13; }
	inline FsmString_t2414474701 ** get_address_of_format_13() { return &___format_13; }
	inline void set_format_13(FsmString_t2414474701 * value)
	{
		___format_13 = value;
		Il2CppCodeGenWriteBarrier(&___format_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ConvertFloatToString_t2174958833, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
