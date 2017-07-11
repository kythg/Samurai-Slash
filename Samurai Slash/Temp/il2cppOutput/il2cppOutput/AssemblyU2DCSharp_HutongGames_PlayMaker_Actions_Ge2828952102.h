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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorIsHuman
struct  GetAnimatorIsHuman_t2828952102  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorIsHuman::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorIsHuman::isHuman
	FsmBool_t664485696 * ___isHuman_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsHuman::isHumanEvent
	FsmEvent_t1258573736 * ___isHumanEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsHuman::isGenericEvent
	FsmEvent_t1258573736 * ___isGenericEvent_14;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorIsHuman::_animator
	Animator_t69676727 * ____animator_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorIsHuman_t2828952102, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_isHuman_12() { return static_cast<int32_t>(offsetof(GetAnimatorIsHuman_t2828952102, ___isHuman_12)); }
	inline FsmBool_t664485696 * get_isHuman_12() const { return ___isHuman_12; }
	inline FsmBool_t664485696 ** get_address_of_isHuman_12() { return &___isHuman_12; }
	inline void set_isHuman_12(FsmBool_t664485696 * value)
	{
		___isHuman_12 = value;
		Il2CppCodeGenWriteBarrier(&___isHuman_12, value);
	}

	inline static int32_t get_offset_of_isHumanEvent_13() { return static_cast<int32_t>(offsetof(GetAnimatorIsHuman_t2828952102, ___isHumanEvent_13)); }
	inline FsmEvent_t1258573736 * get_isHumanEvent_13() const { return ___isHumanEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_isHumanEvent_13() { return &___isHumanEvent_13; }
	inline void set_isHumanEvent_13(FsmEvent_t1258573736 * value)
	{
		___isHumanEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___isHumanEvent_13, value);
	}

	inline static int32_t get_offset_of_isGenericEvent_14() { return static_cast<int32_t>(offsetof(GetAnimatorIsHuman_t2828952102, ___isGenericEvent_14)); }
	inline FsmEvent_t1258573736 * get_isGenericEvent_14() const { return ___isGenericEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_isGenericEvent_14() { return &___isGenericEvent_14; }
	inline void set_isGenericEvent_14(FsmEvent_t1258573736 * value)
	{
		___isGenericEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___isGenericEvent_14, value);
	}

	inline static int32_t get_offset_of__animator_15() { return static_cast<int32_t>(offsetof(GetAnimatorIsHuman_t2828952102, ____animator_15)); }
	inline Animator_t69676727 * get__animator_15() const { return ____animator_15; }
	inline Animator_t69676727 ** get_address_of__animator_15() { return &____animator_15; }
	inline void set__animator_15(Animator_t69676727 * value)
	{
		____animator_15 = value;
		Il2CppCodeGenWriteBarrier(&____animator_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
