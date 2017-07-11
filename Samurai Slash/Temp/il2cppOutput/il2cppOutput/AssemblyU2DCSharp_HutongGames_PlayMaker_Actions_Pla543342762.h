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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.PlayerPrefsHasKey
struct  PlayerPrefsHasKey_t543342762  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.PlayerPrefsHasKey::key
	FsmString_t2414474701 * ___key_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.PlayerPrefsHasKey::variable
	FsmBool_t664485696 * ___variable_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayerPrefsHasKey::trueEvent
	FsmEvent_t1258573736 * ___trueEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.PlayerPrefsHasKey::falseEvent
	FsmEvent_t1258573736 * ___falseEvent_14;

public:
	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(PlayerPrefsHasKey_t543342762, ___key_11)); }
	inline FsmString_t2414474701 * get_key_11() const { return ___key_11; }
	inline FsmString_t2414474701 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(FsmString_t2414474701 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier(&___key_11, value);
	}

	inline static int32_t get_offset_of_variable_12() { return static_cast<int32_t>(offsetof(PlayerPrefsHasKey_t543342762, ___variable_12)); }
	inline FsmBool_t664485696 * get_variable_12() const { return ___variable_12; }
	inline FsmBool_t664485696 ** get_address_of_variable_12() { return &___variable_12; }
	inline void set_variable_12(FsmBool_t664485696 * value)
	{
		___variable_12 = value;
		Il2CppCodeGenWriteBarrier(&___variable_12, value);
	}

	inline static int32_t get_offset_of_trueEvent_13() { return static_cast<int32_t>(offsetof(PlayerPrefsHasKey_t543342762, ___trueEvent_13)); }
	inline FsmEvent_t1258573736 * get_trueEvent_13() const { return ___trueEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_trueEvent_13() { return &___trueEvent_13; }
	inline void set_trueEvent_13(FsmEvent_t1258573736 * value)
	{
		___trueEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___trueEvent_13, value);
	}

	inline static int32_t get_offset_of_falseEvent_14() { return static_cast<int32_t>(offsetof(PlayerPrefsHasKey_t543342762, ___falseEvent_14)); }
	inline FsmEvent_t1258573736 * get_falseEvent_14() const { return ___falseEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_falseEvent_14() { return &___falseEvent_14; }
	inline void set_falseEvent_14(FsmEvent_t1258573736 * value)
	{
		___falseEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___falseEvent_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
