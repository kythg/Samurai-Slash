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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.QuaternionCompare
struct  QuaternionCompare_t1128826663  : public QuaternionBaseAction_t3869353585
{
public:
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionCompare::Quaternion1
	FsmQuaternion_t878438756 * ___Quaternion1_13;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.Actions.QuaternionCompare::Quaternion2
	FsmQuaternion_t878438756 * ___Quaternion2_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.QuaternionCompare::equal
	FsmBool_t664485696 * ___equal_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.QuaternionCompare::equalEvent
	FsmEvent_t1258573736 * ___equalEvent_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.QuaternionCompare::notEqualEvent
	FsmEvent_t1258573736 * ___notEqualEvent_17;

public:
	inline static int32_t get_offset_of_Quaternion1_13() { return static_cast<int32_t>(offsetof(QuaternionCompare_t1128826663, ___Quaternion1_13)); }
	inline FsmQuaternion_t878438756 * get_Quaternion1_13() const { return ___Quaternion1_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_Quaternion1_13() { return &___Quaternion1_13; }
	inline void set_Quaternion1_13(FsmQuaternion_t878438756 * value)
	{
		___Quaternion1_13 = value;
		Il2CppCodeGenWriteBarrier(&___Quaternion1_13, value);
	}

	inline static int32_t get_offset_of_Quaternion2_14() { return static_cast<int32_t>(offsetof(QuaternionCompare_t1128826663, ___Quaternion2_14)); }
	inline FsmQuaternion_t878438756 * get_Quaternion2_14() const { return ___Quaternion2_14; }
	inline FsmQuaternion_t878438756 ** get_address_of_Quaternion2_14() { return &___Quaternion2_14; }
	inline void set_Quaternion2_14(FsmQuaternion_t878438756 * value)
	{
		___Quaternion2_14 = value;
		Il2CppCodeGenWriteBarrier(&___Quaternion2_14, value);
	}

	inline static int32_t get_offset_of_equal_15() { return static_cast<int32_t>(offsetof(QuaternionCompare_t1128826663, ___equal_15)); }
	inline FsmBool_t664485696 * get_equal_15() const { return ___equal_15; }
	inline FsmBool_t664485696 ** get_address_of_equal_15() { return &___equal_15; }
	inline void set_equal_15(FsmBool_t664485696 * value)
	{
		___equal_15 = value;
		Il2CppCodeGenWriteBarrier(&___equal_15, value);
	}

	inline static int32_t get_offset_of_equalEvent_16() { return static_cast<int32_t>(offsetof(QuaternionCompare_t1128826663, ___equalEvent_16)); }
	inline FsmEvent_t1258573736 * get_equalEvent_16() const { return ___equalEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_equalEvent_16() { return &___equalEvent_16; }
	inline void set_equalEvent_16(FsmEvent_t1258573736 * value)
	{
		___equalEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___equalEvent_16, value);
	}

	inline static int32_t get_offset_of_notEqualEvent_17() { return static_cast<int32_t>(offsetof(QuaternionCompare_t1128826663, ___notEqualEvent_17)); }
	inline FsmEvent_t1258573736 * get_notEqualEvent_17() const { return ___notEqualEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_notEqualEvent_17() { return &___notEqualEvent_17; }
	inline void set_notEqualEvent_17(FsmEvent_t1258573736 * value)
	{
		___notEqualEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___notEqualEvent_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
