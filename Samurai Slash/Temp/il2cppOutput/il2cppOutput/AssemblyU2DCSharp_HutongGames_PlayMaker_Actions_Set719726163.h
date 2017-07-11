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

// HutongGames.PlayMaker.Actions.SetVector3XYZ
struct  SetVector3XYZ_t719726163  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetVector3XYZ::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SetVector3XYZ::vector3Value
	FsmVector3_t3996534004 * ___vector3Value_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetVector3XYZ::x
	FsmFloat_t937133978 * ___x_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetVector3XYZ::y
	FsmFloat_t937133978 * ___y_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetVector3XYZ::z
	FsmFloat_t937133978 * ___z_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetVector3XYZ::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_vector3Variable_11() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___vector3Variable_11)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_11() const { return ___vector3Variable_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_11() { return &___vector3Variable_11; }
	inline void set_vector3Variable_11(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_11, value);
	}

	inline static int32_t get_offset_of_vector3Value_12() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___vector3Value_12)); }
	inline FsmVector3_t3996534004 * get_vector3Value_12() const { return ___vector3Value_12; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Value_12() { return &___vector3Value_12; }
	inline void set_vector3Value_12(FsmVector3_t3996534004 * value)
	{
		___vector3Value_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Value_12, value);
	}

	inline static int32_t get_offset_of_x_13() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___x_13)); }
	inline FsmFloat_t937133978 * get_x_13() const { return ___x_13; }
	inline FsmFloat_t937133978 ** get_address_of_x_13() { return &___x_13; }
	inline void set_x_13(FsmFloat_t937133978 * value)
	{
		___x_13 = value;
		Il2CppCodeGenWriteBarrier(&___x_13, value);
	}

	inline static int32_t get_offset_of_y_14() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___y_14)); }
	inline FsmFloat_t937133978 * get_y_14() const { return ___y_14; }
	inline FsmFloat_t937133978 ** get_address_of_y_14() { return &___y_14; }
	inline void set_y_14(FsmFloat_t937133978 * value)
	{
		___y_14 = value;
		Il2CppCodeGenWriteBarrier(&___y_14, value);
	}

	inline static int32_t get_offset_of_z_15() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___z_15)); }
	inline FsmFloat_t937133978 * get_z_15() const { return ___z_15; }
	inline FsmFloat_t937133978 ** get_address_of_z_15() { return &___z_15; }
	inline void set_z_15(FsmFloat_t937133978 * value)
	{
		___z_15 = value;
		Il2CppCodeGenWriteBarrier(&___z_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(SetVector3XYZ_t719726163, ___everyFrame_16)); }
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
