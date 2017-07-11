#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Fs3863144983.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
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

// HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName
struct  GetAnimatorCurrentTransitionInfoIsUserName_t1957114927  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::layerIndex
	FsmInt_t1273009179 * ___layerIndex_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::userName
	FsmString_t2414474701 * ___userName_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::nameMatch
	FsmBool_t664485696 * ___nameMatch_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::nameMatchEvent
	FsmEvent_t1258573736 * ___nameMatchEvent_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::nameDoNotMatchEvent
	FsmEvent_t1258573736 * ___nameDoNotMatchEvent_19;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfoIsUserName::_animator
	Animator_t69676727 * ____animator_20;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_layerIndex_15() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___layerIndex_15)); }
	inline FsmInt_t1273009179 * get_layerIndex_15() const { return ___layerIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_15() { return &___layerIndex_15; }
	inline void set_layerIndex_15(FsmInt_t1273009179 * value)
	{
		___layerIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_15, value);
	}

	inline static int32_t get_offset_of_userName_16() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___userName_16)); }
	inline FsmString_t2414474701 * get_userName_16() const { return ___userName_16; }
	inline FsmString_t2414474701 ** get_address_of_userName_16() { return &___userName_16; }
	inline void set_userName_16(FsmString_t2414474701 * value)
	{
		___userName_16 = value;
		Il2CppCodeGenWriteBarrier(&___userName_16, value);
	}

	inline static int32_t get_offset_of_nameMatch_17() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___nameMatch_17)); }
	inline FsmBool_t664485696 * get_nameMatch_17() const { return ___nameMatch_17; }
	inline FsmBool_t664485696 ** get_address_of_nameMatch_17() { return &___nameMatch_17; }
	inline void set_nameMatch_17(FsmBool_t664485696 * value)
	{
		___nameMatch_17 = value;
		Il2CppCodeGenWriteBarrier(&___nameMatch_17, value);
	}

	inline static int32_t get_offset_of_nameMatchEvent_18() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___nameMatchEvent_18)); }
	inline FsmEvent_t1258573736 * get_nameMatchEvent_18() const { return ___nameMatchEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_nameMatchEvent_18() { return &___nameMatchEvent_18; }
	inline void set_nameMatchEvent_18(FsmEvent_t1258573736 * value)
	{
		___nameMatchEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___nameMatchEvent_18, value);
	}

	inline static int32_t get_offset_of_nameDoNotMatchEvent_19() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ___nameDoNotMatchEvent_19)); }
	inline FsmEvent_t1258573736 * get_nameDoNotMatchEvent_19() const { return ___nameDoNotMatchEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_nameDoNotMatchEvent_19() { return &___nameDoNotMatchEvent_19; }
	inline void set_nameDoNotMatchEvent_19(FsmEvent_t1258573736 * value)
	{
		___nameDoNotMatchEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___nameDoNotMatchEvent_19, value);
	}

	inline static int32_t get_offset_of__animator_20() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfoIsUserName_t1957114927, ____animator_20)); }
	inline Animator_t69676727 * get__animator_20() const { return ____animator_20; }
	inline Animator_t69676727 ** get_address_of__animator_20() { return &____animator_20; }
	inline void set__animator_20(Animator_t69676727 * value)
	{
		____animator_20 = value;
		Il2CppCodeGenWriteBarrier(&____animator_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
