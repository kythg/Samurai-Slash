#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetObjectValue
struct  SetObjectValue_t3354029310  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.SetObjectValue::objectVariable
	FsmObject_t2785794313 * ___objectVariable_11;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.SetObjectValue::objectValue
	FsmObject_t2785794313 * ___objectValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetObjectValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_objectVariable_11() { return static_cast<int32_t>(offsetof(SetObjectValue_t3354029310, ___objectVariable_11)); }
	inline FsmObject_t2785794313 * get_objectVariable_11() const { return ___objectVariable_11; }
	inline FsmObject_t2785794313 ** get_address_of_objectVariable_11() { return &___objectVariable_11; }
	inline void set_objectVariable_11(FsmObject_t2785794313 * value)
	{
		___objectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___objectVariable_11, value);
	}

	inline static int32_t get_offset_of_objectValue_12() { return static_cast<int32_t>(offsetof(SetObjectValue_t3354029310, ___objectValue_12)); }
	inline FsmObject_t2785794313 * get_objectValue_12() const { return ___objectValue_12; }
	inline FsmObject_t2785794313 ** get_address_of_objectValue_12() { return &___objectValue_12; }
	inline void set_objectValue_12(FsmObject_t2785794313 * value)
	{
		___objectValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___objectValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetObjectValue_t3354029310, ___everyFrame_13)); }
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
