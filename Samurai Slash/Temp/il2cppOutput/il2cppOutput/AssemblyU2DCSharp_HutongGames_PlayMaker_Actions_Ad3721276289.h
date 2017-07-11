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

// HutongGames.PlayMaker.Actions.AddTorque
struct  AddTorque_t3721276289  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddTorque::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddTorque::vector
	FsmVector3_t3996534004 * ___vector_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddTorque::x
	FsmFloat_t937133978 * ___x_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddTorque::y
	FsmFloat_t937133978 * ___y_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddTorque::z
	FsmFloat_t937133978 * ___z_17;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.AddTorque::space
	int32_t ___space_18;
	// UnityEngine.ForceMode HutongGames.PlayMaker.Actions.AddTorque::forceMode
	int32_t ___forceMode_19;
	// System.Boolean HutongGames.PlayMaker.Actions.AddTorque::everyFrame
	bool ___everyFrame_20;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_vector_14() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___vector_14)); }
	inline FsmVector3_t3996534004 * get_vector_14() const { return ___vector_14; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_14() { return &___vector_14; }
	inline void set_vector_14(FsmVector3_t3996534004 * value)
	{
		___vector_14 = value;
		Il2CppCodeGenWriteBarrier(&___vector_14, value);
	}

	inline static int32_t get_offset_of_x_15() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___x_15)); }
	inline FsmFloat_t937133978 * get_x_15() const { return ___x_15; }
	inline FsmFloat_t937133978 ** get_address_of_x_15() { return &___x_15; }
	inline void set_x_15(FsmFloat_t937133978 * value)
	{
		___x_15 = value;
		Il2CppCodeGenWriteBarrier(&___x_15, value);
	}

	inline static int32_t get_offset_of_y_16() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___y_16)); }
	inline FsmFloat_t937133978 * get_y_16() const { return ___y_16; }
	inline FsmFloat_t937133978 ** get_address_of_y_16() { return &___y_16; }
	inline void set_y_16(FsmFloat_t937133978 * value)
	{
		___y_16 = value;
		Il2CppCodeGenWriteBarrier(&___y_16, value);
	}

	inline static int32_t get_offset_of_z_17() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___z_17)); }
	inline FsmFloat_t937133978 * get_z_17() const { return ___z_17; }
	inline FsmFloat_t937133978 ** get_address_of_z_17() { return &___z_17; }
	inline void set_z_17(FsmFloat_t937133978 * value)
	{
		___z_17 = value;
		Il2CppCodeGenWriteBarrier(&___z_17, value);
	}

	inline static int32_t get_offset_of_space_18() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___space_18)); }
	inline int32_t get_space_18() const { return ___space_18; }
	inline int32_t* get_address_of_space_18() { return &___space_18; }
	inline void set_space_18(int32_t value)
	{
		___space_18 = value;
	}

	inline static int32_t get_offset_of_forceMode_19() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___forceMode_19)); }
	inline int32_t get_forceMode_19() const { return ___forceMode_19; }
	inline int32_t* get_address_of_forceMode_19() { return &___forceMode_19; }
	inline void set_forceMode_19(int32_t value)
	{
		___forceMode_19 = value;
	}

	inline static int32_t get_offset_of_everyFrame_20() { return static_cast<int32_t>(offsetof(AddTorque_t3721276289, ___everyFrame_20)); }
	inline bool get_everyFrame_20() const { return ___everyFrame_20; }
	inline bool* get_address_of_everyFrame_20() { return &___everyFrame_20; }
	inline void set_everyFrame_20(bool value)
	{
		___everyFrame_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
