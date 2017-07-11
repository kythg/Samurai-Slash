#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BoolTest
struct  BoolTest_t268214694  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolTest::boolVariable
	FsmBool_t664485696 * ___boolVariable_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BoolTest::isTrue
	FsmEvent_t1258573736 * ___isTrue_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BoolTest::isFalse
	FsmEvent_t1258573736 * ___isFalse_13;
	// System.Boolean HutongGames.PlayMaker.Actions.BoolTest::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_boolVariable_11() { return static_cast<int32_t>(offsetof(BoolTest_t268214694, ___boolVariable_11)); }
	inline FsmBool_t664485696 * get_boolVariable_11() const { return ___boolVariable_11; }
	inline FsmBool_t664485696 ** get_address_of_boolVariable_11() { return &___boolVariable_11; }
	inline void set_boolVariable_11(FsmBool_t664485696 * value)
	{
		___boolVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariable_11, value);
	}

	inline static int32_t get_offset_of_isTrue_12() { return static_cast<int32_t>(offsetof(BoolTest_t268214694, ___isTrue_12)); }
	inline FsmEvent_t1258573736 * get_isTrue_12() const { return ___isTrue_12; }
	inline FsmEvent_t1258573736 ** get_address_of_isTrue_12() { return &___isTrue_12; }
	inline void set_isTrue_12(FsmEvent_t1258573736 * value)
	{
		___isTrue_12 = value;
		Il2CppCodeGenWriteBarrier(&___isTrue_12, value);
	}

	inline static int32_t get_offset_of_isFalse_13() { return static_cast<int32_t>(offsetof(BoolTest_t268214694, ___isFalse_13)); }
	inline FsmEvent_t1258573736 * get_isFalse_13() const { return ___isFalse_13; }
	inline FsmEvent_t1258573736 ** get_address_of_isFalse_13() { return &___isFalse_13; }
	inline void set_isFalse_13(FsmEvent_t1258573736 * value)
	{
		___isFalse_13 = value;
		Il2CppCodeGenWriteBarrier(&___isFalse_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(BoolTest_t268214694, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
