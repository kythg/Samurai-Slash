#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge2390071140.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetDeviceRoll
struct  GetDeviceRoll_t3058231729  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetDeviceRoll/BaseOrientation HutongGames.PlayMaker.Actions.GetDeviceRoll::baseOrientation
	int32_t ___baseOrientation_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceRoll::storeAngle
	FsmFloat_t937133978 * ___storeAngle_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceRoll::limitAngle
	FsmFloat_t937133978 * ___limitAngle_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceRoll::smoothing
	FsmFloat_t937133978 * ___smoothing_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetDeviceRoll::everyFrame
	bool ___everyFrame_15;
	// System.Single HutongGames.PlayMaker.Actions.GetDeviceRoll::lastZAngle
	float ___lastZAngle_16;

public:
	inline static int32_t get_offset_of_baseOrientation_11() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___baseOrientation_11)); }
	inline int32_t get_baseOrientation_11() const { return ___baseOrientation_11; }
	inline int32_t* get_address_of_baseOrientation_11() { return &___baseOrientation_11; }
	inline void set_baseOrientation_11(int32_t value)
	{
		___baseOrientation_11 = value;
	}

	inline static int32_t get_offset_of_storeAngle_12() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___storeAngle_12)); }
	inline FsmFloat_t937133978 * get_storeAngle_12() const { return ___storeAngle_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeAngle_12() { return &___storeAngle_12; }
	inline void set_storeAngle_12(FsmFloat_t937133978 * value)
	{
		___storeAngle_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeAngle_12, value);
	}

	inline static int32_t get_offset_of_limitAngle_13() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___limitAngle_13)); }
	inline FsmFloat_t937133978 * get_limitAngle_13() const { return ___limitAngle_13; }
	inline FsmFloat_t937133978 ** get_address_of_limitAngle_13() { return &___limitAngle_13; }
	inline void set_limitAngle_13(FsmFloat_t937133978 * value)
	{
		___limitAngle_13 = value;
		Il2CppCodeGenWriteBarrier(&___limitAngle_13, value);
	}

	inline static int32_t get_offset_of_smoothing_14() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___smoothing_14)); }
	inline FsmFloat_t937133978 * get_smoothing_14() const { return ___smoothing_14; }
	inline FsmFloat_t937133978 ** get_address_of_smoothing_14() { return &___smoothing_14; }
	inline void set_smoothing_14(FsmFloat_t937133978 * value)
	{
		___smoothing_14 = value;
		Il2CppCodeGenWriteBarrier(&___smoothing_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_lastZAngle_16() { return static_cast<int32_t>(offsetof(GetDeviceRoll_t3058231729, ___lastZAngle_16)); }
	inline float get_lastZAngle_16() const { return ___lastZAngle_16; }
	inline float* get_address_of_lastZAngle_16() { return &___lastZAngle_16; }
	inline void set_lastZAngle_16(float value)
	{
		___lastZAngle_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
