#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertEnumToString
struct  ConvertEnumToString_t2542243456  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.ConvertEnumToString::enumVariable
	FsmEnum_t2808516103 * ___enumVariable_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.ConvertEnumToString::stringVariable
	FsmString_t2414474701 * ___stringVariable_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertEnumToString::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_enumVariable_11() { return static_cast<int32_t>(offsetof(ConvertEnumToString_t2542243456, ___enumVariable_11)); }
	inline FsmEnum_t2808516103 * get_enumVariable_11() const { return ___enumVariable_11; }
	inline FsmEnum_t2808516103 ** get_address_of_enumVariable_11() { return &___enumVariable_11; }
	inline void set_enumVariable_11(FsmEnum_t2808516103 * value)
	{
		___enumVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___enumVariable_11, value);
	}

	inline static int32_t get_offset_of_stringVariable_12() { return static_cast<int32_t>(offsetof(ConvertEnumToString_t2542243456, ___stringVariable_12)); }
	inline FsmString_t2414474701 * get_stringVariable_12() const { return ___stringVariable_12; }
	inline FsmString_t2414474701 ** get_address_of_stringVariable_12() { return &___stringVariable_12; }
	inline void set_stringVariable_12(FsmString_t2414474701 * value)
	{
		___stringVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringVariable_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(ConvertEnumToString_t2542243456, ___everyFrame_13)); }
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
