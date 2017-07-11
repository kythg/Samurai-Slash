#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetRotation
struct  GetRotation_t445309768  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetRotation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.GetRotation::quaternion
	FsmQuaternion_t878438756 * ___quaternion_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetRotation::vector
	FsmVector3_t3996534004 * ___vector_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRotation::xAngle
	FsmFloat_t937133978 * ___xAngle_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRotation::yAngle
	FsmFloat_t937133978 * ___yAngle_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRotation::zAngle
	FsmFloat_t937133978 * ___zAngle_16;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.GetRotation::space
	int32_t ___space_17;
	// System.Boolean HutongGames.PlayMaker.Actions.GetRotation::everyFrame
	bool ___everyFrame_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_quaternion_12() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___quaternion_12)); }
	inline FsmQuaternion_t878438756 * get_quaternion_12() const { return ___quaternion_12; }
	inline FsmQuaternion_t878438756 ** get_address_of_quaternion_12() { return &___quaternion_12; }
	inline void set_quaternion_12(FsmQuaternion_t878438756 * value)
	{
		___quaternion_12 = value;
		Il2CppCodeGenWriteBarrier(&___quaternion_12, value);
	}

	inline static int32_t get_offset_of_vector_13() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___vector_13)); }
	inline FsmVector3_t3996534004 * get_vector_13() const { return ___vector_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_13() { return &___vector_13; }
	inline void set_vector_13(FsmVector3_t3996534004 * value)
	{
		___vector_13 = value;
		Il2CppCodeGenWriteBarrier(&___vector_13, value);
	}

	inline static int32_t get_offset_of_xAngle_14() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___xAngle_14)); }
	inline FsmFloat_t937133978 * get_xAngle_14() const { return ___xAngle_14; }
	inline FsmFloat_t937133978 ** get_address_of_xAngle_14() { return &___xAngle_14; }
	inline void set_xAngle_14(FsmFloat_t937133978 * value)
	{
		___xAngle_14 = value;
		Il2CppCodeGenWriteBarrier(&___xAngle_14, value);
	}

	inline static int32_t get_offset_of_yAngle_15() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___yAngle_15)); }
	inline FsmFloat_t937133978 * get_yAngle_15() const { return ___yAngle_15; }
	inline FsmFloat_t937133978 ** get_address_of_yAngle_15() { return &___yAngle_15; }
	inline void set_yAngle_15(FsmFloat_t937133978 * value)
	{
		___yAngle_15 = value;
		Il2CppCodeGenWriteBarrier(&___yAngle_15, value);
	}

	inline static int32_t get_offset_of_zAngle_16() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___zAngle_16)); }
	inline FsmFloat_t937133978 * get_zAngle_16() const { return ___zAngle_16; }
	inline FsmFloat_t937133978 ** get_address_of_zAngle_16() { return &___zAngle_16; }
	inline void set_zAngle_16(FsmFloat_t937133978 * value)
	{
		___zAngle_16 = value;
		Il2CppCodeGenWriteBarrier(&___zAngle_16, value);
	}

	inline static int32_t get_offset_of_space_17() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___space_17)); }
	inline int32_t get_space_17() const { return ___space_17; }
	inline int32_t* get_address_of_space_17() { return &___space_17; }
	inline void set_space_17(int32_t value)
	{
		___space_17 = value;
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(GetRotation_t445309768, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
