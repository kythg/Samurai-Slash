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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ScreenPick
struct  ScreenPick_t3182193451  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ScreenPick::screenVector
	FsmVector3_t3996534004 * ___screenVector_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick::screenX
	FsmFloat_t937133978 * ___screenX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick::screenY
	FsmFloat_t937133978 * ___screenY_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick::normalized
	FsmBool_t664485696 * ___normalized_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick::rayDistance
	FsmFloat_t937133978 * ___rayDistance_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick::storeDidPickObject
	FsmBool_t664485696 * ___storeDidPickObject_16;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.ScreenPick::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_17;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ScreenPick::storePoint
	FsmVector3_t3996534004 * ___storePoint_18;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ScreenPick::storeNormal
	FsmVector3_t3996534004 * ___storeNormal_19;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick::storeDistance
	FsmFloat_t937133978 * ___storeDistance_20;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.ScreenPick::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_21;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick::invertMask
	FsmBool_t664485696 * ___invertMask_22;
	// System.Boolean HutongGames.PlayMaker.Actions.ScreenPick::everyFrame
	bool ___everyFrame_23;

public:
	inline static int32_t get_offset_of_screenVector_11() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___screenVector_11)); }
	inline FsmVector3_t3996534004 * get_screenVector_11() const { return ___screenVector_11; }
	inline FsmVector3_t3996534004 ** get_address_of_screenVector_11() { return &___screenVector_11; }
	inline void set_screenVector_11(FsmVector3_t3996534004 * value)
	{
		___screenVector_11 = value;
		Il2CppCodeGenWriteBarrier(&___screenVector_11, value);
	}

	inline static int32_t get_offset_of_screenX_12() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___screenX_12)); }
	inline FsmFloat_t937133978 * get_screenX_12() const { return ___screenX_12; }
	inline FsmFloat_t937133978 ** get_address_of_screenX_12() { return &___screenX_12; }
	inline void set_screenX_12(FsmFloat_t937133978 * value)
	{
		___screenX_12 = value;
		Il2CppCodeGenWriteBarrier(&___screenX_12, value);
	}

	inline static int32_t get_offset_of_screenY_13() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___screenY_13)); }
	inline FsmFloat_t937133978 * get_screenY_13() const { return ___screenY_13; }
	inline FsmFloat_t937133978 ** get_address_of_screenY_13() { return &___screenY_13; }
	inline void set_screenY_13(FsmFloat_t937133978 * value)
	{
		___screenY_13 = value;
		Il2CppCodeGenWriteBarrier(&___screenY_13, value);
	}

	inline static int32_t get_offset_of_normalized_14() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___normalized_14)); }
	inline FsmBool_t664485696 * get_normalized_14() const { return ___normalized_14; }
	inline FsmBool_t664485696 ** get_address_of_normalized_14() { return &___normalized_14; }
	inline void set_normalized_14(FsmBool_t664485696 * value)
	{
		___normalized_14 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_14, value);
	}

	inline static int32_t get_offset_of_rayDistance_15() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___rayDistance_15)); }
	inline FsmFloat_t937133978 * get_rayDistance_15() const { return ___rayDistance_15; }
	inline FsmFloat_t937133978 ** get_address_of_rayDistance_15() { return &___rayDistance_15; }
	inline void set_rayDistance_15(FsmFloat_t937133978 * value)
	{
		___rayDistance_15 = value;
		Il2CppCodeGenWriteBarrier(&___rayDistance_15, value);
	}

	inline static int32_t get_offset_of_storeDidPickObject_16() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___storeDidPickObject_16)); }
	inline FsmBool_t664485696 * get_storeDidPickObject_16() const { return ___storeDidPickObject_16; }
	inline FsmBool_t664485696 ** get_address_of_storeDidPickObject_16() { return &___storeDidPickObject_16; }
	inline void set_storeDidPickObject_16(FsmBool_t664485696 * value)
	{
		___storeDidPickObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidPickObject_16, value);
	}

	inline static int32_t get_offset_of_storeGameObject_17() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___storeGameObject_17)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_17() const { return ___storeGameObject_17; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_17() { return &___storeGameObject_17; }
	inline void set_storeGameObject_17(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_17, value);
	}

	inline static int32_t get_offset_of_storePoint_18() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___storePoint_18)); }
	inline FsmVector3_t3996534004 * get_storePoint_18() const { return ___storePoint_18; }
	inline FsmVector3_t3996534004 ** get_address_of_storePoint_18() { return &___storePoint_18; }
	inline void set_storePoint_18(FsmVector3_t3996534004 * value)
	{
		___storePoint_18 = value;
		Il2CppCodeGenWriteBarrier(&___storePoint_18, value);
	}

	inline static int32_t get_offset_of_storeNormal_19() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___storeNormal_19)); }
	inline FsmVector3_t3996534004 * get_storeNormal_19() const { return ___storeNormal_19; }
	inline FsmVector3_t3996534004 ** get_address_of_storeNormal_19() { return &___storeNormal_19; }
	inline void set_storeNormal_19(FsmVector3_t3996534004 * value)
	{
		___storeNormal_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeNormal_19, value);
	}

	inline static int32_t get_offset_of_storeDistance_20() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___storeDistance_20)); }
	inline FsmFloat_t937133978 * get_storeDistance_20() const { return ___storeDistance_20; }
	inline FsmFloat_t937133978 ** get_address_of_storeDistance_20() { return &___storeDistance_20; }
	inline void set_storeDistance_20(FsmFloat_t937133978 * value)
	{
		___storeDistance_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeDistance_20, value);
	}

	inline static int32_t get_offset_of_layerMask_21() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___layerMask_21)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_21() const { return ___layerMask_21; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_21() { return &___layerMask_21; }
	inline void set_layerMask_21(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_21 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_21, value);
	}

	inline static int32_t get_offset_of_invertMask_22() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___invertMask_22)); }
	inline FsmBool_t664485696 * get_invertMask_22() const { return ___invertMask_22; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_22() { return &___invertMask_22; }
	inline void set_invertMask_22(FsmBool_t664485696 * value)
	{
		___invertMask_22 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_22, value);
	}

	inline static int32_t get_offset_of_everyFrame_23() { return static_cast<int32_t>(offsetof(ScreenPick_t3182193451, ___everyFrame_23)); }
	inline bool get_everyFrame_23() const { return ___everyFrame_23; }
	inline bool* get_address_of_everyFrame_23() { return &___everyFrame_23; }
	inline void set_everyFrame_23(bool value)
	{
		___everyFrame_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
