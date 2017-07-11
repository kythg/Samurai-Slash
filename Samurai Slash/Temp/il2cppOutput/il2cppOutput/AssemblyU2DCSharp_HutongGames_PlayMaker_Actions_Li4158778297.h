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
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
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

// HutongGames.PlayMaker.Actions.LineCast2d
struct  LineCast2d_t4158778297  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.LineCast2d::fromGameObject
	FsmOwnerDefault_t2023674184 * ___fromGameObject_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.LineCast2d::fromPosition
	FsmVector2_t2430450063 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.LineCast2d::toGameObject
	FsmGameObject_t3097142863 * ___toGameObject_13;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.LineCast2d::toPosition
	FsmVector2_t2430450063 * ___toPosition_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LineCast2d::minDepth
	FsmInt_t1273009179 * ___minDepth_15;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LineCast2d::maxDepth
	FsmInt_t1273009179 * ___maxDepth_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LineCast2d::hitEvent
	FsmEvent_t1258573736 * ___hitEvent_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LineCast2d::storeDidHit
	FsmBool_t664485696 * ___storeDidHit_18;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.LineCast2d::storeHitObject
	FsmGameObject_t3097142863 * ___storeHitObject_19;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.LineCast2d::storeHitPoint
	FsmVector2_t2430450063 * ___storeHitPoint_20;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.LineCast2d::storeHitNormal
	FsmVector2_t2430450063 * ___storeHitNormal_21;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.LineCast2d::storeHitDistance
	FsmFloat_t937133978 * ___storeHitDistance_22;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LineCast2d::repeatInterval
	FsmInt_t1273009179 * ___repeatInterval_23;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.LineCast2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_24;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LineCast2d::invertMask
	FsmBool_t664485696 * ___invertMask_25;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.LineCast2d::debugColor
	FsmColor_t118301965 * ___debugColor_26;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LineCast2d::debug
	FsmBool_t664485696 * ___debug_27;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.LineCast2d::_fromTrans
	Transform_t3275118058 * ____fromTrans_28;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.LineCast2d::_toTrans
	Transform_t3275118058 * ____toTrans_29;
	// System.Int32 HutongGames.PlayMaker.Actions.LineCast2d::repeat
	int32_t ___repeat_30;

