#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmEventData
struct FsmEventData_t2110469976;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.DelayedEvent
struct  DelayedEvent_t1624700828  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.DelayedEvent::fsm
	Fsm_t917886356 * ___fsm_0;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.DelayedEvent::fsmEvent
	FsmEvent_t1258573736 * ___fsmEvent_1;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.DelayedEvent::eventTarget
	FsmEventTarget_t172293745 * ___eventTarget_2;
	// HutongGames.PlayMaker.FsmEventData HutongGames.PlayMaker.DelayedEvent::eventData
	FsmEventData_t2110469976 * ___eventData_3;
	// System.Single HutongGames.PlayMaker.DelayedEvent::timer
	float ___timer_4;
	// System.Boolean HutongGames.PlayMaker.DelayedEvent::eventFired
	bool ___eventFired_5;

public:
	inline static int32_t get_offset_of_fsm_0() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___fsm_0)); }
	inline Fsm_t917886356 * get_fsm_0() const { return ___fsm_0; }
	inline Fsm_t917886356 ** get_address_of_fsm_0() { return &___fsm_0; }
	inline void set_fsm_0(Fsm_t917886356 * value)
	{
		___fsm_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_0, value);
	}

	inline static int32_t get_offset_of_fsmEvent_1() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___fsmEvent_1)); }
	inline FsmEvent_t1258573736 * get_fsmEvent_1() const { return ___fsmEvent_1; }
	inline FsmEvent_t1258573736 ** get_address_of_fsmEvent_1() { return &___fsmEvent_1; }
	inline void set_fsmEvent_1(FsmEvent_t1258573736 * value)
	{
		___fsmEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsmEvent_1, value);
	}

	inline static int32_t get_offset_of_eventTarget_2() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___eventTarget_2)); }
	inline FsmEventTarget_t172293745 * get_eventTarget_2() const { return ___eventTarget_2; }
	inline FsmEventTarget_t172293745 ** get_address_of_eventTarget_2() { return &___eventTarget_2; }
	inline void set_eventTarget_2(FsmEventTarget_t172293745 * value)
	{
		___eventTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___eventTarget_2, value);
	}

	inline static int32_t get_offset_of_eventData_3() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___eventData_3)); }
	inline FsmEventData_t2110469976 * get_eventData_3() const { return ___eventData_3; }
	inline FsmEventData_t2110469976 ** get_address_of_eventData_3() { return &___eventData_3; }
	inline void set_eventData_3(FsmEventData_t2110469976 * value)
	{
		___eventData_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventData_3, value);
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_eventFired_5() { return static_cast<int32_t>(offsetof(DelayedEvent_t1624700828, ___eventFired_5)); }
	inline bool get_eventFired_5() const { return ___eventFired_5; }
	inline bool* get_address_of_eventFired_5() { return &___eventFired_5; }
	inline void set_eventFired_5(bool value)
	{
		___eventFired_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
