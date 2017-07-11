#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayCompare
struct  ArrayCompare_t4152220784  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayCompare::array1
	FsmArray_t527459893 * ___array1_11;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayCompare::array2
	FsmArray_t527459893 * ___array2_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayCompare::SequenceEqual
	FsmEvent_t1258573736 * ___SequenceEqual_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayCompare::SequenceNotEqual
	FsmEvent_t1258573736 * ___SequenceNotEqual_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ArrayCompare::storeResult
	FsmBool_t664485696 * ___storeResult_15;
	// System.Boolean HutongGames.PlayMaker.Actions.ArrayCompare::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_array1_11() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___array1_11)); }
	inline FsmArray_t527459893 * get_array1_11() const { return ___array1_11; }
	inline FsmArray_t527459893 ** get_address_of_array1_11() { return &___array1_11; }
	inline void set_array1_11(FsmArray_t527459893 * value)
	{
		___array1_11 = value;
		Il2CppCodeGenWriteBarrier(&___array1_11, value);
	}

	inline static int32_t get_offset_of_array2_12() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___array2_12)); }
	inline FsmArray_t527459893 * get_array2_12() const { return ___array2_12; }
	inline FsmArray_t527459893 ** get_address_of_array2_12() { return &___array2_12; }
	inline void set_array2_12(FsmArray_t527459893 * value)
	{
		___array2_12 = value;
		Il2CppCodeGenWriteBarrier(&___array2_12, value);
	}

	inline static int32_t get_offset_of_SequenceEqual_13() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___SequenceEqual_13)); }
	inline FsmEvent_t1258573736 * get_SequenceEqual_13() const { return ___SequenceEqual_13; }
	inline FsmEvent_t1258573736 ** get_address_of_SequenceEqual_13() { return &___SequenceEqual_13; }
	inline void set_SequenceEqual_13(FsmEvent_t1258573736 * value)
	{
		___SequenceEqual_13 = value;
		Il2CppCodeGenWriteBarrier(&___SequenceEqual_13, value);
	}

	inline static int32_t get_offset_of_SequenceNotEqual_14() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___SequenceNotEqual_14)); }
	inline FsmEvent_t1258573736 * get_SequenceNotEqual_14() const { return ___SequenceNotEqual_14; }
	inline FsmEvent_t1258573736 ** get_address_of_SequenceNotEqual_14() { return &___SequenceNotEqual_14; }
	inline void set_SequenceNotEqual_14(FsmEvent_t1258573736 * value)
	{
		___SequenceNotEqual_14 = value;
		Il2CppCodeGenWriteBarrier(&___SequenceNotEqual_14, value);
	}

	inline static int32_t get_offset_of_storeResult_15() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___storeResult_15)); }
	inline FsmBool_t664485696 * get_storeResult_15() const { return ___storeResult_15; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_15() { return &___storeResult_15; }
	inline void set_storeResult_15(FsmBool_t664485696 * value)
	{
		___storeResult_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(ArrayCompare_t4152220784, ___everyFrame_16)); }
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
