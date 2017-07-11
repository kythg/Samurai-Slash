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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayLength
struct  ArrayLength_t4248777313  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayLength::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayLength::length
	FsmInt_t1273009179 * ___length_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ArrayLength::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayLength_t4248777313, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_length_12() { return static_cast<int32_t>(offsetof(ArrayLength_t4248777313, ___length_12)); }
	inline FsmInt_t1273009179 * get_length_12() const { return ___length_12; }
	inline FsmInt_t1273009179 ** get_address_of_length_12() { return &___length_12; }
	inline void set_length_12(FsmInt_t1273009179 * value)
	{
		___length_12 = value;
		Il2CppCodeGenWriteBarrier(&___length_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(ArrayLength_t4248777313, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
