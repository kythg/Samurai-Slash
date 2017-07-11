#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Run720811133.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;
// HutongGames.PlayMaker.FsmTemplateControl
struct FsmTemplateControl_t924276959;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayForEach
struct  ArrayForEach_t1062882755  : public RunFSMAction_t720811133
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayForEach::array
	FsmArray_t527459893 * ___array_12;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.ArrayForEach::storeItem
	FsmVar_t2872592513 * ___storeItem_13;
	// HutongGames.PlayMaker.FsmTemplateControl HutongGames.PlayMaker.Actions.ArrayForEach::fsmTemplateControl
	FsmTemplateControl_t924276959 * ___fsmTemplateControl_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayForEach::finishEvent
	FsmEvent_t1258573736 * ___finishEvent_15;
	// System.Int32 HutongGames.PlayMaker.Actions.ArrayForEach::currentIndex
	int32_t ___currentIndex_16;

public:
	inline static int32_t get_offset_of_array_12() { return static_cast<int32_t>(offsetof(ArrayForEach_t1062882755, ___array_12)); }
	inline FsmArray_t527459893 * get_array_12() const { return ___array_12; }
	inline FsmArray_t527459893 ** get_address_of_array_12() { return &___array_12; }
	inline void set_array_12(FsmArray_t527459893 * value)
	{
		___array_12 = value;
		Il2CppCodeGenWriteBarrier(&___array_12, value);
	}

	inline static int32_t get_offset_of_storeItem_13() { return static_cast<int32_t>(offsetof(ArrayForEach_t1062882755, ___storeItem_13)); }
	inline FsmVar_t2872592513 * get_storeItem_13() const { return ___storeItem_13; }
	inline FsmVar_t2872592513 ** get_address_of_storeItem_13() { return &___storeItem_13; }
	inline void set_storeItem_13(FsmVar_t2872592513 * value)
	{
		___storeItem_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeItem_13, value);
	}

	inline static int32_t get_offset_of_fsmTemplateControl_14() { return static_cast<int32_t>(offsetof(ArrayForEach_t1062882755, ___fsmTemplateControl_14)); }
	inline FsmTemplateControl_t924276959 * get_fsmTemplateControl_14() const { return ___fsmTemplateControl_14; }
	inline FsmTemplateControl_t924276959 ** get_address_of_fsmTemplateControl_14() { return &___fsmTemplateControl_14; }
	inline void set_fsmTemplateControl_14(FsmTemplateControl_t924276959 * value)
	{
		___fsmTemplateControl_14 = value;
		Il2CppCodeGenWriteBarrier(&___fsmTemplateControl_14, value);
	}

	inline static int32_t get_offset_of_finishEvent_15() { return static_cast<int32_t>(offsetof(ArrayForEach_t1062882755, ___finishEvent_15)); }
	inline FsmEvent_t1258573736 * get_finishEvent_15() const { return ___finishEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_finishEvent_15() { return &___finishEvent_15; }
	inline void set_finishEvent_15(FsmEvent_t1258573736 * value)
	{
		___finishEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___finishEvent_15, value);
	}

	inline static int32_t get_offset_of_currentIndex_16() { return static_cast<int32_t>(offsetof(ArrayForEach_t1062882755, ___currentIndex_16)); }
	inline int32_t get_currentIndex_16() const { return ___currentIndex_16; }
	inline int32_t* get_address_of_currentIndex_16() { return &___currentIndex_16; }
	inline void set_currentIndex_16(int32_t value)
	{
		___currentIndex_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
