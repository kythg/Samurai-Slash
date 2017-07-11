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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatAdd
struct  FloatAdd_t628363259  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatAdd::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatAdd::add
	FsmFloat_t937133978 * ___add_12;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatAdd::everyFrame
	bool ___everyFrame_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatAdd::perSecond
	bool ___perSecond_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(FloatAdd_t628363259, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_add_12() { return static_cast<int32_t>(offsetof(FloatAdd_t628363259, ___add_12)); }
	inline FsmFloat_t937133978 * get_add_12() const { return ___add_12; }
	inline FsmFloat_t937133978 ** get_address_of_add_12() { return &___add_12; }
	inline void set_add_12(FsmFloat_t937133978 * value)
	{
		___add_12 = value;
		Il2CppCodeGenWriteBarrier(&___add_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(FloatAdd_t628363259, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}

	inline static int32_t get_offset_of_perSecond_14() { return static_cast<int32_t>(offsetof(FloatAdd_t628363259, ___perSecond_14)); }
	inline bool get_perSecond_14() const { return ___perSecond_14; }
	inline bool* get_address_of_perSecond_14() { return &___perSecond_14; }
	inline void set_perSecond_14(bool value)
	{
		___perSecond_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
