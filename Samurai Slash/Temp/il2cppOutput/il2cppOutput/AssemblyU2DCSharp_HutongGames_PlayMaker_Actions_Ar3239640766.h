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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayGetNext
struct  ArrayGetNext_t3239640766  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayGetNext::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayGetNext::startIndex
	FsmInt_t1273009179 * ___startIndex_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayGetNext::endIndex
	FsmInt_t1273009179 * ___endIndex_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayGetNext::loopEvent
	FsmEvent_t1258573736 * ___loopEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayGetNext::finishedEvent
	FsmEvent_t1258573736 * ___finishedEvent_15;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.ArrayGetNext::result
	FsmVar_t2872592513 * ___result_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayGetNext::currentIndex
	FsmInt_t1273009179 * ___currentIndex_17;
	// System.Int32 HutongGames.PlayMaker.Actions.ArrayGetNext::nextItemIndex
	int32_t ___nextItemIndex_18;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_startIndex_12() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___startIndex_12)); }
	inline FsmInt_t1273009179 * get_startIndex_12() const { return ___startIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_startIndex_12() { return &___startIndex_12; }
	inline void set_startIndex_12(FsmInt_t1273009179 * value)
	{
		___startIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___startIndex_12, value);
	}

	inline static int32_t get_offset_of_endIndex_13() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___endIndex_13)); }
	inline FsmInt_t1273009179 * get_endIndex_13() const { return ___endIndex_13; }
	inline FsmInt_t1273009179 ** get_address_of_endIndex_13() { return &___endIndex_13; }
	inline void set_endIndex_13(FsmInt_t1273009179 * value)
	{
		___endIndex_13 = value;
		Il2CppCodeGenWriteBarrier(&___endIndex_13, value);
	}

	inline static int32_t get_offset_of_loopEvent_14() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___loopEvent_14)); }
	inline FsmEvent_t1258573736 * get_loopEvent_14() const { return ___loopEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_loopEvent_14() { return &___loopEvent_14; }
	inline void set_loopEvent_14(FsmEvent_t1258573736 * value)
	{
		___loopEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___loopEvent_14, value);
	}

	inline static int32_t get_offset_of_finishedEvent_15() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___finishedEvent_15)); }
	inline FsmEvent_t1258573736 * get_finishedEvent_15() const { return ___finishedEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_finishedEvent_15() { return &___finishedEvent_15; }
	inline void set_finishedEvent_15(FsmEvent_t1258573736 * value)
	{
		___finishedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___finishedEvent_15, value);
	}

	inline static int32_t get_offset_of_result_16() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___result_16)); }
	inline FsmVar_t2872592513 * get_result_16() const { return ___result_16; }
	inline FsmVar_t2872592513 ** get_address_of_result_16() { return &___result_16; }
	inline void set_result_16(FsmVar_t2872592513 * value)
	{
		___result_16 = value;
		Il2CppCodeGenWriteBarrier(&___result_16, value);
	}

	inline static int32_t get_offset_of_currentIndex_17() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___currentIndex_17)); }
	inline FsmInt_t1273009179 * get_currentIndex_17() const { return ___currentIndex_17; }
	inline FsmInt_t1273009179 ** get_address_of_currentIndex_17() { return &___currentIndex_17; }
	inline void set_currentIndex_17(FsmInt_t1273009179 * value)
	{
		___currentIndex_17 = value;
		Il2CppCodeGenWriteBarrier(&___currentIndex_17, value);
	}

	inline static int32_t get_offset_of_nextItemIndex_18() { return static_cast<int32_t>(offsetof(ArrayGetNext_t3239640766, ___nextItemIndex_18)); }
	inline int32_t get_nextItemIndex_18() const { return ___nextItemIndex_18; }
	inline int32_t* get_address_of_nextItemIndex_18() { return &___nextItemIndex_18; }
	inline void set_nextItemIndex_18(int32_t value)
	{
		___nextItemIndex_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
