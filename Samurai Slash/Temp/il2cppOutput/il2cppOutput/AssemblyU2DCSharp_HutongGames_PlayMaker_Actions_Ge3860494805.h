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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorPivot
struct  GetAnimatorPivot_t3860494805  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorPivot::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorPivot::pivotWeight
	FsmFloat_t937133978 * ___pivotWeight_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAnimatorPivot::pivotPosition
	FsmVector3_t3996534004 * ___pivotPosition_16;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorPivot::_animator
	Animator_t69676727 * ____animator_17;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorPivot_t3860494805, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_pivotWeight_15() { return static_cast<int32_t>(offsetof(GetAnimatorPivot_t3860494805, ___pivotWeight_15)); }
	inline FsmFloat_t937133978 * get_pivotWeight_15() const { return ___pivotWeight_15; }
	inline FsmFloat_t937133978 ** get_address_of_pivotWeight_15() { return &___pivotWeight_15; }
	inline void set_pivotWeight_15(FsmFloat_t937133978 * value)
	{
		___pivotWeight_15 = value;
		Il2CppCodeGenWriteBarrier(&___pivotWeight_15, value);
	}

	inline static int32_t get_offset_of_pivotPosition_16() { return static_cast<int32_t>(offsetof(GetAnimatorPivot_t3860494805, ___pivotPosition_16)); }
	inline FsmVector3_t3996534004 * get_pivotPosition_16() const { return ___pivotPosition_16; }
	inline FsmVector3_t3996534004 ** get_address_of_pivotPosition_16() { return &___pivotPosition_16; }
	inline void set_pivotPosition_16(FsmVector3_t3996534004 * value)
	{
		___pivotPosition_16 = value;
		Il2CppCodeGenWriteBarrier(&___pivotPosition_16, value);
	}

	inline static int32_t get_offset_of__animator_17() { return static_cast<int32_t>(offsetof(GetAnimatorPivot_t3860494805, ____animator_17)); }
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
