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
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FloatSwitch
struct  FloatSwitch_t3594966760  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.FloatSwitch::floatVariable
	FsmFloat_t937133978 * ___floatVariable_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.FloatSwitch::lessThan
	FsmFloatU5BU5D_t4177556671* ___lessThan_12;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.FloatSwitch::sendEvent
	FsmEventU5BU5D_t287863993* ___sendEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FloatSwitch::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_floatVariable_11() { return static_cast<int32_t>(offsetof(FloatSwitch_t3594966760, ___floatVariable_11)); }
	inline FsmFloat_t937133978 * get_floatVariable_11() const { return ___floatVariable_11; }
	inline FsmFloat_t937133978 ** get_address_of_floatVariable_11() { return &___floatVariable_11; }
	inline void set_floatVariable_11(FsmFloat_t937133978 * value)
	{
		___floatVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___floatVariable_11, value);
	}

	inline static int32_t get_offset_of_lessThan_12() { return static_cast<int32_t>(offsetof(FloatSwitch_t3594966760, ___lessThan_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_lessThan_12() const { return ___lessThan_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_lessThan_12() { return &___lessThan_12; }
	inline void set_lessThan_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___lessThan_12 = value;
		Il2CppCodeGenWriteBarrier(&___lessThan_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(FloatSwitch_t3594966760, ___sendEvent_13)); }
	inline FsmEventU5BU5D_t287863993* get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEventU5BU5D_t287863993** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEventU5BU5D_t287863993* value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(FloatSwitch_t3594966760, ___everyFrame_14)); }
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
