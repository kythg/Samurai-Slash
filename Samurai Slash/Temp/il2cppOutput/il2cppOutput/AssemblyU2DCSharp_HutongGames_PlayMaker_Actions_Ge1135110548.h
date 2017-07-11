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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetSystemDateTime
struct  GetSystemDateTime_t1135110548  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSystemDateTime::storeString
	FsmString_t2414474701 * ___storeString_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetSystemDateTime::format
	FsmString_t2414474701 * ___format_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetSystemDateTime::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_storeString_11() { return static_cast<int32_t>(offsetof(GetSystemDateTime_t1135110548, ___storeString_11)); }
	inline FsmString_t2414474701 * get_storeString_11() const { return ___storeString_11; }
	inline FsmString_t2414474701 ** get_address_of_storeString_11() { return &___storeString_11; }
	inline void set_storeString_11(FsmString_t2414474701 * value)
	{
		___storeString_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeString_11, value);
	}

	inline static int32_t get_offset_of_format_12() { return static_cast<int32_t>(offsetof(GetSystemDateTime_t1135110548, ___format_12)); }
	inline FsmString_t2414474701 * get_format_12() const { return ___format_12; }
	inline FsmString_t2414474701 ** get_address_of_format_12() { return &___format_12; }
	inline void set_format_12(FsmString_t2414474701 * value)
	{
		___format_12 = value;
		Il2CppCodeGenWriteBarrier(&___format_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetSystemDateTime_t1135110548, ___everyFrame_13)); }
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
