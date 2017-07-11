#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "PlayMaker_HutongGames_PlayMaker_MouseButton1622948991.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetMouseButtonDown
struct  GetMouseButtonDown_t3550553713  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.MouseButton HutongGames.PlayMaker.Actions.GetMouseButtonDown::button
	int32_t ___button_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetMouseButtonDown::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetMouseButtonDown::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetMouseButtonDown::inUpdateOnly
	bool ___inUpdateOnly_14;

public:
	inline static int32_t get_offset_of_button_11() { return static_cast<int32_t>(offsetof(GetMouseButtonDown_t3550553713, ___button_11)); }
	inline int32_t get_button_11() const { return ___button_11; }
	inline int32_t* get_address_of_button_11() { return &___button_11; }
	inline void set_button_11(int32_t value)
	{
		___button_11 = value;
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(GetMouseButtonDown_t3550553713, ___sendEvent_12)); }
	inline FsmEvent_t1258573736 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmEvent_t1258573736 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(GetMouseButtonDown_t3550553713, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_inUpdateOnly_14() { return static_cast<int32_t>(offsetof(GetMouseButtonDown_t3550553713, ___inUpdateOnly_14)); }
	inline bool get_inUpdateOnly_14() const { return ___inUpdateOnly_14; }
	inline bool* get_address_of_inUpdateOnly_14() { return &___inUpdateOnly_14; }
	inline void set_inUpdateOnly_14(bool value)
	{
		___inUpdateOnly_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
