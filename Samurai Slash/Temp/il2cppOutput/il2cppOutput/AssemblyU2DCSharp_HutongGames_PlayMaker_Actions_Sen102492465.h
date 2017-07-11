#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HutongGames.PlayMaker.DelayedEvent
struct DelayedEvent_t1624700828;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendEventToFsm
struct  SendEventToFsm_t102492465  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SendEventToFsm::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SendEventToFsm::fsmName
	FsmString_t2414474701 * ___fsmName_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SendEventToFsm::sendEvent
	FsmString_t2414474701 * ___sendEvent_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SendEventToFsm::delay
	FsmFloat_t937133978 * ___delay_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SendEventToFsm::requireReceiver
	bool ___requireReceiver_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.SendEventToFsm::go
	GameObject_t1756533147 * ___go_16;
	// HutongGames.PlayMaker.DelayedEvent HutongGames.PlayMaker.Actions.SendEventToFsm::delayedEvent
	DelayedEvent_t1624700828 * ___delayedEvent_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fsmName_12() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___fsmName_12)); }
	inline FsmString_t2414474701 * get_fsmName_12() const { return ___fsmName_12; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_12() { return &___fsmName_12; }
	inline void set_fsmName_12(FsmString_t2414474701 * value)
	{
		___fsmName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___sendEvent_13)); }
	inline FsmString_t2414474701 * get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmString_t2414474701 ** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmString_t2414474701 * value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_delay_14() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___delay_14)); }
	inline FsmFloat_t937133978 * get_delay_14() const { return ___delay_14; }
	inline FsmFloat_t937133978 ** get_address_of_delay_14() { return &___delay_14; }
	inline void set_delay_14(FsmFloat_t937133978 * value)
	{
		___delay_14 = value;
		Il2CppCodeGenWriteBarrier(&___delay_14, value);
	}

	inline static int32_t get_offset_of_requireReceiver_15() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___requireReceiver_15)); }
	inline bool get_requireReceiver_15() const { return ___requireReceiver_15; }
	inline bool* get_address_of_requireReceiver_15() { return &___requireReceiver_15; }
	inline void set_requireReceiver_15(bool value)
	{
		___requireReceiver_15 = value;
	}

	inline static int32_t get_offset_of_go_16() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___go_16)); }
	inline GameObject_t1756533147 * get_go_16() const { return ___go_16; }
	inline GameObject_t1756533147 ** get_address_of_go_16() { return &___go_16; }
	inline void set_go_16(GameObject_t1756533147 * value)
	{
		___go_16 = value;
		Il2CppCodeGenWriteBarrier(&___go_16, value);
	}

	inline static int32_t get_offset_of_delayedEvent_17() { return static_cast<int32_t>(offsetof(SendEventToFsm_t102492465, ___delayedEvent_17)); }
	inline DelayedEvent_t1624700828 * get_delayedEvent_17() const { return ___delayedEvent_17; }
	inline DelayedEvent_t1624700828 ** get_address_of_delayedEvent_17() { return &___delayedEvent_17; }
	inline void set_delayedEvent_17(DelayedEvent_t1624700828 * value)
	{
		___delayedEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvent_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
