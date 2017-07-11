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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.StringJoin
struct  StringJoin_t3100161295  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.StringJoin::stringArray
	FsmArray_t527459893 * ___stringArray_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringJoin::separator
	FsmString_t2414474701 * ___separator_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringJoin::storeResult
	FsmString_t2414474701 * ___storeResult_13;

public:
	inline static int32_t get_offset_of_stringArray_11() { return static_cast<int32_t>(offsetof(StringJoin_t3100161295, ___stringArray_11)); }
	inline FsmArray_t527459893 * get_stringArray_11() const { return ___stringArray_11; }
	inline FsmArray_t527459893 ** get_address_of_stringArray_11() { return &___stringArray_11; }
	inline void set_stringArray_11(FsmArray_t527459893 * value)
	{
		___stringArray_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringArray_11, value);
	}

	inline static int32_t get_offset_of_separator_12() { return static_cast<int32_t>(offsetof(StringJoin_t3100161295, ___separator_12)); }
	inline FsmString_t2414474701 * get_separator_12() const { return ___separator_12; }
	inline FsmString_t2414474701 ** get_address_of_separator_12() { return &___separator_12; }
	inline void set_separator_12(FsmString_t2414474701 * value)
	{
		___separator_12 = value;
		Il2CppCodeGenWriteBarrier(&___separator_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(StringJoin_t3100161295, ___storeResult_13)); }
	inline FsmString_t2414474701 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmString_t2414474701 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
