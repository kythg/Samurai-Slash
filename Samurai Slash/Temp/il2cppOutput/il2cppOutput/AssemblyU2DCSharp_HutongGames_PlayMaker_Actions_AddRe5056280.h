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

// HutongGames.PlayMaker.Actions.AddRelativeForce2d
struct  AddRelativeForce2d_t5056280  : public ComponentAction_1_t1103773636
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddRelativeForce2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// UnityEngine.ForceMode2D HutongGames.PlayMaker.Actions.AddRelativeForce2d::forceMode
	int32_t ___forceMode_14;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.AddRelativeForce2d::vector
	FsmVector2_t2430450063 * ___vector_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddRelativeForce2d::x
	FsmFloat_t937133978 * ___x_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AddRelativeForce2d::y
	FsmFloat_t937133978 * ___y_17;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AddRelativeForce2d::vector3
	FsmVector3_t3996534004 * ___vector3_18;
	// System.Boolean HutongGames.PlayMaker.Actions.AddRelativeForce2d::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_forceMode_14() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___forceMode_14)); }
	inline int32_t get_forceMode_14() const { return ___forceMode_14; }
	inline int32_t* get_address_of_forceMode_14() { return &___forceMode_14; }
	inline void set_forceMode_14(int32_t value)
	{
		___forceMode_14 = value;
	}

	inline static int32_t get_offset_of_vector_15() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___vector_15)); }
	inline FsmVector2_t2430450063 * get_vector_15() const { return ___vector_15; }
	inline FsmVector2_t2430450063 ** get_address_of_vector_15() { return &___vector_15; }
	inline void set_vector_15(FsmVector2_t2430450063 * value)
	{
		___vector_15 = value;
		Il2CppCodeGenWriteBarrier(&___vector_15, value);
	}

	inline static int32_t get_offset_of_x_16() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___x_16)); }
	inline FsmFloat_t937133978 * get_x_16() const { return ___x_16; }
	inline FsmFloat_t937133978 ** get_address_of_x_16() { return &___x_16; }
	inline void set_x_16(FsmFloat_t937133978 * value)
	{
		___x_16 = value;
		Il2CppCodeGenWriteBarrier(&___x_16, value);
	}

	inline static int32_t get_offset_of_y_17() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___y_17)); }
	inline FsmFloat_t937133978 * get_y_17() const { return ___y_17; }
	inline FsmFloat_t937133978 ** get_address_of_y_17() { return &___y_17; }
	inline void set_y_17(FsmFloat_t937133978 * value)
	{
		___y_17 = value;
		Il2CppCodeGenWriteBarrier(&___y_17, value);
	}

	inline static int32_t get_offset_of_vector3_18() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___vector3_18)); }
	inline FsmVector3_t3996534004 * get_vector3_18() const { return ___vector3_18; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3_18() { return &___vector3_18; }
	inline void set_vector3_18(FsmVector3_t3996534004 * value)
	{
		___vector3_18 = value;
		Il2CppCodeGenWriteBarrier(&___vector3_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(AddRelativeForce2d_t5056280, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
