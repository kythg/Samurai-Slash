#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetRectValue
struct  SetRectValue_t1532739537  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.SetRectValue::rectVariable
	FsmRect_t19023354 * ___rectVariable_11;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.SetRectValue::rectValue
	FsmRect_t19023354 * ___rectValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.SetRectValue::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_rectVariable_11() { return static_cast<int32_t>(offsetof(SetRectValue_t1532739537, ___rectVariable_11)); }
	inline FsmRect_t19023354 * get_rectVariable_11() const { return ___rectVariable_11; }
	inline FsmRect_t19023354 ** get_address_of_rectVariable_11() { return &___rectVariable_11; }
	inline void set_rectVariable_11(FsmRect_t19023354 * value)
	{
		___rectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___rectVariable_11, value);
	}

	inline static int32_t get_offset_of_rectValue_12() { return static_cast<int32_t>(offsetof(SetRectValue_t1532739537, ___rectValue_12)); }
	inline FsmRect_t19023354 * get_rectValue_12() const { return ___rectValue_12; }
	inline FsmRect_t19023354 ** get_address_of_rectValue_12() { return &___rectValue_12; }
	inline void set_rectValue_12(FsmRect_t19023354 * value)
	{
		___rectValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___rectValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(SetRectValue_t1532739537, ___everyFrame_13)); }
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
