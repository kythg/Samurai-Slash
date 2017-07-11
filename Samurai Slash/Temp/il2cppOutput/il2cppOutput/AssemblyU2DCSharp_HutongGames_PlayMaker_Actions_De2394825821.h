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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DestroyObject
struct  DestroyObject_t2394825821  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.DestroyObject::gameObject
	FsmGameObject_t3097142863 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DestroyObject::delay
	FsmFloat_t937133978 * ___delay_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.DestroyObject::detachChildren
	FsmBool_t664485696 * ___detachChildren_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(DestroyObject_t2394825821, ___gameObject_11)); }
	inline FsmGameObject_t3097142863 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmGameObject_t3097142863 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_delay_12() { return static_cast<int32_t>(offsetof(DestroyObject_t2394825821, ___delay_12)); }
	inline FsmFloat_t937133978 * get_delay_12() const { return ___delay_12; }
	inline FsmFloat_t937133978 ** get_address_of_delay_12() { return &___delay_12; }
	inline void set_delay_12(FsmFloat_t937133978 * value)
	{
		___delay_12 = value;
		Il2CppCodeGenWriteBarrier(&___delay_12, value);
	}

	inline static int32_t get_offset_of_detachChildren_13() { return static_cast<int32_t>(offsetof(DestroyObject_t2394825821, ___detachChildren_13)); }
	inline FsmBool_t664485696 * get_detachChildren_13() const { return ___detachChildren_13; }
	inline FsmBool_t664485696 ** get_address_of_detachChildren_13() { return &___detachChildren_13; }
	inline void set_detachChildren_13(FsmBool_t664485696 * value)
	{
		___detachChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___detachChildren_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
