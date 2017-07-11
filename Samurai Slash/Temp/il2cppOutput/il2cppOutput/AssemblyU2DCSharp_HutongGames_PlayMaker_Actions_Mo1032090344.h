#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Mo2434617301.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MouseLook
struct  MouseLook_t1032090344  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MouseLook::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.Actions.MouseLook/RotationAxes HutongGames.PlayMaker.Actions.MouseLook::axes
	int32_t ___axes_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::sensitivityX
	FsmFloat_t937133978 * ___sensitivityX_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::sensitivityY
	FsmFloat_t937133978 * ___sensitivityY_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::minimumX
	FsmFloat_t937133978 * ___minimumX_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::maximumX
	FsmFloat_t937133978 * ___maximumX_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::minimumY
	FsmFloat_t937133978 * ___minimumY_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.MouseLook::maximumY
	FsmFloat_t937133978 * ___maximumY_18;
	// System.Boolean HutongGames.PlayMaker.Actions.MouseLook::everyFrame
	bool ___everyFrame_19;
	// System.Single HutongGames.PlayMaker.Actions.MouseLook::rotationX
	float ___rotationX_20;
	// System.Single HutongGames.PlayMaker.Actions.MouseLook::rotationY
	float ___rotationY_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_axes_12() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___axes_12)); }
	inline int32_t get_axes_12() const { return ___axes_12; }
	inline int32_t* get_address_of_axes_12() { return &___axes_12; }
	inline void set_axes_12(int32_t value)
	{
		___axes_12 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_13() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___sensitivityX_13)); }
	inline FsmFloat_t937133978 * get_sensitivityX_13() const { return ___sensitivityX_13; }
	inline FsmFloat_t937133978 ** get_address_of_sensitivityX_13() { return &___sensitivityX_13; }
	inline void set_sensitivityX_13(FsmFloat_t937133978 * value)
	{
		___sensitivityX_13 = value;
		Il2CppCodeGenWriteBarrier(&___sensitivityX_13, value);
	}

	inline static int32_t get_offset_of_sensitivityY_14() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___sensitivityY_14)); }
	inline FsmFloat_t937133978 * get_sensitivityY_14() const { return ___sensitivityY_14; }
	inline FsmFloat_t937133978 ** get_address_of_sensitivityY_14() { return &___sensitivityY_14; }
	inline void set_sensitivityY_14(FsmFloat_t937133978 * value)
	{
		___sensitivityY_14 = value;
		Il2CppCodeGenWriteBarrier(&___sensitivityY_14, value);
	}

	inline static int32_t get_offset_of_minimumX_15() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___minimumX_15)); }
	inline FsmFloat_t937133978 * get_minimumX_15() const { return ___minimumX_15; }
	inline FsmFloat_t937133978 ** get_address_of_minimumX_15() { return &___minimumX_15; }
	inline void set_minimumX_15(FsmFloat_t937133978 * value)
	{
		___minimumX_15 = value;
		Il2CppCodeGenWriteBarrier(&___minimumX_15, value);
	}

	inline static int32_t get_offset_of_maximumX_16() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___maximumX_16)); }
	inline FsmFloat_t937133978 * get_maximumX_16() const { return ___maximumX_16; }
	inline FsmFloat_t937133978 ** get_address_of_maximumX_16() { return &___maximumX_16; }
	inline void set_maximumX_16(FsmFloat_t937133978 * value)
	{
		___maximumX_16 = value;
		Il2CppCodeGenWriteBarrier(&___maximumX_16, value);
	}

	inline static int32_t get_offset_of_minimumY_17() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___minimumY_17)); }
	inline FsmFloat_t937133978 * get_minimumY_17() const { return ___minimumY_17; }
	inline FsmFloat_t937133978 ** get_address_of_minimumY_17() { return &___minimumY_17; }
	inline void set_minimumY_17(FsmFloat_t937133978 * value)
	{
		___minimumY_17 = value;
		Il2CppCodeGenWriteBarrier(&___minimumY_17, value);
	}

	inline static int32_t get_offset_of_maximumY_18() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___maximumY_18)); }
	inline FsmFloat_t937133978 * get_maximumY_18() const { return ___maximumY_18; }
	inline FsmFloat_t937133978 ** get_address_of_maximumY_18() { return &___maximumY_18; }
	inline void set_maximumY_18(FsmFloat_t937133978 * value)
	{
		___maximumY_18 = value;
		Il2CppCodeGenWriteBarrier(&___maximumY_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}

	inline static int32_t get_offset_of_rotationX_20() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___rotationX_20)); }
	inline float get_rotationX_20() const { return ___rotationX_20; }
	inline float* get_address_of_rotationX_20() { return &___rotationX_20; }
	inline void set_rotationX_20(float value)
	{
		___rotationX_20 = value;
	}

	inline static int32_t get_offset_of_rotationY_21() { return static_cast<int32_t>(offsetof(MouseLook_t1032090344, ___rotationY_21)); }
	inline float get_rotationY_21() const { return ___rotationY_21; }
	inline float* get_address_of_rotationY_21() { return &___rotationY_21; }
	inline void set_rotationY_21(float value)
	{
		___rotationY_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
