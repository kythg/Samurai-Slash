#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LookAt2d
struct  LookAt2d_t2846778534  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.LookAt2d::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.LookAt2d::vector2Target
	FsmVector2_t2430450063 * ___vector2Target_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.LookAt2d::vector3Target
	FsmVector3_t3996534004 * ___vector3Target_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.LookAt2d::rotationOffset
	FsmFloat_t937133978 * ___rotationOffset_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LookAt2d::debug
	FsmBool_t664485696 * ___debug_15;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.LookAt2d::debugLineColor
	FsmColor_t118301965 * ___debugLineColor_16;
	// System.Boolean HutongGames.PlayMaker.Actions.LookAt2d::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_vector2Target_12() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___vector2Target_12)); }
	inline FsmVector2_t2430450063 * get_vector2Target_12() const { return ___vector2Target_12; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Target_12() { return &___vector2Target_12; }
	inline void set_vector2Target_12(FsmVector2_t2430450063 * value)
	{
		___vector2Target_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Target_12, value);
	}

	inline static int32_t get_offset_of_vector3Target_13() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___vector3Target_13)); }
	inline FsmVector3_t3996534004 * get_vector3Target_13() const { return ___vector3Target_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Target_13() { return &___vector3Target_13; }
	inline void set_vector3Target_13(FsmVector3_t3996534004 * value)
	{
		___vector3Target_13 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Target_13, value);
	}

	inline static int32_t get_offset_of_rotationOffset_14() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___rotationOffset_14)); }
	inline FsmFloat_t937133978 * get_rotationOffset_14() const { return ___rotationOffset_14; }
	inline FsmFloat_t937133978 ** get_address_of_rotationOffset_14() { return &___rotationOffset_14; }
	inline void set_rotationOffset_14(FsmFloat_t937133978 * value)
	{
		___rotationOffset_14 = value;
		Il2CppCodeGenWriteBarrier(&___rotationOffset_14, value);
	}

	inline static int32_t get_offset_of_debug_15() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___debug_15)); }
	inline FsmBool_t664485696 * get_debug_15() const { return ___debug_15; }
	inline FsmBool_t664485696 ** get_address_of_debug_15() { return &___debug_15; }
	inline void set_debug_15(FsmBool_t664485696 * value)
	{
		___debug_15 = value;
		Il2CppCodeGenWriteBarrier(&___debug_15, value);
	}

	inline static int32_t get_offset_of_debugLineColor_16() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___debugLineColor_16)); }
	inline FsmColor_t118301965 * get_debugLineColor_16() const { return ___debugLineColor_16; }
	inline FsmColor_t118301965 ** get_address_of_debugLineColor_16() { return &___debugLineColor_16; }
	inline void set_debugLineColor_16(FsmColor_t118301965 * value)
	{
		___debugLineColor_16 = value;
		Il2CppCodeGenWriteBarrier(&___debugLineColor_16, value);
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(LookAt2d_t2846778534, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
