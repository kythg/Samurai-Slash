#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.TouchEvent
struct  TouchEvent_t3098243043  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchEvent::fingerId
	FsmInt_t1273009179 * ___fingerId_11;
	// UnityEngine.TouchPhase HutongGames.PlayMaker.Actions.TouchEvent::touchPhase
	int32_t ___touchPhase_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchEvent::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchEvent::storeFingerId
	FsmInt_t1273009179 * ___storeFingerId_14;

public:
	inline static int32_t get_offset_of_fingerId_11() { return static_cast<int32_t>(offsetof(TouchEvent_t3098243043, ___fingerId_11)); }
	inline FsmInt_t1273009179 * get_fingerId_11() const { return ___fingerId_11; }
	inline FsmInt_t1273009179 ** get_address_of_fingerId_11() { return &___fingerId_11; }
	inline void set_fingerId_11(FsmInt_t1273009179 * value)
	{
		___fingerId_11 = value;
		Il2CppCodeGenWriteBarrier(&___fingerId_11, value);
	}

	inline static int32_t get_offset_of_touchPhase_12() { return static_cast<int32_t>(offsetof(TouchEvent_t3098243043, ___touchPhase_12)); }
	inline int32_t get_touchPhase_12() const { return ___touchPhase_12; }
	inline int32_t* get_address_of_touchPhase_12() { return &___touchPhase_12; }
	inline void set_touchPhase_12(int32_t value)
	{
		___touchPhase_12 = value;
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(TouchEvent_t3098243043, ___sendEvent_13)); }
	inline FsmEvent_t1258573736 * get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEvent_t1258573736 * value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_storeFingerId_14() { return static_cast<int32_t>(offsetof(TouchEvent_t3098243043, ___storeFingerId_14)); }
	inline FsmInt_t1273009179 * get_storeFingerId_14() const { return ___storeFingerId_14; }
	inline FsmInt_t1273009179 ** get_address_of_storeFingerId_14() { return &___storeFingerId_14; }
	inline void set_storeFingerId_14(FsmInt_t1273009179 * value)
	{
		___storeFingerId_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeFingerId_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
