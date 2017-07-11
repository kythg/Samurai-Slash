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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521;
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
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
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

// HutongGames.PlayMaker.Actions.RaycastAll
struct  RaycastAll_t2103133324  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.RaycastAll::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.RaycastAll::fromPosition
	FsmVector3_t3996534004 * ___fromPosition_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.RaycastAll::direction
	FsmVector3_t3996534004 * ___direction_14;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.RaycastAll::space
	int32_t ___space_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RaycastAll::distance
	FsmFloat_t937133978 * ___distance_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.RaycastAll::hitEvent
	FsmEvent_t1258573736 * ___hitEvent_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RaycastAll::storeDidHit
	FsmBool_t664485696 * ___storeDidHit_18;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.RaycastAll::storeHitObjects
	FsmArray_t527459893 * ___storeHitObjects_19;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.RaycastAll::storeHitPoint
	FsmVector3_t3996534004 * ___storeHitPoint_20;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.RaycastAll::storeHitNormal
	FsmVector3_t3996534004 * ___storeHitNormal_21;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.RaycastAll::storeHitDistance
	FsmFloat_t937133978 * ___storeHitDistance_22;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.RaycastAll::repeatInterval
	FsmInt_t1273009179 * ___repeatInterval_23;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.RaycastAll::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_24;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RaycastAll::invertMask
	FsmBool_t664485696 * ___invertMask_25;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.RaycastAll::debugColor
	FsmColor_t118301965 * ___debugColor_26;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.RaycastAll::debug
	FsmBool_t664485696 * ___debug_27;
	// System.Int32 HutongGames.PlayMaker.Actions.RaycastAll::repeat
	int32_t ___repeat_28;

