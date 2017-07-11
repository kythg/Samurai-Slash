#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGravity
struct  SetGravity_t628948462  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetGravity::vector
	FsmVector3_t3996534004 * ___vector_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetGravity::x
	FsmFloat_t937133978 * ___x_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetGravity::y
	FsmFloat_t937133978 * ___y_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetGravity::z
	FsmFloat_t937133978 * ___z_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetGravity::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_vector_11() { return static_cast<int32_t>(offsetof(SetGravity_t628948462, ___vector_11)); }
	inline FsmVector3_t3996534004 * get_vector_11() const { return ___vector_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_11() { return &___vector_11; }
	inline void set_vector_11(FsmVector3_t3996534004 * value)
	{
		___vector_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector_11, value);
	}

	inline static int32_t get_offset_of_x_12() { return static_cast<int32_t>(offsetof(SetGravity_t628948462, ___x_12)); }
	inline FsmFloat_t937133978 * get_x_12() const { return ___x_12; }
	inline FsmFloat_t937133978 ** get_address_of_x_12() { return &___x_12; }
	inline void set_x_12(FsmFloat_t937133978 * value)
	{
		___x_12 = value;
		Il2CppCodeGenWriteBarrier(&___x_12, value);
	}

	inline static int32_t get_offset_of_y_13() { return static_cast<int32_t>(offsetof(SetGravity_t628948462, ___y_13)); }
	inline FsmFloat_t937133978 * get_y_13() const { return ___y_13; }
	inline FsmFloat_t937133978 ** get_address_of_y_13() { return &___y_13; }
	inline void set_y_13(FsmFloat_t937133978 * value)
	{
		___y_13 = value;
		Il2CppCodeGenWriteBarrier(&___y_13, value);
	}

	inline static int32_t get_offset_of_z_14() { return static_cast<int32_t>(offsetof(SetGravity_t628948462, ___z_14)); }
	inline FsmFloat_t937133978 * get_z_14() const { return ___z_14; }
	inline FsmFloat_t937133978 ** get_address_of_z_14() { return &___z_14; }
	inline void set_z_14(FsmFloat_t937133978 * value)
	{
		___z_14 = value;
		Il2CppCodeGenWriteBarrier(&___z_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetGravity_t628948462, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
