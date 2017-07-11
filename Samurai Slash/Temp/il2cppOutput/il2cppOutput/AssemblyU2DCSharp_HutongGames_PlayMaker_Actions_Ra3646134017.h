#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.RayCast2d
struct  RayCast2d_t3646134017  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.RayCast2d::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.RayCast2d::fromPosition
	FsmVector2_t2430450063 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.RayCast2d::direction
	FsmVector2_t2430450063 * ___direction_13;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.RayCast2d::space
	int32_t ___space_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RayCast2d::distance
	FsmFloat_t937133978 * ___distance_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RayCast2d::minDepth
	FsmInt_t1273009179 * ___minDepth_16;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RayCast2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RayCast2d::hitEvent
	FsmEvent_t1258573736 * ___hitEvent_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RayCast2d::storeDidHit
	FsmBool_t664485696 * ___storeDidHit_19;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.RayCast2d::storeHitObject
	FsmGameObject_t3097142863 * ___storeHitObject_20;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.RayCast2d::storeHitPoint
	FsmVector2_t2430450063 * ___storeHitPoint_21;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.RayCast2d::storeHitNormal
	FsmVector2_t2430450063 * ___storeHitNormal_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RayCast2d::storeHitDistance
	FsmFloat_t937133978 * ___storeHitDistance_23;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RayCast2d::storeHitFraction
	FsmFloat_t937133978 * ___storeHitFraction_24;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RayCast2d::repeatInterval
	FsmInt_t1273009179 * ___repeatInterval_25;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.RayCast2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_26;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RayCast2d::invertMask
	FsmBool_t664485696 * ___invertMask_27;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.RayCast2d::debugColor
	FsmColor_t118301965 * ___debugColor_28;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RayCast2d::debug
	FsmBool_t664485696 * ___debug_29;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.RayCast2d::_transform
	Transform_t3275118058 * ____transform_30;
	// System.Int32 HutongGames.PlayMaker.Actions.RayCast2d::repeat
	int32_t ___repeat_31;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___fromPosition_12)); }
	inline FsmVector2_t2430450063 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector2_t2430450063 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___direction_13)); }
	inline FsmVector2_t2430450063 * get_direction_13() const { return ___direction_13; }
	inline FsmVector2_t2430450063 ** get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(FsmVector2_t2430450063 * value)
	{
		___direction_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_13, value);
	}

	inline static int32_t get_offset_of_space_14() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___space_14)); }
	inline int32_t get_space_14() const { return ___space_14; }
	inline int32_t* get_address_of_space_14() { return &___space_14; }
	inline void set_space_14(int32_t value)
	{
		___space_14 = value;
	}

	inline static int32_t get_offset_of_distance_15() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___distance_15)); }
	inline FsmFloat_t937133978 * get_distance_15() const { return ___distance_15; }
	inline FsmFloat_t937133978 ** get_address_of_distance_15() { return &___distance_15; }
	inline void set_distance_15(FsmFloat_t937133978 * value)
	{
		___distance_15 = value;
		Il2CppCodeGenWriteBarrier(&___distance_15, value);
	}

	inline static int32_t get_offset_of_minDepth_16() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___minDepth_16)); }
	inline FsmInt_t1273009179 * get_minDepth_16() const { return ___minDepth_16; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_16() { return &___minDepth_16; }
	inline void set_minDepth_16(FsmInt_t1273009179 * value)
	{
		___minDepth_16 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_16, value);
	}

	inline static int32_t get_offset_of_maxDepth_17() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___maxDepth_17)); }
	inline FsmInt_t1273009179 * get_maxDepth_17() const { return ___maxDepth_17; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_17() { return &___maxDepth_17; }
	inline void set_maxDepth_17(FsmInt_t1273009179 * value)
	{
		___maxDepth_17 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_17, value);
	}

	inline static int32_t get_offset_of_hitEvent_18() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___hitEvent_18)); }
	inline FsmEvent_t1258573736 * get_hitEvent_18() const { return ___hitEvent_18; }
	inline FsmEvent_t1258573736 ** get_address_of_hitEvent_18() { return &___hitEvent_18; }
	inline void set_hitEvent_18(FsmEvent_t1258573736 * value)
	{
		___hitEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___hitEvent_18, value);
	}

	inline static int32_t get_offset_of_storeDidHit_19() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeDidHit_19)); }
	inline FsmBool_t664485696 * get_storeDidHit_19() const { return ___storeDidHit_19; }
	inline FsmBool_t664485696 ** get_address_of_storeDidHit_19() { return &___storeDidHit_19; }
	inline void set_storeDidHit_19(FsmBool_t664485696 * value)
	{
		___storeDidHit_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidHit_19, value);
	}

	inline static int32_t get_offset_of_storeHitObject_20() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeHitObject_20)); }
	inline FsmGameObject_t3097142863 * get_storeHitObject_20() const { return ___storeHitObject_20; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeHitObject_20() { return &___storeHitObject_20; }
	inline void set_storeHitObject_20(FsmGameObject_t3097142863 * value)
	{
		___storeHitObject_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitObject_20, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_21() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeHitPoint_21)); }
	inline FsmVector2_t2430450063 * get_storeHitPoint_21() const { return ___storeHitPoint_21; }
	inline FsmVector2_t2430450063 ** get_address_of_storeHitPoint_21() { return &___storeHitPoint_21; }
	inline void set_storeHitPoint_21(FsmVector2_t2430450063 * value)
	{
		___storeHitPoint_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_21, value);
	}

	inline static int32_t get_offset_of_storeHitNormal_22() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeHitNormal_22)); }
	inline FsmVector2_t2430450063 * get_storeHitNormal_22() const { return ___storeHitNormal_22; }
	inline FsmVector2_t2430450063 ** get_address_of_storeHitNormal_22() { return &___storeHitNormal_22; }
	inline void set_storeHitNormal_22(FsmVector2_t2430450063 * value)
	{
		___storeHitNormal_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitNormal_22, value);
	}

	inline static int32_t get_offset_of_storeHitDistance_23() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeHitDistance_23)); }
	inline FsmFloat_t937133978 * get_storeHitDistance_23() const { return ___storeHitDistance_23; }
	inline FsmFloat_t937133978 ** get_address_of_storeHitDistance_23() { return &___storeHitDistance_23; }
	inline void set_storeHitDistance_23(FsmFloat_t937133978 * value)
	{
		___storeHitDistance_23 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitDistance_23, value);
	}

	inline static int32_t get_offset_of_storeHitFraction_24() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___storeHitFraction_24)); }
	inline FsmFloat_t937133978 * get_storeHitFraction_24() const { return ___storeHitFraction_24; }
	inline FsmFloat_t937133978 ** get_address_of_storeHitFraction_24() { return &___storeHitFraction_24; }
	inline void set_storeHitFraction_24(FsmFloat_t937133978 * value)
	{
		___storeHitFraction_24 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitFraction_24, value);
	}

	inline static int32_t get_offset_of_repeatInterval_25() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___repeatInterval_25)); }
	inline FsmInt_t1273009179 * get_repeatInterval_25() const { return ___repeatInterval_25; }
	inline FsmInt_t1273009179 ** get_address_of_repeatInterval_25() { return &___repeatInterval_25; }
	inline void set_repeatInterval_25(FsmInt_t1273009179 * value)
	{
		___repeatInterval_25 = value;
		Il2CppCodeGenWriteBarrier(&___repeatInterval_25, value);
	}

	inline static int32_t get_offset_of_layerMask_26() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___layerMask_26)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_26() const { return ___layerMask_26; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_26() { return &___layerMask_26; }
	inline void set_layerMask_26(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_26 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_26, value);
	}

	inline static int32_t get_offset_of_invertMask_27() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___invertMask_27)); }
	inline FsmBool_t664485696 * get_invertMask_27() const { return ___invertMask_27; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_27() { return &___invertMask_27; }
	inline void set_invertMask_27(FsmBool_t664485696 * value)
	{
		___invertMask_27 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_27, value);
	}

	inline static int32_t get_offset_of_debugColor_28() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___debugColor_28)); }
	inline FsmColor_t118301965 * get_debugColor_28() const { return ___debugColor_28; }
	inline FsmColor_t118301965 ** get_address_of_debugColor_28() { return &___debugColor_28; }
	inline void set_debugColor_28(FsmColor_t118301965 * value)
	{
		___debugColor_28 = value;
		Il2CppCodeGenWriteBarrier(&___debugColor_28, value);
	}

	inline static int32_t get_offset_of_debug_29() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___debug_29)); }
	inline FsmBool_t664485696 * get_debug_29() const { return ___debug_29; }
	inline FsmBool_t664485696 ** get_address_of_debug_29() { return &___debug_29; }
	inline void set_debug_29(FsmBool_t664485696 * value)
	{
		___debug_29 = value;
		Il2CppCodeGenWriteBarrier(&___debug_29, value);
	}

	inline static int32_t get_offset_of__transform_30() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ____transform_30)); }
	inline Transform_t3275118058 * get__transform_30() const { return ____transform_30; }
	inline Transform_t3275118058 ** get_address_of__transform_30() { return &____transform_30; }
	inline void set__transform_30(Transform_t3275118058 * value)
	{
		____transform_30 = value;
		Il2CppCodeGenWriteBarrier(&____transform_30, value);
	}

	inline static int32_t get_offset_of_repeat_31() { return static_cast<int32_t>(offsetof(RayCast2d_t3646134017, ___repeat_31)); }
	inline int32_t get_repeat_31() const { return ___repeat_31; }
	inline int32_t* get_address_of_repeat_31() { return &___repeat_31; }
	inline void set_repeat_31(int32_t value)
	{
		___repeat_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
