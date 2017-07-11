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

// HutongGames.PlayMaker.Actions.Vector2PerSecond
struct  Vector2PerSecond_t517989326  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2PerSecond::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2PerSecond::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(Vector2PerSecond_t517989326, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(Vector2PerSecond_t517989326, ___everyFrame_12)); }
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
