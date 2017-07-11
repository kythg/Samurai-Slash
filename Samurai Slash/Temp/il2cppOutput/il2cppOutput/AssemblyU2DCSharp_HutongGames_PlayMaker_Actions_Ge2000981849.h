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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorBool
struct  GetAnimatorBool_t2000981849  : public FsmStateActionAnimatorBase_t3863144983
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorBool::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAnimatorBool::parameter
	FsmString_t2414474701 * ___parameter_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAnimatorBool::result
	FsmBool_t664485696 * ___result_16;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorBool::_animator
	Animator_t69676727 * ____animator_17;
	// System.Int32 HutongGames.PlayMaker.Actions.GetAnimatorBool::_paramID
	int32_t ____paramID_18;

public:
	inline static int32_t get_offset_of_gameObject_14() { return static_cast<int32_t>(offsetof(GetAnimatorBool_t2000981849, ___gameObject_14)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_14() const { return ___gameObject_14; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_14() { return &___gameObject_14; }
	inline void set_gameObject_14(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_14, value);
	}

	inline static int32_t get_offset_of_parameter_15() { return static_cast<int32_t>(offsetof(GetAnimatorBool_t2000981849, ___parameter_15)); }
	inline FsmString_t2414474701 * get_parameter_15() const { return ___parameter_15; }
	inline FsmString_t2414474701 ** get_address_of_parameter_15() { return &___parameter_15; }
	inline void set_parameter_15(FsmString_t2414474701 * value)
	{
		___parameter_15 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_15, value);
	}

	inline static int32_t get_offset_of_result_16() { return static_cast<int32_t>(offsetof(GetAnimatorBool_t2000981849, ___result_16)); }
	inline FsmBool_t664485696 * get_result_16() const { return ___result_16; }
	inline FsmBool_t664485696 ** get_address_of_result_16() { return &___result_16; }
	inline void set_result_16(FsmBool_t664485696 * value)
	{
		___result_16 = value;
		Il2CppCodeGenWriteBarrier(&___result_16, value);
	}

	inline static int32_t get_offset_of__animator_17() { return static_cast<int32_t>(offsetof(GetAnimatorBool_t2000981849, ____animator_17)); }
	inline Animator_t69676727 * get__animator_17() const { return ____animator_17; }
	inline Animator_t69676727 ** get_address_of__animator_17() { return &____animator_17; }
	inline void set__animator_17(Animator_t69676727 * value)
	{
		____animator_17 = value;
		Il2CppCodeGenWriteBarrier(&____animator_17, value);
	}

	inline static int32_t get_offset_of__paramID_18() { return static_cast<int32_t>(offsetof(GetAnimatorBool_t2000981849, ____paramID_18)); }
	inline int32_t get__paramID_18() const { return ____paramID_18; }
	inline int32_t* get_address_of__paramID_18() { return &____paramID_18; }
	inline void set__paramID_18(int32_t value)
	{
		____paramID_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
