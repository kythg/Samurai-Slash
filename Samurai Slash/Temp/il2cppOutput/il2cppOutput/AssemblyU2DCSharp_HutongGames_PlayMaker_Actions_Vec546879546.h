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

// HutongGames.PlayMaker.Actions.Vector3AddXYZ
struct  Vector3AddXYZ_t546879546  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3AddXYZ::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3AddXYZ::addX
	FsmFloat_t937133978 * ___addX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3AddXYZ::addY
	FsmFloat_t937133978 * ___addY_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3AddXYZ::addZ
	FsmFloat_t937133978 * ___addZ_14;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3AddXYZ::everyFrame
	bool ___everyFrame_15;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3AddXYZ::perSecond
	bool ___perSecond_16;

public:
	inline static int32_t get_offset_of_vector3Variable_11() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___vector3Variable_11)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_11() const { return ___vector3Variable_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_11() { return &___vector3Variable_11; }
	inline void set_vector3Variable_11(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_11, value);
	}

	inline static int32_t get_offset_of_addX_12() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___addX_12)); }
	inline FsmFloat_t937133978 * get_addX_12() const { return ___addX_12; }
	inline FsmFloat_t937133978 ** get_address_of_addX_12() { return &___addX_12; }
	inline void set_addX_12(FsmFloat_t937133978 * value)
	{
		___addX_12 = value;
		Il2CppCodeGenWriteBarrier(&___addX_12, value);
	}

	inline static int32_t get_offset_of_addY_13() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___addY_13)); }
	inline FsmFloat_t937133978 * get_addY_13() const { return ___addY_13; }
	inline FsmFloat_t937133978 ** get_address_of_addY_13() { return &___addY_13; }
	inline void set_addY_13(FsmFloat_t937133978 * value)
	{
		___addY_13 = value;
		Il2CppCodeGenWriteBarrier(&___addY_13, value);
	}

	inline static int32_t get_offset_of_addZ_14() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___addZ_14)); }
	inline FsmFloat_t937133978 * get_addZ_14() const { return ___addZ_14; }
	inline FsmFloat_t937133978 ** get_address_of_addZ_14() { return &___addZ_14; }
	inline void set_addZ_14(FsmFloat_t937133978 * value)
	{
		___addZ_14 = value;
		Il2CppCodeGenWriteBarrier(&___addZ_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_perSecond_16() { return static_cast<int32_t>(offsetof(Vector3AddXYZ_t546879546, ___perSecond_16)); }
	inline bool get_perSecond_16() const { return ___perSecond_16; }
	inline bool* get_address_of_perSecond_16() { return &___perSecond_16; }
	inline void set_perSecond_16(bool value)
	{
		___perSecond_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
