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

// HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve
struct  GetAnimatorIsParameterControlledByCurve_t1350628870  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::parameterName
	FsmString_t2414474701 * ___parameterName_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::isControlledByCurve
	FsmBool_t664485696 * ___isControlledByCurve_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::isControlledByCurveEvent
	FsmEvent_t1258573736 * ___isControlledByCurveEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::isNotControlledByCurveEvent
	FsmEvent_t1258573736 * ___isNotControlledByCurveEvent_15;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorIsParameterControlledByCurve::_animator
	Animator_t69676727 * ____animator_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_parameterName_12() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ___parameterName_12)); }
	inline FsmString_t2414474701 * get_parameterName_12() const { return ___parameterName_12; }
	inline FsmString_t2414474701 ** get_address_of_parameterName_12() { return &___parameterName_12; }
	inline void set_parameterName_12(FsmString_t2414474701 * value)
	{
		___parameterName_12 = value;
		Il2CppCodeGenWriteBarrier(&___parameterName_12, value);
	}

	inline static int32_t get_offset_of_isControlledByCurve_13() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ___isControlledByCurve_13)); }
	inline FsmBool_t664485696 * get_isControlledByCurve_13() const { return ___isControlledByCurve_13; }
	inline FsmBool_t664485696 ** get_address_of_isControlledByCurve_13() { return &___isControlledByCurve_13; }
	inline void set_isControlledByCurve_13(FsmBool_t664485696 * value)
	{
		___isControlledByCurve_13 = value;
		Il2CppCodeGenWriteBarrier(&___isControlledByCurve_13, value);
	}

	inline static int32_t get_offset_of_isControlledByCurveEvent_14() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ___isControlledByCurveEvent_14)); }
	inline FsmEvent_t1258573736 * get_isControlledByCurveEvent_14() const { return ___isControlledByCurveEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_isControlledByCurveEvent_14() { return &___isControlledByCurveEvent_14; }
	inline void set_isControlledByCurveEvent_14(FsmEvent_t1258573736 * value)
	{
		___isControlledByCurveEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___isControlledByCurveEvent_14, value);
	}

	inline static int32_t get_offset_of_isNotControlledByCurveEvent_15() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ___isNotControlledByCurveEvent_15)); }
	inline FsmEvent_t1258573736 * get_isNotControlledByCurveEvent_15() const { return ___isNotControlledByCurveEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_isNotControlledByCurveEvent_15() { return &___isNotControlledByCurveEvent_15; }
	inline void set_isNotControlledByCurveEvent_15(FsmEvent_t1258573736 * value)
	{
		___isNotControlledByCurveEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___isNotControlledByCurveEvent_15, value);
	}

	inline static int32_t get_offset_of__animator_16() { return static_cast<int32_t>(offsetof(GetAnimatorIsParameterControlledByCurve_t1350628870, ____animator_16)); }
	inline Animator_t69676727 * get__animator_16() const { return ____animator_16; }
	inline Animator_t69676727 ** get_address_of__animator_16() { return &____animator_16; }
	inline void set__animator_16(Animator_t69676727 * value)
	{
		____animator_16 = value;
		Il2CppCodeGenWriteBarrier(&____animator_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
