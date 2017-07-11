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

// HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition
struct  GetAnimatorIsLayerInTransition_t104952858  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::layerIndex
	FsmInt_t1273009179 * ___layerIndex_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::isInTransition
	FsmBool_t664485696 * ___isInTransition_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::isInTransitionEvent
	FsmEvent_t1258573736 * ___isInTransitionEvent_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::isNotInTransitionEvent
	FsmEvent_t1258573736 * ___isNotInTransitionEvent_18;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorIsLayerInTransition::_animator
	Animator_t69676727 * ____animator_19;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_layerIndex_15() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ___layerIndex_15)); }
	inline FsmInt_t1273009179 * get_layerIndex_15() const { return ___layerIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_15() { return &___layerIndex_15; }
	inline void set_layerIndex_15(FsmInt_t1273009179 * value)
	{
		___layerIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_15, value);
	}

	inline static int32_t get_offset_of_isInTransition_16() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ___isInTransition_16)); }
	inline FsmBool_t664485696 * get_isInTransition_16() const { return ___isInTransition_16; }
	inline FsmBool_t664485696 ** get_address_of_isInTransition_16() { return &___isInTransition_16; }
	inline void set_isInTransition_16(FsmBool_t664485696 * value)
	{
		___isInTransition_16 = value;
		Il2CppCodeGenWriteBarrier(&___isInTransition_16, value);
	}

	inline static int32_t get_offset_of_isInTransitionEvent_17() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ___isInTransitionEvent_17)); }
	inline FsmEvent_t1258573736 * get_isInTransitionEvent_17() const { return ___isInTransitionEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_isInTransitionEvent_17() { return &___isInTransitionEvent_17; }
	inline void set_isInTransitionEvent_17(FsmEvent_t1258573736 * value)
	{
		___isInTransitionEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___isInTransitionEvent_17, value);
	}

	inline static int32_t get_offset_of_isNotInTransitionEvent_18() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ___isNotInTransitionEvent_18)); }
	inline FsmEvent_t1258573736 * get_isNotInTransitionEvent_18() const { return ___isNotInTransitionEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotInTransitionEvent_18() { return &___isNotInTransitionEvent_18; }
	inline void set_isNotInTransitionEvent_18(FsmEvent_t1258573736 * value)
	{
		___isNotInTransitionEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___isNotInTransitionEvent_18, value);
	}

	inline static int32_t get_offset_of__animator_19() { return static_cast<int32_t>(offsetof(GetAnimatorIsLayerInTransition_t104952858, ____animator_19)); }
	inline Animator_t69676727 * get__animator_19() const { return ____animator_19; }
	inline Animator_t69676727 ** get_address_of__animator_19() { return &____animator_19; }
	inline void set__animator_19(Animator_t69676727 * value)
	{
		____animator_19 = value;
		Il2CppCodeGenWriteBarrier(&____animator_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
