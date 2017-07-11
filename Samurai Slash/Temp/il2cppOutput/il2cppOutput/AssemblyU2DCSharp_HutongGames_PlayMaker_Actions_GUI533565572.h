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
// UnityEngine.Camera
struct Camera_t189460977;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// UnityEngine.GUIElement
struct GUIElement_t3381083099;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUIElementHitTest
struct  GUIElementHitTest_t533565572  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GUIElementHitTest::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// UnityEngine.Camera HutongGames.PlayMaker.Actions.GUIElementHitTest::camera
	Camera_t189460977 * ___camera_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GUIElementHitTest::screenPoint
	FsmVector3_t3996534004 * ___screenPoint_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIElementHitTest::screenX
	FsmFloat_t937133978 * ___screenX_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GUIElementHitTest::screenY
	FsmFloat_t937133978 * ___screenY_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUIElementHitTest::normalized
	FsmBool_t664485696 * ___normalized_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GUIElementHitTest::hitEvent
	FsmEvent_t1258573736 * ___hitEvent_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUIElementHitTest::storeResult
	FsmBool_t664485696 * ___storeResult_18;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GUIElementHitTest::everyFrame
	FsmBool_t664485696 * ___everyFrame_19;
	// UnityEngine.GUIElement HutongGames.PlayMaker.Actions.GUIElementHitTest::guiElement
	GUIElement_t3381083099 * ___guiElement_20;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.GUIElementHitTest::gameObjectCached
	GameObject_t1756533147 * ___gameObjectCached_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_camera_12() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___camera_12)); }
	inline Camera_t189460977 * get_camera_12() const { return ___camera_12; }
	inline Camera_t189460977 ** get_address_of_camera_12() { return &___camera_12; }
	inline void set_camera_12(Camera_t189460977 * value)
	{
		___camera_12 = value;
		Il2CppCodeGenWriteBarrier(&___camera_12, value);
	}

	inline static int32_t get_offset_of_screenPoint_13() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___screenPoint_13)); }
	inline FsmVector3_t3996534004 * get_screenPoint_13() const { return ___screenPoint_13; }
	inline FsmVector3_t3996534004 ** get_address_of_screenPoint_13() { return &___screenPoint_13; }
	inline void set_screenPoint_13(FsmVector3_t3996534004 * value)
	{
		___screenPoint_13 = value;
		Il2CppCodeGenWriteBarrier(&___screenPoint_13, value);
	}

	inline static int32_t get_offset_of_screenX_14() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___screenX_14)); }
	inline FsmFloat_t937133978 * get_screenX_14() const { return ___screenX_14; }
	inline FsmFloat_t937133978 ** get_address_of_screenX_14() { return &___screenX_14; }
	inline void set_screenX_14(FsmFloat_t937133978 * value)
	{
		___screenX_14 = value;
		Il2CppCodeGenWriteBarrier(&___screenX_14, value);
	}

	inline static int32_t get_offset_of_screenY_15() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___screenY_15)); }
	inline FsmFloat_t937133978 * get_screenY_15() const { return ___screenY_15; }
	inline FsmFloat_t937133978 ** get_address_of_screenY_15() { return &___screenY_15; }
	inline void set_screenY_15(FsmFloat_t937133978 * value)
	{
		___screenY_15 = value;
		Il2CppCodeGenWriteBarrier(&___screenY_15, value);
	}

	inline static int32_t get_offset_of_normalized_16() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___normalized_16)); }
	inline FsmBool_t664485696 * get_normalized_16() const { return ___normalized_16; }
	inline FsmBool_t664485696 ** get_address_of_normalized_16() { return &___normalized_16; }
	inline void set_normalized_16(FsmBool_t664485696 * value)
	{
		___normalized_16 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_16, value);
	}

	inline static int32_t get_offset_of_hitEvent_17() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___hitEvent_17)); }
	inline FsmEvent_t1258573736 * get_hitEvent_17() const { return ___hitEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_hitEvent_17() { return &___hitEvent_17; }
	inline void set_hitEvent_17(FsmEvent_t1258573736 * value)
	{
		___hitEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___hitEvent_17, value);
	}

	inline static int32_t get_offset_of_storeResult_18() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___storeResult_18)); }
	inline FsmBool_t664485696 * get_storeResult_18() const { return ___storeResult_18; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_18() { return &___storeResult_18; }
	inline void set_storeResult_18(FsmBool_t664485696 * value)
	{
		___storeResult_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___everyFrame_19)); }
	inline FsmBool_t664485696 * get_everyFrame_19() const { return ___everyFrame_19; }
	inline FsmBool_t664485696 ** get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(FsmBool_t664485696 * value)
	{
		___everyFrame_19 = value;
		Il2CppCodeGenWriteBarrier(&___everyFrame_19, value);
	}

	inline static int32_t get_offset_of_guiElement_20() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___guiElement_20)); }
	inline GUIElement_t3381083099 * get_guiElement_20() const { return ___guiElement_20; }
	inline GUIElement_t3381083099 ** get_address_of_guiElement_20() { return &___guiElement_20; }
	inline void set_guiElement_20(GUIElement_t3381083099 * value)
	{
		___guiElement_20 = value;
		Il2CppCodeGenWriteBarrier(&___guiElement_20, value);
	}

	inline static int32_t get_offset_of_gameObjectCached_21() { return static_cast<int32_t>(offsetof(GUIElementHitTest_t533565572, ___gameObjectCached_21)); }
	inline GameObject_t1756533147 * get_gameObjectCached_21() const { return ___gameObjectCached_21; }
	inline GameObject_t1756533147 ** get_address_of_gameObjectCached_21() { return &___gameObjectCached_21; }
	inline void set_gameObjectCached_21(GameObject_t1756533147 * value)
	{
		___gameObjectCached_21 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectCached_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
