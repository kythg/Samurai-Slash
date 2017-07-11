#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_t2699231328;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.BuildString
struct  BuildString_t3462225921  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.Actions.BuildString::stringParts
	FsmStringU5BU5D_t2699231328* ___stringParts_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.BuildString::separator
	FsmString_t2414474701 * ___separator_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.BuildString::addToEnd
	FsmBool_t664485696 * ___addToEnd_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.BuildString::storeResult
	FsmString_t2414474701 * ___storeResult_14;
	// System.Boolean HutongGames.PlayMaker.Actions.BuildString::everyFrame
	bool ___everyFrame_15;
	// System.String HutongGames.PlayMaker.Actions.BuildString::result
	String_t* ___result_16;

public:
	inline static int32_t get_offset_of_stringParts_11() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___stringParts_11)); }
	inline FsmStringU5BU5D_t2699231328* get_stringParts_11() const { return ___stringParts_11; }
	inline FsmStringU5BU5D_t2699231328** get_address_of_stringParts_11() { return &___stringParts_11; }
	inline void set_stringParts_11(FsmStringU5BU5D_t2699231328* value)
	{
		___stringParts_11 = value;
		Il2CppCodeGenWriteBarrier(&___stringParts_11, value);
	}

	inline static int32_t get_offset_of_separator_12() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___separator_12)); }
	inline FsmString_t2414474701 * get_separator_12() const { return ___separator_12; }
	inline FsmString_t2414474701 ** get_address_of_separator_12() { return &___separator_12; }
	inline void set_separator_12(FsmString_t2414474701 * value)
	{
		___separator_12 = value;
		Il2CppCodeGenWriteBarrier(&___separator_12, value);
	}

	inline static int32_t get_offset_of_addToEnd_13() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___addToEnd_13)); }
	inline FsmBool_t664485696 * get_addToEnd_13() const { return ___addToEnd_13; }
	inline FsmBool_t664485696 ** get_address_of_addToEnd_13() { return &___addToEnd_13; }
	inline void set_addToEnd_13(FsmBool_t664485696 * value)
	{
		___addToEnd_13 = value;
		Il2CppCodeGenWriteBarrier(&___addToEnd_13, value);
	}

	inline static int32_t get_offset_of_storeResult_14() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___storeResult_14)); }
	inline FsmString_t2414474701 * get_storeResult_14() const { return ___storeResult_14; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_14() { return &___storeResult_14; }
	inline void set_storeResult_14(FsmString_t2414474701 * value)
	{
		___storeResult_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_result_16() { return static_cast<int32_t>(offsetof(BuildString_t3462225921, ___result_16)); }
	inline String_t* get_result_16() const { return ___result_16; }
	inline String_t** get_address_of_result_16() { return &___result_16; }
	inline void set_result_16(String_t* value)
	{
		___result_16 = value;
		Il2CppCodeGenWriteBarrier(&___result_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
