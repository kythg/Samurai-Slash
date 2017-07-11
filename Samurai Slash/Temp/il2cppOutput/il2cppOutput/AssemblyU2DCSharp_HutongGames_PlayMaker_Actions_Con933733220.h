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

// HutongGames.PlayMaker.Actions.ConvertSecondsToString
struct  ConvertSecondsToString_t933733220  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ConvertSecondsToString::secondsVariable
	FsmFloat_t937133978 * ___secondsVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertSecondsToString::stringVariable
	FsmString_t2414474701 * ___stringVariable_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertSecondsToString::format
	FsmString_t2414474701 * ___format_13;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertSecondsToString::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_secondsVariable_11() { return static_cast<int32_t>(offsetof(ConvertSecondsToString_t933733220, ___secondsVariable_11)); }
	inline FsmFloat_t937133978 * get_secondsVariable_11() const { return ___secondsVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_secondsVariable_11() { return &___secondsVariable_11; }
	inline void set_secondsVariable_11(FsmFloat_t937133978 * value)
	{
		___secondsVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___secondsVariable_11, value);
	}

	inline static int32_t get_offset_of_stringVariable_12() { return static_cast<int32_t>(offsetof(ConvertSecondsToString_t933733220, ___stringVariable_12)); }
	inline FsmString_t2414474701 * get_stringVariable_12() const { return ___stringVariable_12; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_12() { return &___stringVariable_12; }
	inline void set_stringVariable_12(FsmString_t2414474701 * value)
	{
		___stringVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_12, value);
	}

	inline static int32_t get_offset_of_format_13() { return static_cast<int32_t>(offsetof(ConvertSecondsToString_t933733220, ___format_13)); }
	inline FsmString_t2414474701 * get_format_13() const { return ___format_13; }
	inline FsmString_t2414474701 ** get_address_of_format_13() { return &___format_13; }
	inline void set_format_13(FsmString_t2414474701 * value)
	{
		___format_13 = value;
		Il2CppCodeGenWriteBarrier(&___format_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(ConvertSecondsToString_t933733220, ___everyFrame_14)); }
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
