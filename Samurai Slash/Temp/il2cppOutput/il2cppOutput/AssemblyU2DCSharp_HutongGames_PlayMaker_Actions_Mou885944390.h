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
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
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

// HutongGames.PlayMaker.Actions.MousePickEvent
struct  MousePickEvent_t885944390  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MousePickEvent::GameObject
	FsmOwnerDefault_t2023674184 * ___GameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MousePickEvent::rayDistance
	FsmFloat_t937133978 * ___rayDistance_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePickEvent::mouseOver
	FsmEvent_t1258573736 * ___mouseOver_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePickEvent::mouseDown
	FsmEvent_t1258573736 * ___mouseDown_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePickEvent::mouseUp
	FsmEvent_t1258573736 * ___mouseUp_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.MousePickEvent::mouseOff
	FsmEvent_t1258573736 * ___mouseOff_16;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.MousePickEvent::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePickEvent::invertMask
	FsmBool_t664485696 * ___invertMask_18;
	// System.Boolean HutongGames.PlayMaker.Actions.MousePickEvent::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_GameObject_11() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___GameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_GameObject_11() const { return ___GameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_GameObject_11() { return &___GameObject_11; }
	inline void set_GameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___GameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___GameObject_11, value);
	}

	inline static int32_t get_offset_of_rayDistance_12() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___rayDistance_12)); }
	inline FsmFloat_t937133978 * get_rayDistance_12() const { return ___rayDistance_12; }
	inline FsmFloat_t937133978 ** get_address_of_rayDistance_12() { return &___rayDistance_12; }
	inline void set_rayDistance_12(FsmFloat_t937133978 * value)
	{
		___rayDistance_12 = value;
		Il2CppCodeGenWriteBarrier(&___rayDistance_12, value);
	}

	inline static int32_t get_offset_of_mouseOver_13() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___mouseOver_13)); }
	inline FsmEvent_t1258573736 * get_mouseOver_13() const { return ___mouseOver_13; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseOver_13() { return &___mouseOver_13; }
	inline void set_mouseOver_13(FsmEvent_t1258573736 * value)
	{
		___mouseOver_13 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOver_13, value);
	}

	inline static int32_t get_offset_of_mouseDown_14() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___mouseDown_14)); }
	inline FsmEvent_t1258573736 * get_mouseDown_14() const { return ___mouseDown_14; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseDown_14() { return &___mouseDown_14; }
	inline void set_mouseDown_14(FsmEvent_t1258573736 * value)
	{
		___mouseDown_14 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDown_14, value);
	}

	inline static int32_t get_offset_of_mouseUp_15() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___mouseUp_15)); }
	inline FsmEvent_t1258573736 * get_mouseUp_15() const { return ___mouseUp_15; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseUp_15() { return &___mouseUp_15; }
	inline void set_mouseUp_15(FsmEvent_t1258573736 * value)
	{
		___mouseUp_15 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUp_15, value);
	}

	inline static int32_t get_offset_of_mouseOff_16() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___mouseOff_16)); }
	inline FsmEvent_t1258573736 * get_mouseOff_16() const { return ___mouseOff_16; }
	inline FsmEvent_t1258573736 ** get_address_of_mouseOff_16() { return &___mouseOff_16; }
	inline void set_mouseOff_16(FsmEvent_t1258573736 * value)
	{
		___mouseOff_16 = value;
		Il2CppCodeGenWriteBarrier(&___mouseOff_16, value);
	}

	inline static int32_t get_offset_of_layerMask_17() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___layerMask_17)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_17() const { return ___layerMask_17; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_17() { return &___layerMask_17; }
	inline void set_layerMask_17(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_17, value);
	}

	inline static int32_t get_offset_of_invertMask_18() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___invertMask_18)); }
	inline FsmBool_t664485696 * get_invertMask_18() const { return ___invertMask_18; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_18() { return &___invertMask_18; }
	inline void set_invertMask_18(FsmBool_t664485696 * value)
	{
		___invertMask_18 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(MousePickEvent_t885944390, ___everyFrame_19)); }
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
