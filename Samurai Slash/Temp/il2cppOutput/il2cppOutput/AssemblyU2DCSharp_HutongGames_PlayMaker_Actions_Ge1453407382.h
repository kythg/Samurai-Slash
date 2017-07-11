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

// HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName
struct  GetAnimatorCurrentStateInfoIsName_t1453407382  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::layerIndex
	FsmInt_t1273009179 * ___layerIndex_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::name
	FsmString_t2414474701 * ___name_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::isMatching
	FsmBool_t664485696 * ___isMatching_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::nameMatchEvent
	FsmEvent_t1258573736 * ___nameMatchEvent_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::nameDoNotMatchEvent
	FsmEvent_t1258573736 * ___nameDoNotMatchEvent_19;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorCurrentStateInfoIsName::_animator
	Animator_t69676727 * ____animator_20;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_layerIndex_15() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___layerIndex_15)); }
	inline FsmInt_t1273009179 * get_layerIndex_15() const { return ___layerIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_15() { return &___layerIndex_15; }
	inline void set_layerIndex_15(FsmInt_t1273009179 * value)
	{
		___layerIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_15, value);
	}

	inline static int32_t get_offset_of_name_16() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___name_16)); }
	inline FsmString_t2414474701 * get_name_16() const { return ___name_16; }
	inline FsmString_t2414474701 ** get_address_of_name_16() { return &___name_16; }
	inline void set_name_16(FsmString_t2414474701 * value)
	{
		___name_16 = value;
		Il2CppCodeGenWriteBarrier(&___name_16, value);
	}

	inline static int32_t get_offset_of_isMatching_17() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___isMatching_17)); }
	inline FsmBool_t664485696 * get_isMatching_17() const { return ___isMatching_17; }
	inline FsmBool_t664485696 ** get_address_of_isMatching_17() { return &___isMatching_17; }
	inline void set_isMatching_17(FsmBool_t664485696 * value)
	{
		___isMatching_17 = value;
		Il2CppCodeGenWriteBarrier(&___isMatching_17, value);
	}

	inline static int32_t get_offset_of_nameMatchEvent_18() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___nameMatchEvent_18)); }
	inline FsmEvent_t1258573736 * get_nameMatchEvent_18() const { return ___nameMatchEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_nameMatchEvent_18() { return &___nameMatchEvent_18; }
	inline void set_nameMatchEvent_18(FsmEvent_t1258573736 * value)
	{
		___nameMatchEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___nameMatchEvent_18, value);
	}

	inline static int32_t get_offset_of_nameDoNotMatchEvent_19() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ___nameDoNotMatchEvent_19)); }
	inline FsmEvent_t1258573736 * get_nameDoNotMatchEvent_19() const { return ___nameDoNotMatchEvent_19; }
	inline FsmEvent_t1258573736 ** get_address_of_nameDoNotMatchEvent_19() { return &___nameDoNotMatchEvent_19; }
	inline void set_nameDoNotMatchEvent_19(FsmEvent_t1258573736 * value)
	{
		___nameDoNotMatchEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___nameDoNotMatchEvent_19, value);
	}

	inline static int32_t get_offset_of__animator_20() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentStateInfoIsName_t1453407382, ____animator_20)); }
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
