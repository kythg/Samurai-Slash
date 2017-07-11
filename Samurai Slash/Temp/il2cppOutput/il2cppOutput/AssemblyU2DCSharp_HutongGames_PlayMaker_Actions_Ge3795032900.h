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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorLayerWeight
struct  GetAnimatorLayerWeight_t3795032900  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorLayerWeight::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetAnimatorLayerWeight::layerIndex
	FsmInt_t1273009179 * ___layerIndex_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorLayerWeight::layerWeight
	FsmFloat_t937133978 * ___layerWeight_16;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorLayerWeight::_animator
	Animator_t69676727 * ____animator_17;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorLayerWeight_t3795032900, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_layerIndex_15() { return static_cast<int32_t>(offsetof(GetAnimatorLayerWeight_t3795032900, ___layerIndex_15)); }
	inline FsmInt_t1273009179 * get_layerIndex_15() const { return ___layerIndex_15; }
	inline FsmInt_t1273009179 ** get_address_of_layerIndex_15() { return &___layerIndex_15; }
	inline void set_layerIndex_15(FsmInt_t1273009179 * value)
	{
		___layerIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___layerIndex_15, value);
	}

	inline static int32_t get_offset_of_layerWeight_16() { return static_cast<int32_t>(offsetof(GetAnimatorLayerWeight_t3795032900, ___layerWeight_16)); }
	inline FsmFloat_t937133978 * get_layerWeight_16() const { return ___layerWeight_16; }
	inline FsmFloat_t937133978 ** get_address_of_layerWeight_16() { return &___layerWeight_16; }
	inline void set_layerWeight_16(FsmFloat_t937133978 * value)
	{
		___layerWeight_16 = value;
		Il2CppCodeGenWriteBarrier(&___layerWeight_16, value);
	}

	inline static int32_t get_offset_of__animator_17() { return static_cast<int32_t>(offsetof(GetAnimatorLayerWeight_t3795032900, ____animator_17)); }
	inline Animator_t69676727 * get__animator_17() const { return ____animator_17; }
	inline Animator_t69676727 ** get_address_of__animator_17() { return &____animator_17; }
	inline void set__animator_17(Animator_t69676727 * value)
	{
		____animator_17 = value;
		Il2CppCodeGenWriteBarrier(&____animator_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
