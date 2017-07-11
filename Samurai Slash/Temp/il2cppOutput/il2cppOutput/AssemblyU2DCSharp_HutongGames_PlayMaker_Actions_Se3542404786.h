#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector2[]
struct FsmVector2U5BU5D_t381696854;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SelectRandomVector2
struct  SelectRandomVector2_t3542404786  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2[] HutongGames.PlayMaker.Actions.SelectRandomVector2::vector2Array
	FsmVector2U5BU5D_t381696854* ___vector2Array_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.SelectRandomVector2::weights
	FsmFloatU5BU5D_t4177556671* ___weights_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.SelectRandomVector2::storeVector2
	FsmVector2_t2430450063 * ___storeVector2_13;

public:
	inline static int32_t get_offset_of_vector2Array_11() { return static_cast<int32_t>(offsetof(SelectRandomVector2_t3542404786, ___vector2Array_11)); }
	inline FsmVector2U5BU5D_t381696854* get_vector2Array_11() const { return ___vector2Array_11; }
	inline FsmVector2U5BU5D_t381696854** get_address_of_vector2Array_11() { return &___vector2Array_11; }
	inline void set_vector2Array_11(FsmVector2U5BU5D_t381696854* value)
	{
		___vector2Array_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Array_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(SelectRandomVector2_t3542404786, ___weights_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_12() const { return ___weights_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_storeVector2_13() { return static_cast<int32_t>(offsetof(SelectRandomVector2_t3542404786, ___storeVector2_13)); }
	inline FsmVector2_t2430450063 * get_storeVector2_13() const { return ___storeVector2_13; }
	inline FsmVector2_t2430450063 ** get_address_of_storeVector2_13() { return &___storeVector2_13; }
	inline void set_storeVector2_13(FsmVector2_t2430450063 * value)
	{
		___storeVector2_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector2_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
