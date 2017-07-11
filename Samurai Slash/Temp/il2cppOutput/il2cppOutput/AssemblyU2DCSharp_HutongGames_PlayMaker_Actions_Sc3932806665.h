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

// HutongGames.PlayMaker.Actions.ScreenPick2d
struct  ScreenPick2d_t3932806665  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ScreenPick2d::screenVector
	FsmVector3_t3996534004 * ___screenVector_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick2d::screenX
	FsmFloat_t937133978 * ___screenX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ScreenPick2d::screenY
	FsmFloat_t937133978 * ___screenY_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick2d::normalized
	FsmBool_t664485696 * ___normalized_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick2d::storeDidPickObject
	FsmBool_t664485696 * ___storeDidPickObject_15;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.ScreenPick2d::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_16;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ScreenPick2d::storePoint
	FsmVector3_t3996534004 * ___storePoint_17;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.ScreenPick2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ScreenPick2d::invertMask
	FsmBool_t664485696 * ___invertMask_19;
	// System.Boolean HutongGames.PlayMaker.Actions.ScreenPick2d::everyFrame
	bool ___everyFrame_20;

public:
	inline static int32_t get_offset_of_screenVector_11() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___screenVector_11)); }
	inline FsmVector3_t3996534004 * get_screenVector_11() const { return ___screenVector_11; }
	inline FsmVector3_t3996534004 ** get_address_of_screenVector_11() { return &___screenVector_11; }
	inline void set_screenVector_11(FsmVector3_t3996534004 * value)
	{
		___screenVector_11 = value;
		Il2CppCodeGenWriteBarrier(&___screenVector_11, value);
	}

	inline static int32_t get_offset_of_screenX_12() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___screenX_12)); }
	inline FsmFloat_t937133978 * get_screenX_12() const { return ___screenX_12; }
	inline FsmFloat_t937133978 ** get_address_of_screenX_12() { return &___screenX_12; }
	inline void set_screenX_12(FsmFloat_t937133978 * value)
	{
		___screenX_12 = value;
		Il2CppCodeGenWriteBarrier(&___screenX_12, value);
	}

	inline static int32_t get_offset_of_screenY_13() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___screenY_13)); }
	inline FsmFloat_t937133978 * get_screenY_13() const { return ___screenY_13; }
	inline FsmFloat_t937133978 ** get_address_of_screenY_13() { return &___screenY_13; }
	inline void set_screenY_13(FsmFloat_t937133978 * value)
	{
		___screenY_13 = value;
		Il2CppCodeGenWriteBarrier(&___screenY_13, value);
	}

	inline static int32_t get_offset_of_normalized_14() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___normalized_14)); }
	inline FsmBool_t664485696 * get_normalized_14() const { return ___normalized_14; }
	inline FsmBool_t664485696 ** get_address_of_normalized_14() { return &___normalized_14; }
	inline void set_normalized_14(FsmBool_t664485696 * value)
	{
		___normalized_14 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_14, value);
	}

	inline static int32_t get_offset_of_storeDidPickObject_15() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___storeDidPickObject_15)); }
	inline FsmBool_t664485696 * get_storeDidPickObject_15() const { return ___storeDidPickObject_15; }
	inline FsmBool_t664485696 ** get_address_of_storeDidPickObject_15() { return &___storeDidPickObject_15; }
	inline void set_storeDidPickObject_15(FsmBool_t664485696 * value)
	{
		___storeDidPickObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidPickObject_15, value);
	}

	inline static int32_t get_offset_of_storeGameObject_16() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___storeGameObject_16)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_16() const { return ___storeGameObject_16; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_16() { return &___storeGameObject_16; }
	inline void set_storeGameObject_16(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_16, value);
	}

	inline static int32_t get_offset_of_storePoint_17() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___storePoint_17)); }
	inline FsmVector3_t3996534004 * get_storePoint_17() const { return ___storePoint_17; }
	inline FsmVector3_t3996534004 ** get_address_of_storePoint_17() { return &___storePoint_17; }
	inline void set_storePoint_17(FsmVector3_t3996534004 * value)
	{
		___storePoint_17 = value;
		Il2CppCodeGenWriteBarrier(&___storePoint_17, value);
	}

	inline static int32_t get_offset_of_layerMask_18() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___layerMask_18)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_18() const { return ___layerMask_18; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_18() { return &___layerMask_18; }
	inline void set_layerMask_18(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_18, value);
	}

	inline static int32_t get_offset_of_invertMask_19() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___invertMask_19)); }
	inline FsmBool_t664485696 * get_invertMask_19() const { return ___invertMask_19; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_19() { return &___invertMask_19; }
	inline void set_invertMask_19(FsmBool_t664485696 * value)
	{
		___invertMask_19 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_19, value);
	}

	inline static int32_t get_offset_of_everyFrame_20() { return static_cast<int32_t>(offsetof(ScreenPick2d_t3932806665, ___everyFrame_20)); }
	inline bool get_everyFrame_20() const { return ___everyFrame_20; }
	inline bool* get_address_of_everyFrame_20() { return &___everyFrame_20; }
	inline void set_everyFrame_20(bool value)
	{
		___everyFrame_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
