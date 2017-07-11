#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GameObjectTagSwitch
struct  GameObjectTagSwitch_t2481605395  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GameObjectTagSwitch::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.GameObjectTagSwitch::compareTo
	FsmStringU5BU5D_t2699231328* ___compareTo_12;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.GameObjectTagSwitch::sendEvent
	FsmEventU5BU5D_t287863993* ___sendEvent_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GameObjectTagSwitch::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GameObjectTagSwitch_t2481605395, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_compareTo_12() { return static_cast<int32_t>(offsetof(GameObjectTagSwitch_t2481605395, ___compareTo_12)); }
	inline FsmStringU5BU5D_t2699231328* get_compareTo_12() const { return ___compareTo_12; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_compareTo_12() { return &___compareTo_12; }
	inline void set_compareTo_12(FsmStringU5BU5D_t2699231328* value)
	{
		___compareTo_12 = value;
		Il2CppCodeGenWriteBarrier(&___compareTo_12, value);
	}

	inline static int32_t get_offset_of_sendEvent_13() { return static_cast<int32_t>(offsetof(GameObjectTagSwitch_t2481605395, ___sendEvent_13)); }
	inline FsmEventU5BU5D_t287863993* get_sendEvent_13() const { return ___sendEvent_13; }
	inline FsmEventU5BU5D_t287863993** get_address_of_sendEvent_13() { return &___sendEvent_13; }
	inline void set_sendEvent_13(FsmEventU5BU5D_t287863993* value)
	{
		___sendEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GameObjectTagSwitch_t2481605395, ___everyFrame_14)); }
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
