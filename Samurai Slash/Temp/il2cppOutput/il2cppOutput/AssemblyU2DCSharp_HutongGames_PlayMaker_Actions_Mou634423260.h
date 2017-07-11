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
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MousePick2dEvent
struct  MousePick2dEvent_t634423260  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MousePick2dEvent::GameObject
	FsmOwnerDefault_t2023674184 * ___GameObject_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePick2dEvent::mouseOver
	FsmEvent_t1258573736 * ___mouseOver_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePick2dEvent::mouseDown
	FsmEvent_t1258573736 * ___mouseDown_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePick2dEvent::mouseUp
	FsmEvent_t1258573736 * ___mouseUp_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePick2dEvent::mouseOff
	FsmEvent_t1258573736 * ___mouseOff_15;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.MousePick2dEvent::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePick2dEvent::invertMask
	FsmBool_t664485696 * ___invertMask_17;
	// System.Boolean HutongGames.PlayMaker.Actions.MousePick2dEvent::everyFrame
	bool ___everyFrame_18;

public:
	inline static int32_t get_offset_of_GameObject_11() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___GameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_GameObject_11() const { return ___GameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_GameObject_11() { return &___GameObject_11; }
	inline void set_GameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___GameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___GameObject_11, value);
	}

	inline static int32_t get_offset_of_mouseOver_12() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___mouseOver_12)); }
	inline FsmEvent_t1258573736 * get_mouseOver_12() const { return ___mouseOver_12; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseOver_12() { return &___mouseOver_12; }
	inline void set_mouseOver_12(FsmEvent_t1258573736 * value)
	{
		___mouseOver_12 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOver_12, value);
	}

	inline static int32_t get_offset_of_mouseDown_13() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___mouseDown_13)); }
	inline FsmEvent_t1258573736 * get_mouseDown_13() const { return ___mouseDown_13; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseDown_13() { return &___mouseDown_13; }
	inline void set_mouseDown_13(FsmEvent_t1258573736 * value)
	{
		___mouseDown_13 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDown_13, value);
	}

	inline static int32_t get_offset_of_mouseUp_14() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___mouseUp_14)); }
	inline FsmEvent_t1258573736 * get_mouseUp_14() const { return ___mouseUp_14; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseUp_14() { return &___mouseUp_14; }
	inline void set_mouseUp_14(FsmEvent_t1258573736 * value)
	{
		___mouseUp_14 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUp_14, value);
	}

	inline static int32_t get_offset_of_mouseOff_15() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___mouseOff_15)); }
	inline FsmEvent_t1258573736 * get_mouseOff_15() const { return ___mouseOff_15; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseOff_15() { return &___mouseOff_15; }
	inline void set_mouseOff_15(FsmEvent_t1258573736 * value)
	{
		___mouseOff_15 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOff_15, value);
	}

	inline static int32_t get_offset_of_layerMask_16() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___layerMask_16)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_16() const { return ___layerMask_16; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_16() { return &___layerMask_16; }
	inline void set_layerMask_16(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_16 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_16, value);
	}

	inline static int32_t get_offset_of_invertMask_17() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___invertMask_17)); }
	inline FsmBool_t664485696 * get_invertMask_17() const { return ___invertMask_17; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_17() { return &___invertMask_17; }
	inline void set_invertMask_17(FsmBool_t664485696 * value)
	{
		___invertMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_17, value);
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(MousePick2dEvent_t634423260, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
