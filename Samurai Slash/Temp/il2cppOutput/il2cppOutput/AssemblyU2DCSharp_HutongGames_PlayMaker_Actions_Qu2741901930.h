#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Qu3869353585.h"

// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.QuaternionInverse
struct  QuaternionInverse_t2741901930  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionInverse::rotation
	FsmQuaternion_t878438756 * ___rotation_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionInverse::result
	FsmQuaternion_t878438756 * ___result_14;

public:
	inline static int32_t get_offset_of_rotation_13() { return static_cast<int32_t>(offsetof(QuaternionInverse_t2741901930, ___rotation_13)); }
	inline FsmQuaternion_t878438756 * get_rotation_13() const { return ___rotation_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_rotation_13() { return &___rotation_13; }
	inline void set_rotation_13(FsmQuaternion_t878438756 * value)
	{
		___rotation_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotation_13, value);
	}

	inline static int32_t get_offset_of_result_14() { return static_cast<int32_t>(offsetof(QuaternionInverse_t2741901930, ___result_14)); }
	inline FsmQuaternion_t878438756 * get_result_14() const { return ___result_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_result_14() { return &___result_14; }
	inline void set_result_14(FsmQuaternion_t878438756 * value)
	{
		___result_14 = value;
		Il2CppCodeGenWriteBarrier(&___result_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
