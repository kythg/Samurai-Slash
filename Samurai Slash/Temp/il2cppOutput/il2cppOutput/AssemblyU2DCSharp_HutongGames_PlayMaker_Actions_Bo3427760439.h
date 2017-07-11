#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool[]
struct FsmBoolU5BU5D_t3830815681;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BoolAllTrue
struct  BoolAllTrue_t3427760439  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool[] HutongGames.PlayMaker.Actions.BoolAllTrue::boolVariables
	FsmBoolU5BU5D_t3830815681* ___boolVariables_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.BoolAllTrue::sendEvent
	FsmEvent_t1258573736 * ___sendEvent_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BoolAllTrue::storeResult
	FsmBool_t664485696 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.BoolAllTrue::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_boolVariables_11() { return static_cast<int32_t>(offsetof(BoolAllTrue_t3427760439, ___boolVariables_11)); }
	inline FsmBoolU5BU5D_t3830815681* get_boolVariables_11() const { return ___boolVariables_11; }
	inline FsmBoolU5BU5D_t3830815681** get_address_of_boolVariables_11() { return &___boolVariables_11; }
	inline void set_boolVariables_11(FsmBoolU5BU5D_t3830815681* value)
	{
		___boolVariables_11 = value;
		Il2CppCodeGenWriteBarrier(&___boolVariables_11, value);
	}

	inline static int32_t get_offset_of_sendEvent_12() { return static_cast<int32_t>(offsetof(BoolAllTrue_t3427760439, ___sendEvent_12)); }
	inline FsmEvent_t1258573736 * get_sendEvent_12() const { return ___sendEvent_12; }
	inline FsmEvent_t1258573736 ** get_address_of_sendEvent_12() { return &___sendEvent_12; }
	inline void set_sendEvent_12(FsmEvent_t1258573736 * value)
	{
		___sendEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___sendEvent_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(BoolAllTrue_t3427760439, ___storeResult_13)); }
	inline FsmBool_t664485696 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmBool_t664485696 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(BoolAllTrue_t3427760439, ___everyFrame_14)); }
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
