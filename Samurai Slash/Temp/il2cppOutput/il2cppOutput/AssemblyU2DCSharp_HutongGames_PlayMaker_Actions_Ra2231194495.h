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
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Raycast
struct  Raycast_t2231194495  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.Raycast::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Raycast::fromPosition
	FsmVector3_t3996534004 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Raycast::direction
	FsmVector3_t3996534004 * ___direction_13;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.Raycast::space
	int32_t ___space_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Raycast::distance
	FsmFloat_t937133978 * ___distance_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Raycast::hitEvent
	FsmEvent_t1258573736 * ___hitEvent_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.Raycast::storeDidHit
	FsmBool_t664485696 * ___storeDidHit_17;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.Raycast::storeHitObject
	FsmGameObject_t3097142863 * ___storeHitObject_18;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Raycast::storeHitPoint
	FsmVector3_t3996534004 * ___storeHitPoint_19;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Raycast::storeHitNormal
	FsmVector3_t3996534004 * ___storeHitNormal_20;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Raycast::storeHitDistance
	FsmFloat_t937133978 * ___storeHitDistance_21;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.Raycast::repeatInterval
	FsmInt_t1273009179 * ___repeatInterval_22;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.Raycast::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_23;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.Raycast::invertMask
	FsmBool_t664485696 * ___invertMask_24;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.Raycast::debugColor
	FsmColor_t118301965 * ___debugColor_25;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.Raycast::debug
	FsmBool_t664485696 * ___debug_26;
	// System.Int32 HutongGames.PlayMaker.Actions.Raycast::repeat
	int32_t ___repeat_27;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___fromPosition_12)); }
	inline FsmVector3_t3996534004 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector3_t3996534004 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector3_t3996534004 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___direction_13)); }
	inline FsmVector3_t3996534004 * get_direction_13() const { return ___direction_13; }
	inline FsmVector3_t3996534004 ** get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(FsmVector3_t3996534004 * value)
	{
		___direction_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_13, value);
	}

	inline static int32_t get_offset_of_space_14() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___space_14)); }
	inline int32_t get_space_14() const { return ___space_14; }
	inline int32_t* get_address_of_space_14() { return &___space_14; }
	inline void set_space_14(int32_t value)
	{
		___space_14 = value;
	}

	inline static int32_t get_offset_of_distance_15() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___distance_15)); }
	inline FsmFloat_t937133978 * get_distance_15() const { return ___distance_15; }
	inline FsmFloat_t937133978 ** get_address_of_distance_15() { return &___distance_15; }
	inline void set_distance_15(FsmFloat_t937133978 * value)
	{
		___distance_15 = value;
		Il2CppCodeGenWriteBarrier(&___distance_15, value);
	}

	inline static int32_t get_offset_of_hitEvent_16() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___hitEvent_16)); }
	inline FsmEvent_t1258573736 * get_hitEvent_16() const { return ___hitEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_hitEvent_16() { return &___hitEvent_16; }
	inline void set_hitEvent_16(FsmEvent_t1258573736 * value)
	{
		___hitEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___hitEvent_16, value);
	}

	inline static int32_t get_offset_of_storeDidHit_17() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___storeDidHit_17)); }
	inline FsmBool_t664485696 * get_storeDidHit_17() const { return ___storeDidHit_17; }
	inline FsmBool_t664485696 ** get_address_of_storeDidHit_17() { return &___storeDidHit_17; }
	inline void set_storeDidHit_17(FsmBool_t664485696 * value)
	{
		___storeDidHit_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidHit_17, value);
	}

	inline static int32_t get_offset_of_storeHitObject_18() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___storeHitObject_18)); }
	inline FsmGameObject_t3097142863 * get_storeHitObject_18() const { return ___storeHitObject_18; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeHitObject_18() { return &___storeHitObject_18; }
	inline void set_storeHitObject_18(FsmGameObject_t3097142863 * value)
	{
		___storeHitObject_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitObject_18, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_19() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___storeHitPoint_19)); }
	inline FsmVector3_t3996534004 * get_storeHitPoint_19() const { return ___storeHitPoint_19; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitPoint_19() { return &___storeHitPoint_19; }
	inline void set_storeHitPoint_19(FsmVector3_t3996534004 * value)
	{
		___storeHitPoint_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_19, value);
	}

	inline static int32_t get_offset_of_storeHitNormal_20() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___storeHitNormal_20)); }
	inline FsmVector3_t3996534004 * get_storeHitNormal_20() const { return ___storeHitNormal_20; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitNormal_20() { return &___storeHitNormal_20; }
	inline void set_storeHitNormal_20(FsmVector3_t3996534004 * value)
	{
		___storeHitNormal_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitNormal_20, value);
	}

	inline static int32_t get_offset_of_storeHitDistance_21() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___storeHitDistance_21)); }
	inline FsmFloat_t937133978 * get_storeHitDistance_21() const { return ___storeHitDistance_21; }
	inline FsmFloat_t937133978 ** get_address_of_storeHitDistance_21() { return &___storeHitDistance_21; }
	inline void set_storeHitDistance_21(FsmFloat_t937133978 * value)
	{
		___storeHitDistance_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitDistance_21, value);
	}

	inline static int32_t get_offset_of_repeatInterval_22() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___repeatInterval_22)); }
	inline FsmInt_t1273009179 * get_repeatInterval_22() const { return ___repeatInterval_22; }
	inline FsmInt_t1273009179 ** get_address_of_repeatInterval_22() { return &___repeatInterval_22; }
	inline void set_repeatInterval_22(FsmInt_t1273009179 * value)
	{
		___repeatInterval_22 = value;
		Il2CppCodeGenWriteBarrier(&___repeatInterval_22, value);
	}

	inline static int32_t get_offset_of_layerMask_23() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___layerMask_23)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_23() const { return ___layerMask_23; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_23() { return &___layerMask_23; }
	inline void set_layerMask_23(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_23 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_23, value);
	}

	inline static int32_t get_offset_of_invertMask_24() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___invertMask_24)); }
	inline FsmBool_t664485696 * get_invertMask_24() const { return ___invertMask_24; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_24() { return &___invertMask_24; }
	inline void set_invertMask_24(FsmBool_t664485696 * value)
	{
		___invertMask_24 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_24, value);
	}

	inline static int32_t get_offset_of_debugColor_25() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___debugColor_25)); }
	inline FsmColor_t118301965 * get_debugColor_25() const { return ___debugColor_25; }
	inline FsmColor_t118301965 ** get_address_of_debugColor_25() { return &___debugColor_25; }
	inline void set_debugColor_25(FsmColor_t118301965 * value)
	{
		___debugColor_25 = value;
		Il2CppCodeGenWriteBarrier(&___debugColor_25, value);
	}

	inline static int32_t get_offset_of_debug_26() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___debug_26)); }
	inline FsmBool_t664485696 * get_debug_26() const { return ___debug_26; }
	inline FsmBool_t664485696 ** get_address_of_debug_26() { return &___debug_26; }
	inline void set_debug_26(FsmBool_t664485696 * value)
	{
		___debug_26 = value;
		Il2CppCodeGenWriteBarrier(&___debug_26, value);
	}

	inline static int32_t get_offset_of_repeat_27() { return static_cast<int32_t>(offsetof(Raycast_t2231194495, ___repeat_27)); }
	inline int32_t get_repeat_27() const { return ___repeat_27; }
	inline int32_t* get_address_of_repeat_27() { return &___repeat_27; }
	inline void set_repeat_27(int32_t value)
	{
		___repeat_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
