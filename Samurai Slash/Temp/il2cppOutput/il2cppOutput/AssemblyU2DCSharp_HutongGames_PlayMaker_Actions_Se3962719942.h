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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetCollider2dIsTrigger
struct  SetCollider2dIsTrigger_t3962719942  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetCollider2dIsTrigger::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetCollider2dIsTrigger::isTrigger
	FsmBool_t664485696 * ___isTrigger_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetCollider2dIsTrigger::setAllColliders
	bool ___setAllColliders_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetCollider2dIsTrigger_t3962719942, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_isTrigger_12() { return static_cast<int32_t>(offsetof(SetCollider2dIsTrigger_t3962719942, ___isTrigger_12)); }
	inline FsmBool_t664485696 * get_isTrigger_12() const { return ___isTrigger_12; }
	inline FsmBool_t664485696 ** get_address_of_isTrigger_12() { return &___isTrigger_12; }
	inline void set_isTrigger_12(FsmBool_t664485696 * value)
	{
		___isTrigger_12 = value;
		Il2CppCodeGenWriteBarrier(&___isTrigger_12, value);
	}

	inline static int32_t get_offset_of_setAllColliders_13() { return static_cast<int32_t>(offsetof(SetCollider2dIsTrigger_t3962719942, ___setAllColliders_13)); }
	inline bool get_setAllColliders_13() const { return ___setAllColliders_13; }
	inline bool* get_address_of_setAllColliders_13() { return &___setAllColliders_13; }
	inline void set_setAllColliders_13(bool value)
	{
		___setAllColliders_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
