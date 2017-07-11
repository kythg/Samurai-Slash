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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetVector2Length
struct  GetVector2Length_t2427274137  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetVector2Length::vector2
	FsmVector2_t2430450063 * ___vector2_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVector2Length::storeLength
	FsmFloat_t937133978 * ___storeLength_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetVector2Length::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_vector2_11() { return static_cast<int32_t>(offsetof(GetVector2Length_t2427274137, ___vector2_11)); }
	inline FsmVector2_t2430450063 * get_vector2_11() const { return ___vector2_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2_11() { return &___vector2_11; }
	inline void set_vector2_11(FsmVector2_t2430450063 * value)
	{
		___vector2_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2_11, value);
	}

	inline static int32_t get_offset_of_storeLength_12() { return static_cast<int32_t>(offsetof(GetVector2Length_t2427274137, ___storeLength_12)); }
	inline FsmFloat_t937133978 * get_storeLength_12() const { return ___storeLength_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeLength_12() { return &___storeLength_12; }
	inline void set_storeLength_12(FsmFloat_t937133978 * value)
	{
		___storeLength_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeLength_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetVector2Length_t2427274137, ___everyFrame_13)); }
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
