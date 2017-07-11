#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co1103773636.h"
#include "UnityEngine_UnityEngine_ForceMode2D4177575466.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddTorque2d
struct  AddTorque2d_t321609335  : public ComponentAction_1_t1103773636
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddTorque2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// UnityEngine.ForceMode2D HutongGames.PlayMaker.Actions.AddTorque2d::forceMode
	int32_t ___forceMode_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddTorque2d::torque
	FsmFloat_t937133978 * ___torque_15;
	// System.Boolean HutongGames.PlayMaker.Actions.AddTorque2d::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddTorque2d_t321609335, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_forceMode_14() { return static_cast<int32_t>(offsetof(AddTorque2d_t321609335, ___forceMode_14)); }
	inline int32_t get_forceMode_14() const { return ___forceMode_14; }
	inline int32_t* get_address_of_forceMode_14() { return &___forceMode_14; }
	inline void set_forceMode_14(int32_t value)
	{
		___forceMode_14 = value;
	}

	inline static int32_t get_offset_of_torque_15() { return static_cast<int32_t>(offsetof(AddTorque2d_t321609335, ___torque_15)); }
	inline FsmFloat_t937133978 * get_torque_15() const { return ___torque_15; }
	inline FsmFloat_t937133978 ** get_address_of_torque_15() { return &___torque_15; }
	inline void set_torque_15(FsmFloat_t937133978 * value)
	{
		___torque_15 = value;
		Il2CppCodeGenWriteBarrier(&___torque_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(AddTorque2d_t321609335, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
