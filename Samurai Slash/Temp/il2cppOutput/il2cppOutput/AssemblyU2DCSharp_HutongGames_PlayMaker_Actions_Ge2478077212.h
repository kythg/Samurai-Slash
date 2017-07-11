#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Get722902368.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAtan2FromVector3
struct  GetAtan2FromVector3_t2478077212  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAtan2FromVector3::vector3
	FsmVector3_t3996534004 * ___vector3_11;
	// HutongGames.PlayMaker.Actions.GetAtan2FromVector3/aTan2EnumAxis HutongGames.PlayMaker.Actions.GetAtan2FromVector3::xAxis
	int32_t ___xAxis_12;
	// HutongGames.PlayMaker.Actions.GetAtan2FromVector3/aTan2EnumAxis HutongGames.PlayMaker.Actions.GetAtan2FromVector3::yAxis
	int32_t ___yAxis_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAtan2FromVector3::angle
	FsmFloat_t937133978 * ___angle_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetAtan2FromVector3::RadToDeg
	FsmBool_t664485696 * ___RadToDeg_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAtan2FromVector3::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_vector3_11() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___vector3_11)); }
	inline FsmVector3_t3996534004 * get_vector3_11() const { return ___vector3_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3_11() { return &___vector3_11; }
	inline void set_vector3_11(FsmVector3_t3996534004 * value)
	{
		___vector3_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3_11, value);
	}

	inline static int32_t get_offset_of_xAxis_12() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___xAxis_12)); }
	inline int32_t get_xAxis_12() const { return ___xAxis_12; }
	inline int32_t* get_address_of_xAxis_12() { return &___xAxis_12; }
	inline void set_xAxis_12(int32_t value)
	{
		___xAxis_12 = value;
	}

	inline static int32_t get_offset_of_yAxis_13() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___yAxis_13)); }
	inline int32_t get_yAxis_13() const { return ___yAxis_13; }
	inline int32_t* get_address_of_yAxis_13() { return &___yAxis_13; }
	inline void set_yAxis_13(int32_t value)
	{
		___yAxis_13 = value;
	}

	inline static int32_t get_offset_of_angle_14() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___angle_14)); }
	inline FsmFloat_t937133978 * get_angle_14() const { return ___angle_14; }
	inline FsmFloat_t937133978 ** get_address_of_angle_14() { return &___angle_14; }
	inline void set_angle_14(FsmFloat_t937133978 * value)
	{
		___angle_14 = value;
		Il2CppCodeGenWriteBarrier(&___angle_14, value);
	}

	inline static int32_t get_offset_of_RadToDeg_15() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___RadToDeg_15)); }
	inline FsmBool_t664485696 * get_RadToDeg_15() const { return ___RadToDeg_15; }
	inline FsmBool_t664485696 ** get_address_of_RadToDeg_15() { return &___RadToDeg_15; }
	inline void set_RadToDeg_15(FsmBool_t664485696 * value)
	{
		___RadToDeg_15 = value;
		Il2CppCodeGenWriteBarrier(&___RadToDeg_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GetAtan2FromVector3_t2478077212, ___everyFrame_16)); }
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
