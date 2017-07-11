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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetEnumValue
struct  SetEnumValue_t4139640040  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.SetEnumValue::enumVariable
	FsmEnum_t2808516103 * ___enumVariable_11;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.SetEnumValue::enumValue
	FsmEnum_t2808516103 * ___enumValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetEnumValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_enumVariable_11() { return static_cast<int32_t>(offsetof(SetEnumValue_t4139640040, ___enumVariable_11)); }
	inline FsmEnum_t2808516103 * get_enumVariable_11() const { return ___enumVariable_11; }
	inline FsmEnum_t2808516103 ** get_address_of_enumVariable_11() { return &___enumVariable_11; }
	inline void set_enumVariable_11(FsmEnum_t2808516103 * value)
	{
		___enumVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___enumVariable_11, value);
	}

	inline static int32_t get_offset_of_enumValue_12() { return static_cast<int32_t>(offsetof(SetEnumValue_t4139640040, ___enumValue_12)); }
	inline FsmEnum_t2808516103 * get_enumValue_12() const { return ___enumValue_12; }
	inline FsmEnum_t2808516103 ** get_address_of_enumValue_12() { return &___enumValue_12; }
	inline void set_enumValue_12(FsmEnum_t2808516103 * value)
	{
		___enumValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___enumValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetEnumValue_t4139640040, ___everyFrame_13)); }
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
