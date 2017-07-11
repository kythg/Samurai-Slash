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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo
struct  GetAnimatorCurrentTransitionInfo_t1206296791  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::layerIndex
	FsmInt_t1273009179 * ___layerIndex_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::name
	FsmString_t2414474701 * ___name_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::nameHash
	FsmInt_t1273009179 * ___nameHash_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::userNameHash
	FsmInt_t1273009179 * ___userNameHash_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::normalizedTime
	FsmFloat_t937133978 * ___normalizedTime_19;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorCurrentTransitionInfo::_animator
	Animator_t69676727 * ____animator_20;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_layerIndex_15() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___layerIndex_15)); }
	inline FsmInt_t1273009179 * get_layerIndex_15() const { return ___layerIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_15() { return &___layerIndex_15; }
	inline void set_layerIndex_15(FsmInt_t1273009179 * value)
	{
		___layerIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_15, value);
	}

	inline static int32_t get_offset_of_name_16() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___name_16)); }
	inline FsmString_t2414474701 * get_name_16() const { return ___name_16; }
	inline FsmString_t2414474701 ** get_address_of_name_16() { return &___name_16; }
	inline void set_name_16(FsmString_t2414474701 * value)
	{
		___name_16 = value;
		Il2CppCodeGenWriteBarrier(&___name_16, value);
	}

	inline static int32_t get_offset_of_nameHash_17() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___nameHash_17)); }
	inline FsmInt_t1273009179 * get_nameHash_17() const { return ___nameHash_17; }
	inline FsmInt_t1273009179 ** get_address_of_nameHash_17() { return &___nameHash_17; }
	inline void set_nameHash_17(FsmInt_t1273009179 * value)
	{
		___nameHash_17 = value;
		Il2CppCodeGenWriteBarrier(&___nameHash_17, value);
	}

	inline static int32_t get_offset_of_userNameHash_18() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___userNameHash_18)); }
	inline FsmInt_t1273009179 * get_userNameHash_18() const { return ___userNameHash_18; }
	inline FsmInt_t1273009179 ** get_address_of_userNameHash_18() { return &___userNameHash_18; }
	inline void set_userNameHash_18(FsmInt_t1273009179 * value)
	{
		___userNameHash_18 = value;
		Il2CppCodeGenWriteBarrier(&___userNameHash_18, value);
	}

	inline static int32_t get_offset_of_normalizedTime_19() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ___normalizedTime_19)); }
	inline FsmFloat_t937133978 * get_normalizedTime_19() const { return ___normalizedTime_19; }
	inline FsmFloat_t937133978 ** get_address_of_normalizedTime_19() { return &___normalizedTime_19; }
	inline void set_normalizedTime_19(FsmFloat_t937133978 * value)
	{
		___normalizedTime_19 = value;
		Il2CppCodeGenWriteBarrier(&___normalizedTime_19, value);
	}

	inline static int32_t get_offset_of__animator_20() { return static_cast<int32_t>(offsetof(GetAnimatorCurrentTransitionInfo_t1206296791, ____animator_20)); }
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
