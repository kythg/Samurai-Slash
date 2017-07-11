#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetDeviceAcceleration
struct  GetDeviceAcceleration_t4046517398  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetDeviceAcceleration::storeVector
	FsmVector3_t3996534004 * ___storeVector_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceAcceleration::storeX
	FsmFloat_t937133978 * ___storeX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceAcceleration::storeY
	FsmFloat_t937133978 * ___storeY_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceAcceleration::storeZ
	FsmFloat_t937133978 * ___storeZ_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetDeviceAcceleration::multiplier
	FsmFloat_t937133978 * ___multiplier_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GetDeviceAcceleration::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_storeVector_11() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___storeVector_11)); }
	inline FsmVector3_t3996534004 * get_storeVector_11() const { return ___storeVector_11; }
	inline FsmVector3_t3996534004 ** get_address_of_storeVector_11() { return &___storeVector_11; }
	inline void set_storeVector_11(FsmVector3_t3996534004 * value)
	{
		___storeVector_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector_11, value);
	}

	inline static int32_t get_offset_of_storeX_12() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___storeX_12)); }
	inline FsmFloat_t937133978 * get_storeX_12() const { return ___storeX_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeX_12() { return &___storeX_12; }
	inline void set_storeX_12(FsmFloat_t937133978 * value)
	{
		___storeX_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeX_12, value);
	}

	inline static int32_t get_offset_of_storeY_13() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___storeY_13)); }
	inline FsmFloat_t937133978 * get_storeY_13() const { return ___storeY_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeY_13() { return &___storeY_13; }
	inline void set_storeY_13(FsmFloat_t937133978 * value)
	{
		___storeY_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeY_13, value);
	}

	inline static int32_t get_offset_of_storeZ_14() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___storeZ_14)); }
	inline FsmFloat_t937133978 * get_storeZ_14() const { return ___storeZ_14; }
	inline FsmFloat_t937133978 ** get_address_of_storeZ_14() { return &___storeZ_14; }
	inline void set_storeZ_14(FsmFloat_t937133978 * value)
	{
		___storeZ_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeZ_14, value);
	}

	inline static int32_t get_offset_of_multiplier_15() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___multiplier_15)); }
	inline FsmFloat_t937133978 * get_multiplier_15() const { return ___multiplier_15; }
	inline FsmFloat_t937133978 ** get_address_of_multiplier_15() { return &___multiplier_15; }
	inline void set_multiplier_15(FsmFloat_t937133978 * value)
	{
		___multiplier_15 = value;
		Il2CppCodeGenWriteBarrier(&___multiplier_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GetDeviceAcceleration_t4046517398, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
