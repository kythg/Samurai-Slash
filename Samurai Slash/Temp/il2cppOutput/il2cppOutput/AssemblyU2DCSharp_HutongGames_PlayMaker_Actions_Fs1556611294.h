#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// PlayMakerFSM
struct PlayMakerFSM_t437737208;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FsmEventOptions
struct  FsmEventOptions_t1556611294  : public FsmStateAction_t2862378169
{
public:
	// PlayMakerFSM HutongGames.PlayMaker.Actions.FsmEventOptions::sendToFsmComponent
	PlayMakerFSM_t437737208 * ___sendToFsmComponent_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.FsmEventOptions::sendToGameObject
	FsmGameObject_t3097142863 * ___sendToGameObject_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FsmEventOptions::fsmName
	FsmString_t2414474701 * ___fsmName_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FsmEventOptions::sendToChildren
	FsmBool_t664485696 * ___sendToChildren_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.FsmEventOptions::broadcastToAll
	FsmBool_t664485696 * ___broadcastToAll_15;

public:
	inline static int32_t get_offset_of_sendToFsmComponent_11() { return static_cast<int32_t>(offsetof(FsmEventOptions_t1556611294, ___sendToFsmComponent_11)); }
	inline PlayMakerFSM_t437737208 * get_sendToFsmComponent_11() const { return ___sendToFsmComponent_11; }
	inline PlayMakerFSM_t437737208 ** get_address_of_sendToFsmComponent_11() { return &___sendToFsmComponent_11; }
	inline void set_sendToFsmComponent_11(PlayMakerFSM_t437737208 * value)
	{
		___sendToFsmComponent_11 = value;
		Il2CppCodeGenWriteBarrier(&___sendToFsmComponent_11, value);
	}

	inline static int32_t get_offset_of_sendToGameObject_12() { return static_cast<int32_t>(offsetof(FsmEventOptions_t1556611294, ___sendToGameObject_12)); }
	inline FsmGameObject_t3097142863 * get_sendToGameObject_12() const { return ___sendToGameObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_sendToGameObject_12() { return &___sendToGameObject_12; }
	inline void set_sendToGameObject_12(FsmGameObject_t3097142863 * value)
	{
		___sendToGameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendToGameObject_12, value);
	}

	inline static int32_t get_offset_of_fsmName_13() { return static_cast<int32_t>(offsetof(FsmEventOptions_t1556611294, ___fsmName_13)); }
	inline FsmString_t2414474701 * get_fsmName_13() const { return ___fsmName_13; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_13() { return &___fsmName_13; }
	inline void set_fsmName_13(FsmString_t2414474701 * value)
	{
		___fsmName_13 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_13, value);
	}

	inline static int32_t get_offset_of_sendToChildren_14() { return static_cast<int32_t>(offsetof(FsmEventOptions_t1556611294, ___sendToChildren_14)); }
	inline FsmBool_t664485696 * get_sendToChildren_14() const { return ___sendToChildren_14; }
	inline FsmBool_t664485696 ** get_address_of_sendToChildren_14() { return &___sendToChildren_14; }
	inline void set_sendToChildren_14(FsmBool_t664485696 * value)
	{
		___sendToChildren_14 = value;
		Il2CppCodeGenWriteBarrier(&___sendToChildren_14, value);
	}

	inline static int32_t get_offset_of_broadcastToAll_15() { return static_cast<int32_t>(offsetof(FsmEventOptions_t1556611294, ___broadcastToAll_15)); }
	inline FsmBool_t664485696 * get_broadcastToAll_15() const { return ___broadcastToAll_15; }
	inline FsmBool_t664485696 ** get_address_of_broadcastToAll_15() { return &___broadcastToAll_15; }
	inline void set_broadcastToAll_15(FsmBool_t664485696 * value)
	{
		___broadcastToAll_15 = value;
		Il2CppCodeGenWriteBarrier(&___broadcastToAll_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
