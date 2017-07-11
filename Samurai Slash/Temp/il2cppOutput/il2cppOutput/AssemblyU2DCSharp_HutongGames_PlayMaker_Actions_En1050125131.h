#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmEnum[]
struct FsmEnumU5BU5D_t2440162814;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EnumSwitch
struct  EnumSwitch_t1050125131  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.EnumSwitch::enumVariable
	FsmEnum_t2808516103 * ___enumVariable_11;
	// HutongGames.PlayMaker.FsmEnum[] HutongGames.PlayMaker.Actions.EnumSwitch::compareTo
	FsmEnumU5BU5D_t2440162814* ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.EnumSwitch::sendEvent
	FsmEventU5BU5D_t287863993* ___sendEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.EnumSwitch::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_enumVariable_11() { return static_cast<int32_t>(offsetof(EnumSwitch_t1050125131, ___enumVariable_11)); }
	inline FsmEnum_t2808516103 * get_enumVariable_11() const { return ___enumVariable_11; }
	inline FsmEnum_t2808516103 ** get_address_of_enumVariable_11() { return &___enumVariable_11; }
	inline void set_enumVariable_11(FsmEnum_t2808516103 * value)
	{
		___enumVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___enumVariable_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(EnumSwitch_t1050125131, ___compareTo_12)); }
	inline FsmEnumU5BU5D_t2440162814* get_compareTo_12() const { return ___compareTo_12; }
	inline FsmEnumU5BU5D_t2440162814** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmEnumU5BU5D_t2440162814* value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(EnumSwitch_t1050125131, ___sendEvent_13)); }
	inline FsmEventU5BU5D_t287863993* get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEventU5BU5D_t287863993** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEventU5BU5D_t287863993* value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(EnumSwitch_t1050125131, ___everyFrame_14)); }
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
