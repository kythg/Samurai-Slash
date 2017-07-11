#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Co1103773636.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetVelocity2d
struct  GetVelocity2d_t3435973141  : public ComponentAction_1_t1103773636
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetVelocity2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetVelocity2d::vector
	FsmVector2_t2430450063 * ___vector_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVelocity2d::x
	FsmFloat_t937133978 * ___x_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVelocity2d::y
	FsmFloat_t937133978 * ___y_16;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.GetVelocity2d::space
	int32_t ___space_17;
	// System.Boolean HutongGames.PlayMaker.Actions.GetVelocity2d::everyFrame
	bool ___everyFrame_18;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_vector_14() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___vector_14)); }
	inline FsmVector2_t2430450063 * get_vector_14() const { return ___vector_14; }
	inline FsmVector2_t2430450063 ** get_address_of_vector_14() { return &___vector_14; }
	inline void set_vector_14(FsmVector2_t2430450063 * value)
	{
		___vector_14 = value;
		Il2CppCodeGenWriteBarrier(&___vector_14, value);
	}

	inline static int32_t get_offset_of_x_15() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___x_15)); }
	inline FsmFloat_t937133978 * get_x_15() const { return ___x_15; }
	inline FsmFloat_t937133978 ** get_address_of_x_15() { return &___x_15; }
	inline void set_x_15(FsmFloat_t937133978 * value)
	{
		___x_15 = value;
		Il2CppCodeGenWriteBarrier(&___x_15, value);
	}

	inline static int32_t get_offset_of_y_16() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___y_16)); }
	inline FsmFloat_t937133978 * get_y_16() const { return ___y_16; }
	inline FsmFloat_t937133978 ** get_address_of_y_16() { return &___y_16; }
	inline void set_y_16(FsmFloat_t937133978 * value)
	{
		___y_16 = value;
		Il2CppCodeGenWriteBarrier(&___y_16, value);
	}

	inline static int32_t get_offset_of_space_17() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___space_17)); }
	inline int32_t get_space_17() const { return ___space_17; }
	inline int32_t* get_address_of_space_17() { return &___space_17; }
	inline void set_space_17(int32_t value)
	{
		___space_17 = value;
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(GetVelocity2d_t3435973141, ___everyFrame_18)); }
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
