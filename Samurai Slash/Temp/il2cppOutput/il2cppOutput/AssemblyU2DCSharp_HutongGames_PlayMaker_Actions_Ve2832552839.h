#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2Subtract
struct  Vector2Subtract_t2832552839  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Subtract::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2Subtract::subtractVector
	FsmVector2_t2430450063 * ___subtractVector_12;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2Subtract::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(Vector2Subtract_t2832552839, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_subtractVector_12() { return static_cast<int32_t>(offsetof(Vector2Subtract_t2832552839, ___subtractVector_12)); }
	inline FsmVector2_t2430450063 * get_subtractVector_12() const { return ___subtractVector_12; }
	inline FsmVector2_t2430450063 ** get_address_of_subtractVector_12() { return &___subtractVector_12; }
	inline void set_subtractVector_12(FsmVector2_t2430450063 * value)
	{
		___subtractVector_12 = value;
		Il2CppCodeGenWriteBarrier(&___subtractVector_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(Vector2Subtract_t2832552839, ___everyFrame_13)); }
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
