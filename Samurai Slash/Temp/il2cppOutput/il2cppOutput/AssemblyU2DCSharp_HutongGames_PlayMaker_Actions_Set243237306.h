#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetAmbientLight
struct  SetAmbientLight_t243237306  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetAmbientLight::ambientColor
	FsmColor_t118301965 * ___ambientColor_11;
	// System.Boolean HutongGames.PlayMaker.Actions.SetAmbientLight::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_ambientColor_11() { return static_cast<int32_t>(offsetof(SetAmbientLight_t243237306, ___ambientColor_11)); }
	inline FsmColor_t118301965 * get_ambientColor_11() const { return ___ambientColor_11; }
	inline FsmColor_t118301965 ** get_address_of_ambientColor_11() { return &___ambientColor_11; }
	inline void set_ambientColor_11(FsmColor_t118301965 * value)
	{
		___ambientColor_11 = value;
		Il2CppCodeGenWriteBarrier(&___ambientColor_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(SetAmbientLight_t243237306, ___everyFrame_12)); }
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
