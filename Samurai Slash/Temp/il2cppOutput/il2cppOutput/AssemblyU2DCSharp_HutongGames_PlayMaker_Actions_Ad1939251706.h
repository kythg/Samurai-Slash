#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com540501634.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddForce
struct  AddForce_t1939251706  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddForce::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddForce::atPosition
	FsmVector3_t3996534004 * ___atPosition_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddForce::vector
	FsmVector3_t3996534004 * ___vector_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddForce::x
	FsmFloat_t937133978 * ___x_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddForce::y
	FsmFloat_t937133978 * ___y_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddForce::z
	FsmFloat_t937133978 * ___z_18;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.AddForce::space
	int32_t ___space_19;
	// UnityEngine.ForceMode HutongGames.PlayMaker.Actions.AddForce::forceMode
	int32_t ___forceMode_20;
	// System.Boolean HutongGames.PlayMaker.Actions.AddForce::everyFrame
	bool ___everyFrame_21;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_atPosition_14() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___atPosition_14)); }
	inline FsmVector3_t3996534004 * get_atPosition_14() const { return ___atPosition_14; }
	inline FsmVector3_t3996534004 ** get_address_of_atPosition_14() { return &___atPosition_14; }
	inline void set_atPosition_14(FsmVector3_t3996534004 * value)
	{
		___atPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___atPosition_14, value);
	}

	inline static int32_t get_offset_of_vector_15() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___vector_15)); }
	inline FsmVector3_t3996534004 * get_vector_15() const { return ___vector_15; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_15() { return &___vector_15; }
	inline void set_vector_15(FsmVector3_t3996534004 * value)
	{
		___vector_15 = value;
		Il2CppCodeGenWriteBarrier(&___vector_15, value);
	}

	inline static int32_t get_offset_of_x_16() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___x_16)); }
	inline FsmFloat_t937133978 * get_x_16() const { return ___x_16; }
	inline FsmFloat_t937133978 ** get_address_of_x_16() { return &___x_16; }
	inline void set_x_16(FsmFloat_t937133978 * value)
	{
		___x_16 = value;
		Il2CppCodeGenWriteBarrier(&___x_16, value);
	}

	inline static int32_t get_offset_of_y_17() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___y_17)); }
	inline FsmFloat_t937133978 * get_y_17() const { return ___y_17; }
	inline FsmFloat_t937133978 ** get_address_of_y_17() { return &___y_17; }
	inline void set_y_17(FsmFloat_t937133978 * value)
	{
		___y_17 = value;
		Il2CppCodeGenWriteBarrier(&___y_17, value);
	}

	inline static int32_t get_offset_of_z_18() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___z_18)); }
	inline FsmFloat_t937133978 * get_z_18() const { return ___z_18; }
	inline FsmFloat_t937133978 ** get_address_of_z_18() { return &___z_18; }
	inline void set_z_18(FsmFloat_t937133978 * value)
	{
		___z_18 = value;
		Il2CppCodeGenWriteBarrier(&___z_18, value);
	}

	inline static int32_t get_offset_of_space_19() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___space_19)); }
	inline int32_t get_space_19() const { return ___space_19; }
	inline int32_t* get_address_of_space_19() { return &___space_19; }
	inline void set_space_19(int32_t value)
	{
		___space_19 = value;
	}

	inline static int32_t get_offset_of_forceMode_20() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___forceMode_20)); }
	inline int32_t get_forceMode_20() const { return ___forceMode_20; }
	inline int32_t* get_address_of_forceMode_20() { return &___forceMode_20; }
	inline void set_forceMode_20(int32_t value)
	{
		___forceMode_20 = value;
	}

	inline static int32_t get_offset_of_everyFrame_21() { return static_cast<int32_t>(offsetof(AddForce_t1939251706, ___everyFrame_21)); }
	inline bool get_everyFrame_21() const { return ___everyFrame_21; }
	inline bool* get_address_of_everyFrame_21() { return &___everyFrame_21; }
	inline void set_everyFrame_21(bool value)
	{
		___everyFrame_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
