#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com540501634.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Mo3109600863.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MouseLook2
struct  MouseLook2_t789373378  : public ComponentAction_1_t540501634
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MouseLook2::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.Actions.MouseLook2/RotationAxes HutongGames.PlayMaker.Actions.MouseLook2::axes
	int32_t ___axes_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::sensitivityX
	FsmFloat_t937133978 * ___sensitivityX_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::sensitivityY
	FsmFloat_t937133978 * ___sensitivityY_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::minimumX
	FsmFloat_t937133978 * ___minimumX_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::maximumX
	FsmFloat_t937133978 * ___maximumX_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::minimumY
	FsmFloat_t937133978 * ___minimumY_19;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook2::maximumY
	FsmFloat_t937133978 * ___maximumY_20;
	// System.Boolean HutongGames.PlayMaker.Actions.MouseLook2::everyFrame
	bool ___everyFrame_21;
	// System.Single HutongGames.PlayMaker.Actions.MouseLook2::rotationX
	float ___rotationX_22;
	// System.Single HutongGames.PlayMaker.Actions.MouseLook2::rotationY
	float ___rotationY_23;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_axes_14() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___axes_14)); }
	inline int32_t get_axes_14() const { return ___axes_14; }
	inline int32_t* get_address_of_axes_14() { return &___axes_14; }
	inline void set_axes_14(int32_t value)
	{
		___axes_14 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_15() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___sensitivityX_15)); }
	inline FsmFloat_t937133978 * get_sensitivityX_15() const { return ___sensitivityX_15; }
	inline FsmFloat_t937133978 ** get_address_of_sensitivityX_15() { return &___sensitivityX_15; }
	inline void set_sensitivityX_15(FsmFloat_t937133978 * value)
	{
		___sensitivityX_15 = value;
		Il2CppCodeGenWriteBarrier(&___sensitivityX_15, value);
	}

	inline static int32_t get_offset_of_sensitivityY_16() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___sensitivityY_16)); }
	inline FsmFloat_t937133978 * get_sensitivityY_16() const { return ___sensitivityY_16; }
	inline FsmFloat_t937133978 ** get_address_of_sensitivityY_16() { return &___sensitivityY_16; }
	inline void set_sensitivityY_16(FsmFloat_t937133978 * value)
	{
		___sensitivityY_16 = value;
		Il2CppCodeGenWriteBarrier(&___sensitivityY_16, value);
	}

	inline static int32_t get_offset_of_minimumX_17() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___minimumX_17)); }
	inline FsmFloat_t937133978 * get_minimumX_17() const { return ___minimumX_17; }
	inline FsmFloat_t937133978 ** get_address_of_minimumX_17() { return &___minimumX_17; }
	inline void set_minimumX_17(FsmFloat_t937133978 * value)
	{
		___minimumX_17 = value;
		Il2CppCodeGenWriteBarrier(&___minimumX_17, value);
	}

	inline static int32_t get_offset_of_maximumX_18() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___maximumX_18)); }
	inline FsmFloat_t937133978 * get_maximumX_18() const { return ___maximumX_18; }
	inline FsmFloat_t937133978 ** get_address_of_maximumX_18() { return &___maximumX_18; }
	inline void set_maximumX_18(FsmFloat_t937133978 * value)
	{
		___maximumX_18 = value;
		Il2CppCodeGenWriteBarrier(&___maximumX_18, value);
	}

	inline static int32_t get_offset_of_minimumY_19() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___minimumY_19)); }
	inline FsmFloat_t937133978 * get_minimumY_19() const { return ___minimumY_19; }
	inline FsmFloat_t937133978 ** get_address_of_minimumY_19() { return &___minimumY_19; }
	inline void set_minimumY_19(FsmFloat_t937133978 * value)
	{
		___minimumY_19 = value;
		Il2CppCodeGenWriteBarrier(&___minimumY_19, value);
	}

	inline static int32_t get_offset_of_maximumY_20() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___maximumY_20)); }
	inline FsmFloat_t937133978 * get_maximumY_20() const { return ___maximumY_20; }
	inline FsmFloat_t937133978 ** get_address_of_maximumY_20() { return &___maximumY_20; }
	inline void set_maximumY_20(FsmFloat_t937133978 * value)
	{
		___maximumY_20 = value;
		Il2CppCodeGenWriteBarrier(&___maximumY_20, value);
	}

	inline static int32_t get_offset_of_everyFrame_21() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___everyFrame_21)); }
	inline bool get_everyFrame_21() const { return ___everyFrame_21; }
	inline bool* get_address_of_everyFrame_21() { return &___everyFrame_21; }
	inline void set_everyFrame_21(bool value)
	{
		___everyFrame_21 = value;
	}

	inline static int32_t get_offset_of_rotationX_22() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___rotationX_22)); }
	inline float get_rotationX_22() const { return ___rotationX_22; }
	inline float* get_address_of_rotationX_22() { return &___rotationX_22; }
	inline void set_rotationX_22(float value)
	{
		___rotationX_22 = value;
	}

	inline static int32_t get_offset_of_rotationY_23() { return static_cast<int32_t>(offsetof(MouseLook2_t789373378, ___rotationY_23)); }
	inline float get_rotationY_23() const { return ___rotationY_23; }
	inline float* get_address_of_rotationY_23() { return &___rotationY_23; }
	inline void set_rotationY_23(float value)
	{
		___rotationY_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
