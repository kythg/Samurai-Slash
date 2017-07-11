#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetRandomRotation
struct  SetRandomRotation_t3063375797  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetRandomRotation::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetRandomRotation::x
	FsmBool_t664485696 * ___x_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetRandomRotation::y
	FsmBool_t664485696 * ___y_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetRandomRotation::z
	FsmBool_t664485696 * ___z_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SetRandomRotation_t3063375797, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_x_12() { return static_cast<int32_t>(offsetof(SetRandomRotation_t3063375797, ___x_12)); }
	inline FsmBool_t664485696 * get_x_12() const { return ___x_12; }
	inline FsmBool_t664485696 ** get_address_of_x_12() { return &___x_12; }
	inline void set_x_12(FsmBool_t664485696 * value)
	{
		___x_12 = value;
		Il2CppCodeGenWriteBarrier(&___x_12, value);
	}

	inline static int32_t get_offset_of_y_13() { return static_cast<int32_t>(offsetof(SetRandomRotation_t3063375797, ___y_13)); }
	inline FsmBool_t664485696 * get_y_13() const { return ___y_13; }
	inline FsmBool_t664485696 ** get_address_of_y_13() { return &___y_13; }
	inline void set_y_13(FsmBool_t664485696 * value)
	{
		___y_13 = value;
		Il2CppCodeGenWriteBarrier(&___y_13, value);
	}

	inline static int32_t get_offset_of_z_14() { return static_cast<int32_t>(offsetof(SetRandomRotation_t3063375797, ___z_14)); }
	inline FsmBool_t664485696 * get_z_14() const { return ___z_14; }
	inline FsmBool_t664485696 ** get_address_of_z_14() { return &___z_14; }
	inline void set_z_14(FsmBool_t664485696 * value)
	{
		___z_14 = value;
		Il2CppCodeGenWriteBarrier(&___z_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
