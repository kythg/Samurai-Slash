#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MousePick
struct  MousePick_t1663739482  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MousePick::rayDistance
	FsmFloat_t937133978 * ___rayDistance_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePick::storeDidPickObject
	FsmBool_t664485696 * ___storeDidPickObject_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.MousePick::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MousePick::storePoint
	FsmVector3_t3996534004 * ___storePoint_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MousePick::storeNormal
	FsmVector3_t3996534004 * ___storeNormal_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MousePick::storeDistance
	FsmFloat_t937133978 * ___storeDistance_16;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.MousePick::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePick::invertMask
	FsmBool_t664485696 * ___invertMask_18;
	// System.Boolean HutongGames.PlayMaker.Actions.MousePick::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_rayDistance_11() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___rayDistance_11)); }
	inline FsmFloat_t937133978 * get_rayDistance_11() const { return ___rayDistance_11; }
	inline FsmFloat_t937133978 ** get_address_of_rayDistance_11() { return &___rayDistance_11; }
	inline void set_rayDistance_11(FsmFloat_t937133978 * value)
	{
		___rayDistance_11 = value;
		Il2CppCodeGenWriteBarrier(&___rayDistance_11, value);
	}

	inline static int32_t get_offset_of_storeDidPickObject_12() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___storeDidPickObject_12)); }
	inline FsmBool_t664485696 * get_storeDidPickObject_12() const { return ___storeDidPickObject_12; }
	inline FsmBool_t664485696 ** get_address_of_storeDidPickObject_12() { return &___storeDidPickObject_12; }
	inline void set_storeDidPickObject_12(FsmBool_t664485696 * value)
	{
		___storeDidPickObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidPickObject_12, value);
	}

	inline static int32_t get_offset_of_storeGameObject_13() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___storeGameObject_13)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_13() const { return ___storeGameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_13() { return &___storeGameObject_13; }
	inline void set_storeGameObject_13(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_13, value);
	}

	inline static int32_t get_offset_of_storePoint_14() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___storePoint_14)); }
	inline FsmVector3_t3996534004 * get_storePoint_14() const { return ___storePoint_14; }
	inline FsmVector3_t3996534004 ** get_address_of_storePoint_14() { return &___storePoint_14; }
	inline void set_storePoint_14(FsmVector3_t3996534004 * value)
	{
		___storePoint_14 = value;
		Il2CppCodeGenWriteBarrier(&___storePoint_14, value);
	}

	inline static int32_t get_offset_of_storeNormal_15() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___storeNormal_15)); }
	inline FsmVector3_t3996534004 * get_storeNormal_15() const { return ___storeNormal_15; }
	inline FsmVector3_t3996534004 ** get_address_of_storeNormal_15() { return &___storeNormal_15; }
	inline void set_storeNormal_15(FsmVector3_t3996534004 * value)
	{
		___storeNormal_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeNormal_15, value);
	}

	inline static int32_t get_offset_of_storeDistance_16() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___storeDistance_16)); }
	inline FsmFloat_t937133978 * get_storeDistance_16() const { return ___storeDistance_16; }
	inline FsmFloat_t937133978 ** get_address_of_storeDistance_16() { return &___storeDistance_16; }
	inline void set_storeDistance_16(FsmFloat_t937133978 * value)
	{
		___storeDistance_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeDistance_16, value);
	}

	inline static int32_t get_offset_of_layerMask_17() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___layerMask_17)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_17() const { return ___layerMask_17; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_17() { return &___layerMask_17; }
	inline void set_layerMask_17(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_17, value);
	}

	inline static int32_t get_offset_of_invertMask_18() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___invertMask_18)); }
	inline FsmBool_t664485696 * get_invertMask_18() const { return ___invertMask_18; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_18() { return &___invertMask_18; }
	inline void set_invertMask_18(FsmBool_t664485696 * value)
	{
		___invertMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(MousePick_t1663739482, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
