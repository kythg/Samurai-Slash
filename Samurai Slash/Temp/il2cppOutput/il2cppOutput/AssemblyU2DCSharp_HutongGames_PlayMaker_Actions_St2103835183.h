#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.StringSplit
struct  StringSplit_t2103835183  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringSplit::stringToSplit
	FsmString_t2414474701 * ___stringToSplit_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringSplit::separators
	FsmString_t2414474701 * ___separators_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.StringSplit::trimStrings
	FsmBool_t664485696 * ___trimStrings_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StringSplit::trimChars
	FsmString_t2414474701 * ___trimChars_14;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.StringSplit::stringArray
	FsmArray_t527459893 * ___stringArray_15;

public:
	inline static int32_t get_offset_of_stringToSplit_11() { return static_cast<int32_t>(offsetof(StringSplit_t2103835183, ___stringToSplit_11)); }
	inline FsmString_t2414474701 * get_stringToSplit_11() const { return ___stringToSplit_11; }
	inline FsmString_t2414474701 ** get_address_of_stringToSplit_11() { return &___stringToSplit_11; }
	inline void set_stringToSplit_11(FsmString_t2414474701 * value)
	{
		___stringToSplit_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringToSplit_11, value);
	}

	inline static int32_t get_offset_of_separators_12() { return static_cast<int32_t>(offsetof(StringSplit_t2103835183, ___separators_12)); }
	inline FsmString_t2414474701 * get_separators_12() const { return ___separators_12; }
	inline FsmString_t2414474701 ** get_address_of_separators_12() { return &___separators_12; }
	inline void set_separators_12(FsmString_t2414474701 * value)
	{
		___separators_12 = value;
		Il2CppCodeGenWriteBarrier(&___separators_12, value);
	}

	inline static int32_t get_offset_of_trimStrings_13() { return static_cast<int32_t>(offsetof(StringSplit_t2103835183, ___trimStrings_13)); }
	inline FsmBool_t664485696 * get_trimStrings_13() const { return ___trimStrings_13; }
	inline FsmBool_t664485696 ** get_address_of_trimStrings_13() { return &___trimStrings_13; }
	inline void set_trimStrings_13(FsmBool_t664485696 * value)
	{
		___trimStrings_13 = value;
		Il2CppCodeGenWriteBarrier(&___trimStrings_13, value);
	}

	inline static int32_t get_offset_of_trimChars_14() { return static_cast<int32_t>(offsetof(StringSplit_t2103835183, ___trimChars_14)); }
	inline FsmString_t2414474701 * get_trimChars_14() const { return ___trimChars_14; }
	inline FsmString_t2414474701 ** get_address_of_trimChars_14() { return &___trimChars_14; }
	inline void set_trimChars_14(FsmString_t2414474701 * value)
	{
		___trimChars_14 = value;
		Il2CppCodeGenWriteBarrier(&___trimChars_14, value);
	}

	inline static int32_t get_offset_of_stringArray_15() { return static_cast<int32_t>(offsetof(StringSplit_t2103835183, ___stringArray_15)); }
	inline FsmArray_t527459893 * get_stringArray_15() const { return ___stringArray_15; }
	inline FsmArray_t527459893 ** get_address_of_stringArray_15() { return &___stringArray_15; }
	inline void set_stringArray_15(FsmArray_t527459893 * value)
	{
		___stringArray_15 = value;
		Il2CppCodeGenWriteBarrier(&___stringArray_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
