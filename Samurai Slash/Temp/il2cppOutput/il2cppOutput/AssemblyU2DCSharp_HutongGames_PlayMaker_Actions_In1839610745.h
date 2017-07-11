#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.IntSwitch
struct  IntSwitch_t1839610745  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.IntSwitch::intVariable
	FsmInt_t1273009179 * ___intVariable_11;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.IntSwitch::compareTo
	FsmIntU5BU5D_t2637547802* ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.IntSwitch::sendEvent
	FsmEventU5BU5D_t287863993* ___sendEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.IntSwitch::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_intVariable_11() { return static_cast<int32_t>(offsetof(IntSwitch_t1839610745, ___intVariable_11)); }
	inline FsmInt_t1273009179 * get_intVariable_11() const { return ___intVariable_11; }
	inline FsmInt_t1273009179 ** get_address_of_intVariable_11() { return &___intVariable_11; }
	inline void set_intVariable_11(FsmInt_t1273009179 * value)
	{
		___intVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___intVariable_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(IntSwitch_t1839610745, ___compareTo_12)); }
	inline FsmIntU5BU5D_t2637547802* get_compareTo_12() const { return ___compareTo_12; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmIntU5BU5D_t2637547802* value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(IntSwitch_t1839610745, ___sendEvent_13)); }
	inline FsmEventU5BU5D_t287863993* get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEventU5BU5D_t287863993** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEventU5BU5D_t287863993* value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(IntSwitch_t1839610745, ___everyFrame_14)); }
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
