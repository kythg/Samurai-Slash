#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo
struct  GetRayCastHit2dInfo_t355076598  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo::gameObjectHit
	FsmGameObject_t3097142863 * ___gameObjectHit_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo::point
	FsmVector2_t2430450063 * ___point_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo::normal
	FsmVector3_t3996534004 * ___normal_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo::distance
	FsmFloat_t937133978 * ___distance_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetRayCastHit2dInfo::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_gameObjectHit_11() { return static_cast<int32_t>(offsetof(GetRayCastHit2dInfo_t355076598, ___gameObjectHit_11)); }
	inline FsmGameObject_t3097142863 * get_gameObjectHit_11() const { return ___gameObjectHit_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObjectHit_11() { return &___gameObjectHit_11; }
	inline void set_gameObjectHit_11(FsmGameObject_t3097142863 * value)
	{
		___gameObjectHit_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectHit_11, value);
	}

	inline static int32_t get_offset_of_point_12() { return static_cast<int32_t>(offsetof(GetRayCastHit2dInfo_t355076598, ___point_12)); }
	inline FsmVector2_t2430450063 * get_point_12() const { return ___point_12; }
	inline FsmVector2_t2430450063 ** get_address_of_point_12() { return &___point_12; }
	inline void set_point_12(FsmVector2_t2430450063 * value)
	{
		___point_12 = value;
		Il2CppCodeGenWriteBarrier(&___point_12, value);
	}

	inline static int32_t get_offset_of_normal_13() { return static_cast<int32_t>(offsetof(GetRayCastHit2dInfo_t355076598, ___normal_13)); }
	inline FsmVector3_t3996534004 * get_normal_13() const { return ___normal_13; }
	inline FsmVector3_t3996534004 ** get_address_of_normal_13() { return &___normal_13; }
	inline void set_normal_13(FsmVector3_t3996534004 * value)
	{
		___normal_13 = value;
		Il2CppCodeGenWriteBarrier(&___normal_13, value);
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(GetRayCastHit2dInfo_t355076598, ___distance_14)); }
	inline FsmFloat_t937133978 * get_distance_14() const { return ___distance_14; }
	inline FsmFloat_t937133978 ** get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(FsmFloat_t937133978 * value)
	{
		___distance_14 = value;
		Il2CppCodeGenWriteBarrier(&___distance_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetRayCastHit2dInfo_t355076598, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
