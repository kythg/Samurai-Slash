#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmProperty
struct FsmProperty_t786753495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetProperty
struct  SetProperty_t3701821469  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmProperty HutongGames.PlayMaker.Actions.SetProperty::targetProperty
	FsmProperty_t786753495 * ___targetProperty_11;
	// System.Boolean HutongGames.PlayMaker.Actions.SetProperty::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_targetProperty_11() { return static_cast<int32_t>(offsetof(SetProperty_t3701821469, ___targetProperty_11)); }
	inline FsmProperty_t786753495 * get_targetProperty_11() const { return ___targetProperty_11; }
	inline FsmProperty_t786753495 ** get_address_of_targetProperty_11() { return &___targetProperty_11; }
	inline void set_targetProperty_11(FsmProperty_t786753495 * value)
	{
		___targetProperty_11 = value;
		Il2CppCodeGenWriteBarrier(&___targetProperty_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(SetProperty_t3701821469, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
