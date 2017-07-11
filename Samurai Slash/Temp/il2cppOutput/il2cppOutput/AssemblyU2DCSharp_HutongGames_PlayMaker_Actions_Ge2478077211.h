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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAtan2FromVector2
struct  GetAtan2FromVector2_t2478077211  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetAtan2FromVector2::vector2
	FsmVector2_t2430450063 * ___vector2_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan2FromVector2::angle
	FsmFloat_t937133978 * ___angle_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAtan2FromVector2::RadToDeg
	FsmBool_t664485696 * ___RadToDeg_13;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAtan2FromVector2::everyFrame
	bool ___everyFrame_14;

public:
	inline static int32_t get_offset_of_vector2_11() { return static_cast<int32_t>(offsetof(GetAtan2FromVector2_t2478077211, ___vector2_11)); }
	inline FsmVector2_t2430450063 * get_vector2_11() const { return ___vector2_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2_11() { return &___vector2_11; }
	inline void set_vector2_11(FsmVector2_t2430450063 * value)
	{
		___vector2_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2_11, value);
	}

	inline static int32_t get_offset_of_angle_12() { return static_cast<int32_t>(offsetof(GetAtan2FromVector2_t2478077211, ___angle_12)); }
	inline FsmFloat_t937133978 * get_angle_12() const { return ___angle_12; }
	inline FsmFloat_t937133978 ** get_address_of_angle_12() { return &___angle_12; }
	inline void set_angle_12(FsmFloat_t937133978 * value)
	{
		___angle_12 = value;
		Il2CppCodeGenWriteBarrier(&___angle_12, value);
	}

	inline static int32_t get_offset_of_RadToDeg_13() { return static_cast<int32_t>(offsetof(GetAtan2FromVector2_t2478077211, ___RadToDeg_13)); }
	inline FsmBool_t664485696 * get_RadToDeg_13() const { return ___RadToDeg_13; }
	inline FsmBool_t664485696 ** get_address_of_RadToDeg_13() { return &___RadToDeg_13; }
	inline void set_RadToDeg_13(FsmBool_t664485696 * value)
	{
		___RadToDeg_13 = value;
		Il2CppCodeGenWriteBarrier(&___RadToDeg_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(GetAtan2FromVector2_t2478077211, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