public:
	inline static int32_t get_offset_of_fromGameObject_11() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___fromGameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_fromGameObject_11() const { return ___fromGameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_fromGameObject_11() { return &___fromGameObject_11; }
	inline void set_fromGameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___fromGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromGameObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___fromPosition_12)); }
	inline FsmVector2_t2430450063 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector2_t2430450063 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector2_t2430450063 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_toGameObject_13() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___toGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_toGameObject_13() const { return ___toGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_toGameObject_13() { return &___toGameObject_13; }
	inline void set_toGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___toGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___toGameObject_13, value);
	}

	inline static int32_t get_offset_of_toPosition_14() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___toPosition_14)); }
	inline FsmVector2_t2430450063 * get_toPosition_14() const { return ___toPosition_14; }
	inline FsmVector2_t2430450063 ** get_address_of_toPosition_14() { return &___toPosition_14; }
	inline void set_toPosition_14(FsmVector2_t2430450063 * value)
	{
		___toPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___toPosition_14, value);
	}

	inline static int32_t get_offset_of_minDepth_15() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___minDepth_15)); }
	inline FsmInt_t1273009179 * get_minDepth_15() const { return ___minDepth_15; }
	inline FsmInt_t1273009179 ** get_address_of_minDepth_15() { return &___minDepth_15; }
	inline void set_minDepth_15(FsmInt_t1273009179 * value)
	{
		___minDepth_15 = value;
		Il2CppCodeGenWriteBarrier(&___minDepth_15, value);
	}

	inline static int32_t get_offset_of_maxDepth_16() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___maxDepth_16)); }
	inline FsmInt_t1273009179 * get_maxDepth_16() const { return ___maxDepth_16; }
	inline FsmInt_t1273009179 ** get_address_of_maxDepth_16() { return &___maxDepth_16; }
	inline void set_maxDepth_16(FsmInt_t1273009179 * value)
	{
		___maxDepth_16 = value;
		Il2CppCodeGenWriteBarrier(&___maxDepth_16, value);
	}

	inline static int32_t get_offset_of_hitEvent_17() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___hitEvent_17)); }
	inline FsmEvent_t1258573736 * get_hitEvent_17() const { return ___hitEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_hitEvent_17() { return &___hitEvent_17; }
	inline void set_hitEvent_17(FsmEvent_t1258573736 * value)
	{
		___hitEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___hitEvent_17, value);
	}

	inline static int32_t get_offset_of_storeDidHit_18() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___storeDidHit_18)); }
	inline FsmBool_t664485696 * get_storeDidHit_18() const { return ___storeDidHit_18; }
	inline FsmBool_t664485696 ** get_address_of_storeDidHit_18() { return &___storeDidHit_18; }
	inline void set_storeDidHit_18(FsmBool_t664485696 * value)
	{
		___storeDidHit_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidHit_18, value);
	}

	inline static int32_t get_offset_of_storeHitObject_19() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___storeHitObject_19)); }
	inline FsmGameObject_t3097142863 * get_storeHitObject_19() const { return ___storeHitObject_19; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeHitObject_19() { return &___storeHitObject_19; }
	inline void set_storeHitObject_19(FsmGameObject_t3097142863 * value)
	{
		___storeHitObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitObject_19, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_20() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___storeHitPoint_20)); }
	inline FsmVector2_t2430450063 * get_storeHitPoint_20() const { return ___storeHitPoint_20; }
	inline FsmVector2_t2430450063 ** get_address_of_storeHitPoint_20() { return &___storeHitPoint_20; }
	inline void set_storeHitPoint_20(FsmVector2_t2430450063 * value)
	{
		___storeHitPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_20, value);
	}

	inline static int32_t get_offset_of_storeHitNormal_21() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___storeHitNormal_21)); }
	inline FsmVector2_t2430450063 * get_storeHitNormal_21() const { return ___storeHitNormal_21; }
	inline FsmVector2_t2430450063 ** get_address_of_storeHitNormal_21() { return &___storeHitNormal_21; }
	inline void set_storeHitNormal_21(FsmVector2_t2430450063 * value)
	{
		___storeHitNormal_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitNormal_21, value);
	}

	inline static int32_t get_offset_of_storeHitDistance_22() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___storeHitDistance_22)); }
	inline FsmFloat_t937133978 * get_storeHitDistance_22() const { return ___storeHitDistance_22; }
	inline FsmFloat_t937133978 ** get_address_of_storeHitDistance_22() { return &___storeHitDistance_22; }
	inline void set_storeHitDistance_22(FsmFloat_t937133978 * value)
	{
		___storeHitDistance_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitDistance_22, value);
	}

	inline static int32_t get_offset_of_repeatInterval_23() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___repeatInterval_23)); }
	inline FsmInt_t1273009179 * get_repeatInterval_23() const { return ___repeatInterval_23; }
	inline FsmInt_t1273009179 ** get_address_of_repeatInterval_23() { return &___repeatInterval_23; }
	inline void set_repeatInterval_23(FsmInt_t1273009179 * value)
	{
		___repeatInterval_23 = value;
		Il2CppCodeGenWriteBarrier(&___repeatInterval_23, value);
	}

	inline static int32_t get_offset_of_layerMask_24() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___layerMask_24)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_24() const { return ___layerMask_24; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_24() { return &___layerMask_24; }
	inline void set_layerMask_24(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_24 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_24, value);
	}

	inline static int32_t get_offset_of_invertMask_25() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___invertMask_25)); }
	inline FsmBool_t664485696 * get_invertMask_25() const { return ___invertMask_25; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_25() { return &___invertMask_25; }
	inline void set_invertMask_25(FsmBool_t664485696 * value)
	{
		___invertMask_25 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_25, value);
	}

	inline static int32_t get_offset_of_debugColor_26() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___debugColor_26)); }
	inline FsmColor_t118301965 * get_debugColor_26() const { return ___debugColor_26; }
	inline FsmColor_t118301965 ** get_address_of_debugColor_26() { return &___debugColor_26; }
	inline void set_debugColor_26(FsmColor_t118301965 * value)
	{
		___debugColor_26 = value;
		Il2CppCodeGenWriteBarrier(&___debugColor_26, value);
	}

	inline static int32_t get_offset_of_debug_27() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___debug_27)); }
	inline FsmBool_t664485696 * get_debug_27() const { return ___debug_27; }
	inline FsmBool_t664485696 ** get_address_of_debug_27() { return &___debug_27; }
	inline void set_debug_27(FsmBool_t664485696 * value)
	{
		___debug_27 = value;
		Il2CppCodeGenWriteBarrier(&___debug_27, value);
	}

	inline static int32_t get_offset_of__fromTrans_28() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ____fromTrans_28)); }
	inline Transform_t3275118058 * get__fromTrans_28() const { return ____fromTrans_28; }
	inline Transform_t3275118058 ** get_address_of__fromTrans_28() { return &____fromTrans_28; }
	inline void set__fromTrans_28(Transform_t3275118058 * value)
	{
		____fromTrans_28 = value;
		Il2CppCodeGenWriteBarrier(&____fromTrans_28, value);
	}

	inline static int32_t get_offset_of__toTrans_29() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ____toTrans_29)); }
	inline Transform_t3275118058 * get__toTrans_29() const { return ____toTrans_29; }
	inline Transform_t3275118058 ** get_address_of__toTrans_29() { return &____toTrans_29; }
	inline void set__toTrans_29(Transform_t3275118058 * value)
	{
		____toTrans_29 = value;
		Il2CppCodeGenWriteBarrier(&____toTrans_29, value);
	}

	inline static int32_t get_offset_of_repeat_30() { return static_cast<int32_t>(offsetof(LineCast2d_t4158778297, ___repeat_30)); }
	inline int32_t get_repeat_30() const { return ___repeat_30; }
	inline int32_t* get_address_of_repeat_30() { return &___repeat_30; }
	inline void set_repeat_30(int32_t value)
	{
		___repeat_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
