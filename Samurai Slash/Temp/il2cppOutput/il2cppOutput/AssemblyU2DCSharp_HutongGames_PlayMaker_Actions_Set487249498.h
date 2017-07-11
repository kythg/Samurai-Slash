#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetStringValue
struct  SetStringValue_t487249498  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetStringValue::stringVariable
	FsmString_t2414474701 * ___stringVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetStringValue::stringValue
	FsmString_t2414474701 * ___stringValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetStringValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_stringVariable_11() { return static_cast<int32_t>(offsetof(SetStringValue_t487249498, ___stringVariable_11)); }
	inline FsmString_t2414474701 * get_stringVariable_11() const { return ___stringVariable_11; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_11() { return &___stringVariable_11; }
	inline void set_stringVariable_11(FsmString_t2414474701 * value)
	{
		___stringVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_11, value);
	}

	inline static int32_t get_offset_of_stringValue_12() { return static_cast<int32_t>(offsetof(SetStringValue_t487249498, ___stringValue_12)); }
	inline FsmString_t2414474701 * get_stringValue_12() const { return ___stringValue_12; }
	inline FsmString_t2414474701 ** get_address_of_stringValue_12() { return &___stringValue_12; }
	inline void set_stringValue_12(FsmString_t2414474701 * value)
	{
		___stringValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetStringValue_t487249498, ___everyFrame_13)); }
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
