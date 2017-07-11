#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3[]
struct FsmVector3U5BU5D_t643261629;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t4177556671;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SelectRandomVector3
struct  SelectRandomVector3_t3542404785  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3[] HutongGames.PlayMaker.Actions.SelectRandomVector3::vector3Array
	FsmVector3U5BU5D_t643261629* ___vector3Array_11;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.Actions.SelectRandomVector3::weights
	FsmFloatU5BU5D_t4177556671* ___weights_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.SelectRandomVector3::storeVector3
	FsmVector3_t3996534004 * ___storeVector3_13;

public:
	inline static int32_t get_offset_of_vector3Array_11() { return static_cast<int32_t>(offsetof(SelectRandomVector3_t3542404785, ___vector3Array_11)); }
	inline FsmVector3U5BU5D_t643261629* get_vector3Array_11() const { return ___vector3Array_11; }
	inline FsmVector3U5BU5D_t643261629** get_address_of_vector3Array_11() { return &___vector3Array_11; }
	inline void set_vector3Array_11(FsmVector3U5BU5D_t643261629* value)
	{
		___vector3Array_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Array_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(SelectRandomVector3_t3542404785, ___weights_12)); }
	inline FsmFloatU5BU5D_t4177556671* get_weights_12() const { return ___weights_12; }
	inline FsmFloatU5BU5D_t4177556671** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(FsmFloatU5BU5D_t4177556671* value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_storeVector3_13() { return static_cast<int32_t>(offsetof(SelectRandomVector3_t3542404785, ___storeVector3_13)); }
	inline FsmVector3_t3996534004 * get_storeVector3_13() const { return ___storeVector3_13; }
	inline FsmVector3_t3996534004 ** get_address_of_storeVector3_13() { return &___storeVector3_13; }
	inline void set_storeVector3_13(FsmVector3_t3996534004 * value)
	{
		___storeVector3_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector3_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
