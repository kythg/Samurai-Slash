#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_To1038433087.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.GUIElement
struct GUIElement_t3381083099;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.TouchGUIEvent
struct  TouchGUIEvent_t3988768176  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.TouchGUIEvent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchGUIEvent::fingerId
	FsmInt_t1273009179 * ___fingerId_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::touchBegan
	FsmEvent_t1258573736 * ___touchBegan_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::touchMoved
	FsmEvent_t1258573736 * ___touchMoved_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::touchStationary
	FsmEvent_t1258573736 * ___touchStationary_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::touchEnded
	FsmEvent_t1258573736 * ___touchEnded_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::touchCanceled
	FsmEvent_t1258573736 * ___touchCanceled_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchGUIEvent::notTouching
	FsmEvent_t1258573736 * ___notTouching_18;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchGUIEvent::storeFingerId
	FsmInt_t1273009179 * ___storeFingerId_19;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.TouchGUIEvent::storeHitPoint
	FsmVector3_t3996534004 * ___storeHitPoint_20;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.TouchGUIEvent::normalizeHitPoint
	FsmBool_t664485696 * ___normalizeHitPoint_21;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.TouchGUIEvent::storeOffset
	FsmVector3_t3996534004 * ___storeOffset_22;
	// HutongGames.PlayMaker.Actions.TouchGUIEvent/OffsetOptions HutongGames.PlayMaker.Actions.TouchGUIEvent::relativeTo
	int32_t ___relativeTo_23;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.TouchGUIEvent::normalizeOffset
	FsmBool_t664485696 * ___normalizeOffset_24;
	// System.Boolean HutongGames.PlayMaker.Actions.TouchGUIEvent::everyFrame
	bool ___everyFrame_25;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.TouchGUIEvent::touchStartPos
	Vector3_t2243707580  ___touchStartPos_26;
	// UnityEngine.GUIElement HutongGames.PlayMaker.Actions.TouchGUIEvent::guiElement
	GUIElement_t3381083099 * ___guiElement_27;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fingerId_12() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___fingerId_12)); }
	inline FsmInt_t1273009179 * get_fingerId_12() const { return ___fingerId_12; }
	inline FsmInt_t1273009179 ** get_address_of_fingerId_12() { return &___fingerId_12; }
	inline void set_fingerId_12(FsmInt_t1273009179 * value)
	{
		___fingerId_12 = value;
		Il2CppCodeGenWriteBarrier(&___fingerId_12, value);
	}

	inline static int32_t get_offset_of_touchBegan_13() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchBegan_13)); }
	inline FsmEvent_t1258573736 * get_touchBegan_13() const { return ___touchBegan_13; }
	inline FsmEvent_t1258573736 ** get_address_of_touchBegan_13() { return &___touchBegan_13; }
	inline void set_touchBegan_13(FsmEvent_t1258573736 * value)
	{
		___touchBegan_13 = value;
		Il2CppCodeGenWriteBarrier(&___touchBegan_13, value);
	}

	inline static int32_t get_offset_of_touchMoved_14() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchMoved_14)); }
	inline FsmEvent_t1258573736 * get_touchMoved_14() const { return ___touchMoved_14; }
	inline FsmEvent_t1258573736 ** get_address_of_touchMoved_14() { return &___touchMoved_14; }
	inline void set_touchMoved_14(FsmEvent_t1258573736 * value)
	{
		___touchMoved_14 = value;
		Il2CppCodeGenWriteBarrier(&___touchMoved_14, value);
	}

	inline static int32_t get_offset_of_touchStationary_15() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchStationary_15)); }
	inline FsmEvent_t1258573736 * get_touchStationary_15() const { return ___touchStationary_15; }
	inline FsmEvent_t1258573736 ** get_address_of_touchStationary_15() { return &___touchStationary_15; }
	inline void set_touchStationary_15(FsmEvent_t1258573736 * value)
	{
		___touchStationary_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchStationary_15, value);
	}

	inline static int32_t get_offset_of_touchEnded_16() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchEnded_16)); }
	inline FsmEvent_t1258573736 * get_touchEnded_16() const { return ___touchEnded_16; }
	inline FsmEvent_t1258573736 ** get_address_of_touchEnded_16() { return &___touchEnded_16; }
	inline void set_touchEnded_16(FsmEvent_t1258573736 * value)
	{
		___touchEnded_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchEnded_16, value);
	}

	inline static int32_t get_offset_of_touchCanceled_17() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchCanceled_17)); }
	inline FsmEvent_t1258573736 * get_touchCanceled_17() const { return ___touchCanceled_17; }
	inline FsmEvent_t1258573736 ** get_address_of_touchCanceled_17() { return &___touchCanceled_17; }
	inline void set_touchCanceled_17(FsmEvent_t1258573736 * value)
	{
		___touchCanceled_17 = value;
		Il2CppCodeGenWriteBarrier(&___touchCanceled_17, value);
	}

	inline static int32_t get_offset_of_notTouching_18() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___notTouching_18)); }
	inline FsmEvent_t1258573736 * get_notTouching_18() const { return ___notTouching_18; }
	inline FsmEvent_t1258573736 ** get_address_of_notTouching_18() { return &___notTouching_18; }
	inline void set_notTouching_18(FsmEvent_t1258573736 * value)
	{
		___notTouching_18 = value;
		Il2CppCodeGenWriteBarrier(&___notTouching_18, value);
	}

	inline static int32_t get_offset_of_storeFingerId_19() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___storeFingerId_19)); }
	inline FsmInt_t1273009179 * get_storeFingerId_19() const { return ___storeFingerId_19; }
	inline FsmInt_t1273009179 ** get_address_of_storeFingerId_19() { return &___storeFingerId_19; }
	inline void set_storeFingerId_19(FsmInt_t1273009179 * value)
	{
		___storeFingerId_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeFingerId_19, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_20() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___storeHitPoint_20)); }
	inline FsmVector3_t3996534004 * get_storeHitPoint_20() const { return ___storeHitPoint_20; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitPoint_20() { return &___storeHitPoint_20; }
	inline void set_storeHitPoint_20(FsmVector3_t3996534004 * value)
	{
		___storeHitPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_20, value);
	}

	inline static int32_t get_offset_of_normalizeHitPoint_21() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___normalizeHitPoint_21)); }
	inline FsmBool_t664485696 * get_normalizeHitPoint_21() const { return ___normalizeHitPoint_21; }
	inline FsmBool_t664485696 ** get_address_of_normalizeHitPoint_21() { return &___normalizeHitPoint_21; }
	inline void set_normalizeHitPoint_21(FsmBool_t664485696 * value)
	{
		___normalizeHitPoint_21 = value;
		Il2CppCodeGenWriteBarrier(&___normalizeHitPoint_21, value);
	}

	inline static int32_t get_offset_of_storeOffset_22() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___storeOffset_22)); }
	inline FsmVector3_t3996534004 * get_storeOffset_22() const { return ___storeOffset_22; }
	inline FsmVector3_t3996534004 ** get_address_of_storeOffset_22() { return &___storeOffset_22; }
	inline void set_storeOffset_22(FsmVector3_t3996534004 * value)
	{
		___storeOffset_22 = value;
		Il2CppCodeGenWriteBarrier(&___storeOffset_22, value);
	}

	inline static int32_t get_offset_of_relativeTo_23() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___relativeTo_23)); }
	inline int32_t get_relativeTo_23() const { return ___relativeTo_23; }
	inline int32_t* get_address_of_relativeTo_23() { return &___relativeTo_23; }
	inline void set_relativeTo_23(int32_t value)
	{
		___relativeTo_23 = value;
	}

	inline static int32_t get_offset_of_normalizeOffset_24() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___normalizeOffset_24)); }
	inline FsmBool_t664485696 * get_normalizeOffset_24() const { return ___normalizeOffset_24; }
	inline FsmBool_t664485696 ** get_address_of_normalizeOffset_24() { return &___normalizeOffset_24; }
	inline void set_normalizeOffset_24(FsmBool_t664485696 * value)
	{
		___normalizeOffset_24 = value;
		Il2CppCodeGenWriteBarrier(&___normalizeOffset_24, value);
	}

	inline static int32_t get_offset_of_everyFrame_25() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___everyFrame_25)); }
	inline bool get_everyFrame_25() const { return ___everyFrame_25; }
	inline bool* get_address_of_everyFrame_25() { return &___everyFrame_25; }
	inline void set_everyFrame_25(bool value)
	{
		___everyFrame_25 = value;
	}

	inline static int32_t get_offset_of_touchStartPos_26() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___touchStartPos_26)); }
	inline Vector3_t2243707580  get_touchStartPos_26() const { return ___touchStartPos_26; }
	inline Vector3_t2243707580 * get_address_of_touchStartPos_26() { return &___touchStartPos_26; }
	inline void set_touchStartPos_26(Vector3_t2243707580  value)
	{
		___touchStartPos_26 = value;
	}

	inline static int32_t get_offset_of_guiElement_27() { return static_cast<int32_t>(offsetof(TouchGUIEvent_t3988768176, ___guiElement_27)); }
	inline GUIElement_t3381083099 * get_guiElement_27() const { return ___guiElement_27; }
	inline GUIElement_t3381083099 ** get_address_of_guiElement_27() { return &___guiElement_27; }
	inline void set_guiElement_27(GUIElement_t3381083099 * value)
	{
		___guiElement_27 = value;
		Il2CppCodeGenWriteBarrier(&___guiElement_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
