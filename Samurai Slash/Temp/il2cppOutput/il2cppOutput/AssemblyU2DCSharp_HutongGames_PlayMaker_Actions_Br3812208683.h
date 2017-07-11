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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BroadcastEvent
struct  BroadcastEvent_t3812208683  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.BroadcastEvent::broadcastEvent
	FsmString_t2414474701 * ___broadcastEvent_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.BroadcastEvent::gameObject
	FsmGameObject_t3097142863 * ___gameObject_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BroadcastEvent::sendToChildren
	FsmBool_t664485696 * ___sendToChildren_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BroadcastEvent::excludeSelf
	FsmBool_t664485696 * ___excludeSelf_14;

public:
	inline static int32_t get_offset_of_broadcastEvent_11() { return static_cast<int32_t>(offsetof(BroadcastEvent_t3812208683, ___broadcastEvent_11)); }
	inline FsmString_t2414474701 * get_broadcastEvent_11() const { return ___broadcastEvent_11; }
	inline FsmString_t2414474701 ** get_address_of_broadcastEvent_11() { return &___broadcastEvent_11; }
	inline void set_broadcastEvent_11(FsmString_t2414474701 * value)
	{
		___broadcastEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___broadcastEvent_11, value);
	}

	inline static int32_t get_offset_of_gameObject_12() { return static_cast<int32_t>(offsetof(BroadcastEvent_t3812208683, ___gameObject_12)); }
	inline FsmGameObject_t3097142863 * get_gameObject_12() const { return ___gameObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_12() { return &___gameObject_12; }
	inline void set_gameObject_12(FsmGameObject_t3097142863 * value)
	{
		___gameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_12, value);
	}

	inline static int32_t get_offset_of_sendToChildren_13() { return static_cast<int32_t>(offsetof(BroadcastEvent_t3812208683, ___sendToChildren_13)); }
	inline FsmBool_t664485696 * get_sendToChildren_13() const { return ___sendToChildren_13; }
	inline FsmBool_t664485696 ** get_address_of_sendToChildren_13() { return &___sendToChildren_13; }
	inline void set_sendToChildren_13(FsmBool_t664485696 * value)
	{
		___sendToChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___sendToChildren_13, value);
	}

	inline static int32_t get_offset_of_excludeSelf_14() { return static_cast<int32_t>(offsetof(BroadcastEvent_t3812208683, ___excludeSelf_14)); }
	inline FsmBool_t664485696 * get_excludeSelf_14() const { return ___excludeSelf_14; }
	inline FsmBool_t664485696 ** get_address_of_excludeSelf_14() { return &___excludeSelf_14; }
	inline void set_excludeSelf_14(FsmBool_t664485696 * value)
	{
		___excludeSelf_14 = value;
		Il2CppCodeGenWriteBarrier(&___excludeSelf_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
