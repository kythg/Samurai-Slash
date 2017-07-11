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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorLayerName
struct  GetAnimatorLayerName_t4121410571  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorLayerName::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorLayerName::layerIndex
	FsmInt_t1273009179 * ___layerIndex_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorLayerName::layerName
	FsmString_t2414474701 * ___layerName_13;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorLayerName::_animator
	Animator_t69676727 * ____animator_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorLayerName_t4121410571, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_layerIndex_12() { return static_cast<int32_t>(offsetof(GetAnimatorLayerName_t4121410571, ___layerIndex_12)); }
	inline FsmInt_t1273009179 * get_layerIndex_12() const { return ___layerIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_12() { return &___layerIndex_12; }
	inline void set_layerIndex_12(FsmInt_t1273009179 * value)
	{
		___layerIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_12, value);
	}

	inline static int32_t get_offset_of_layerName_13() { return static_cast<int32_t>(offsetof(GetAnimatorLayerName_t4121410571, ___layerName_13)); }
	inline FsmString_t2414474701 * get_layerName_13() const { return ___layerName_13; }
	inline FsmString_t2414474701 ** get_address_of_layerName_13() { return &___layerName_13; }
	inline void set_layerName_13(FsmString_t2414474701 * value)
	{
		___layerName_13 = value;
		Il2CppCodeGenWriteBarrier(&___layerName_13, value);
	}

	inline static int32_t get_offset_of__animator_14() { return static_cast<int32_t>(offsetof(GetAnimatorLayerName_t4121410571, ____animator_14)); }
	inline Animator_t69676727 * get__animator_14() const { return ____animator_14; }
	inline Animator_t69676727 ** get_address_of__animator_14() { return &____animator_14; }
	inline void set__animator_14(Animator_t69676727 * value)
	{
		____animator_14 = value;
		Il2CppCodeGenWriteBarrier(&____animator_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