public:
	inline static int32_t get_offset_of_fromGameObject_12() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___fromGameObject_12)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_12() const { return ___fromGameObject_12; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_12() { return &___fromGameObject_12; }
	inline void set_fromGameObject_12(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_12, value);
	}

	inline static int32_t get_offset_of_fromPosition_13() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___fromPosition_13)); }
	inline FsmVector3_t3996534004 * get_fromPosition_13() const { return ___fromPosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_fromPosition_13() { return &___fromPosition_13; }
	inline void set_fromPosition_13(FsmVector3_t3996534004 * value)
	{
		___fromPosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_13, value);
	}

	inline static int32_t get_offset_of_direction_14() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___direction_14)); }
	inline FsmVector3_t3996534004 * get_direction_14() const { return ___direction_14; }
	inline FsmVector3_t3996534004 ** get_address_of_direction_14() { return &___direction_14; }
	inline void set_direction_14(FsmVector3_t3996534004 * value)
	{
		___direction_14 = value;
		Il2CppCodeGenWriteBarrier(&___direction_14, value);
	}

	inline static int32_t get_offset_of_space_15() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___space_15)); }
	inline int32_t get_space_15() const { return ___space_15; }
	inline int32_t* get_address_of_space_15() { return &___space_15; }
	inline void set_space_15(int32_t value)
	{
		___space_15 = value;
	}

	inline static int32_t get_offset_of_distance_16() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___distance_16)); }
	inline FsmFloat_t937133978 * get_distance_16() const { return ___distance_16; }
	inline FsmFloat_t937133978 ** get_address_of_distance_16() { return &___distance_16; }
	inline void set_distance_16(FsmFloat_t937133978 * value)
	{
		___distance_16 = value;
		Il2CppCodeGenWriteBarrier(&___distance_16, value);
	}

	inline static int32_t get_offset_of_hitEvent_17() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___hitEvent_17)); }
	inline FsmEvent_t1258573736 * get_hitEvent_17() const { return ___hitEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_hitEvent_17() { return &___hitEvent_17; }
	inline void set_hitEvent_17(FsmEvent_t1258573736 * value)
	{
		___hitEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___hitEvent_17, value);
	}

	inline static int32_t get_offset_of_storeDidHit_18() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___storeDidHit_18)); }
	inline FsmBool_t664485696 * get_storeDidHit_18() const { return ___storeDidHit_18; }
	inline FsmBool_t664485696 ** get_address_of_storeDidHit_18() { return &___storeDidHit_18; }
	inline void set_storeDidHit_18(FsmBool_t664485696 * value)
	{
		___storeDidHit_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidHit_18, value);
	}

	inline static int32_t get_offset_of_storeHitObjects_19() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___storeHitObjects_19)); }
	inline FsmArray_t527459893 * get_storeHitObjects_19() const { return ___storeHitObjects_19; }
	inline FsmArray_t527459893 ** get_address_of_storeHitObjects_19() { return &___storeHitObjects_19; }
	inline void set_storeHitObjects_19(FsmArray_t527459893 * value)
	{
		___storeHitObjects_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitObjects_19, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_20() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___storeHitPoint_20)); }
	inline FsmVector3_t3996534004 * get_storeHitPoint_20() const { return ___storeHitPoint_20; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitPoint_20() { return &___storeHitPoint_20; }
	inline void set_storeHitPoint_20(FsmVector3_t3996534004 * value)
	{
		___storeHitPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_20, value);
	}

	inline static int32_t get_offset_of_storeHitNormal_21() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___storeHitNormal_21)); }
	inline FsmVector3_t3996534004 * get_storeHitNormal_21() const { return ___storeHitNormal_21; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitNormal_21() { return &___storeHitNormal_21; }
	inline void set_storeHitNormal_21(FsmVector3_t3996534004 * value)
	{
		___storeHitNormal_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitNormal_21, value);
	}

	inline static int32_t get_offset_of_storeHitDistance_22() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___storeHitDistance_22)); }
	inline FsmFloat_t937133978 * get_storeHitDistance_22() const { return ___storeHitDistance_22; }
	inline FsmFloat_t937133978 ** get_address_of_storeHitDistance_22() { return &___storeHitDistance_22; }
	inline void set_storeHitDistance_22(FsmFloat_t937133978 * value)
	{
		___storeHitDistance_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitDistance_22, value);
	}

	inline static int32_t get_offset_of_repeatInterval_23() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___repeatInterval_23)); }
	inline FsmInt_t1273009179 * get_repeatInterval_23() const { return ___repeatInterval_23; }
	inline FsmInt_t1273009179 ** get_address_of_repeatInterval_23() { return &___repeatInterval_23; }
	inline void set_repeatInterval_23(FsmInt_t1273009179 * value)
	{
		___repeatInterval_23 = value;
		Il2CppCodeGenWriteBarrier(&___repeatInterval_23, value);
	}

	inline static int32_t get_offset_of_layerMask_24() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___layerMask_24)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_24() const { return ___layerMask_24; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_24() { return &___layerMask_24; }
	inline void set_layerMask_24(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_24 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_24, value);
	}

	inline static int32_t get_offset_of_invertMask_25() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___invertMask_25)); }
	inline FsmBool_t664485696 * get_invertMask_25() const { return ___invertMask_25; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_25() { return &___invertMask_25; }
	inline void set_invertMask_25(FsmBool_t664485696 * value)
	{
		___invertMask_25 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_25, value);
	}

	inline static int32_t get_offset_of_debugColor_26() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___debugColor_26)); }
	inline FsmColor_t118301965 * get_debugColor_26() const { return ___debugColor_26; }
	inline FsmColor_t118301965 ** get_address_of_debugColor_26() { return &___debugColor_26; }
	inline void set_debugColor_26(FsmColor_t118301965 * value)
	{
		___debugColor_26 = value;
		Il2CppCodeGenWriteBarrier(&___debugColor_26, value);
	}

	inline static int32_t get_offset_of_debug_27() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___debug_27)); }
	inline FsmBool_t664485696 * get_debug_27() const { return ___debug_27; }
	inline FsmBool_t664485696 ** get_address_of_debug_27() { return &___debug_27; }
	inline void set_debug_27(FsmBool_t664485696 * value)
	{
		___debug_27 = value;
		Il2CppCodeGenWriteBarrier(&___debug_27, value);
	}

	inline static int32_t get_offset_of_repeat_28() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324, ___repeat_28)); }
	inline int32_t get_repeat_28() const { return ___repeat_28; }
	inline int32_t* get_address_of_repeat_28() { return &___repeat_28; }
	inline void set_repeat_28(int32_t value)
	{
		___repeat_28 = value;
	}
};

struct RaycastAll_t2103133324_StaticFields
{
public:
	// UnityEngine.RaycastHit[] HutongGames.PlayMaker.Actions.RaycastAll::RaycastAllHitInfo
	RaycastHitU5BU5D_t1214023521* ___RaycastAllHitInfo_11;

public:
	inline static int32_t get_offset_of_RaycastAllHitInfo_11() { return static_cast<int32_t>(offsetof(RaycastAll_t2103133324_StaticFields, ___RaycastAllHitInfo_11)); }
	inline RaycastHitU5BU5D_t1214023521* get_RaycastAllHitInfo_11() const { return ___RaycastAllHitInfo_11; }
	inline RaycastHitU5BU5D_t1214023521** get_address_of_RaycastAllHitInfo_11() { return &___RaycastAllHitInfo_11; }
	inline void set_RaycastAllHitInfo_11(RaycastHitU5BU5D_t1214023521* value)
	{
		___RaycastAllHitInfo_11 = value;
		Il2CppCodeGenWriteBarrier(&___RaycastAllHitInfo_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
