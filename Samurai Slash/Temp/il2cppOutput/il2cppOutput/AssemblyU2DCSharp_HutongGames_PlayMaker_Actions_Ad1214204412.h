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
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddForce2d
struct  AddForce2d_t1214204412  : public ComponentAction_1_t1103773636
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddForce2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// UnityEngine.ForceMode2D HutongGames.PlayMaker.Actions.AddForce2d::forceMode
	int32_t ___forceMode_14;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.AddForce2d::atPosition
	FsmVector2_t2430450063 * ___atPosition_15;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.AddForce2d::vector
	FsmVector2_t2430450063 * ___vector_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddForce2d::x
	FsmFloat_t937133978 * ___x_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddForce2d::y
	FsmFloat_t937133978 * ___y_18;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddForce2d::vector3
	FsmVector3_t3996534004 * ___vector3_19;
	// System.Boolean HutongGames.PlayMaker.Actions.AddForce2d::everyFrame
	bool ___everyFrame_20;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_forceMode_14() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___forceMode_14)); }
	inline int32_t get_forceMode_14() const { return ___forceMode_14; }
	inline int32_t* get_address_of_forceMode_14() { return &___forceMode_14; }
	inline void set_forceMode_14(int32_t value)
	{
		___forceMode_14 = value;
	}

	inline static int32_t get_offset_of_atPosition_15() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___atPosition_15)); }
	inline FsmVector2_t2430450063 * get_atPosition_15() const { return ___atPosition_15; }
	inline FsmVector2_t2430450063 ** get_address_of_atPosition_15() { return &___atPosition_15; }
	inline void set_atPosition_15(FsmVector2_t2430450063 * value)
	{
		___atPosition_15 = value;
		Il2CppCodeGenWriteBarrier(&___atPosition_15, value);
	}

	inline static int32_t get_offset_of_vector_16() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___vector_16)); }
	inline FsmVector2_t2430450063 * get_vector_16() const { return ___vector_16; }
	inline FsmVector2_t2430450063 ** get_address_of_vector_16() { return &___vector_16; }
	inline void set_vector_16(FsmVector2_t2430450063 * value)
	{
		___vector_16 = value;
		Il2CppCodeGenWriteBarrier(&___vector_16, value);
	}

	inline static int32_t get_offset_of_x_17() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___x_17)); }
	inline FsmFloat_t937133978 * get_x_17() const { return ___x_17; }
	inline FsmFloat_t937133978 ** get_address_of_x_17() { return &___x_17; }
	inline void set_x_17(FsmFloat_t937133978 * value)
	{
		___x_17 = value;
		Il2CppCodeGenWriteBarrier(&___x_17, value);
	}

	inline static int32_t get_offset_of_y_18() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___y_18)); }
	inline FsmFloat_t937133978 * get_y_18() const { return ___y_18; }
	inline FsmFloat_t937133978 ** get_address_of_y_18() { return &___y_18; }
	inline void set_y_18(FsmFloat_t937133978 * value)
	{
		___y_18 = value;
		Il2CppCodeGenWriteBarrier(&___y_18, value);
	}

	inline static int32_t get_offset_of_vector3_19() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___vector3_19)); }
	inline FsmVector3_t3996534004 * get_vector3_19() const { return ___vector3_19; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3_19() { return &___vector3_19; }
	inline void set_vector3_19(FsmVector3_t3996534004 * value)
	{
		___vector3_19 = value;
		Il2CppCodeGenWriteBarrier(&___vector3_19, value);
	}

	inline static int32_t get_offset_of_everyFrame_20() { return static_cast<int32_t>(offsetof(AddForce2d_t1214204412, ___everyFrame_20)); }
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
