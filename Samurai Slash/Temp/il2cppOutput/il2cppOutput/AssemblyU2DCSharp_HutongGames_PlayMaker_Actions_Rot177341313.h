#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Rotate
struct  Rotate_t177341313  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.Rotate::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Rotate::vector
	FsmVector3_t3996534004 * ___vector_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Rotate::xAngle
	FsmFloat_t937133978 * ___xAngle_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Rotate::yAngle
	FsmFloat_t937133978 * ___yAngle_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Rotate::zAngle
	FsmFloat_t937133978 * ___zAngle_15;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.Rotate::space
	int32_t ___space_16;
	// System.Boolean HutongGames.PlayMaker.Actions.Rotate::perSecond
	bool ___perSecond_17;
	// System.Boolean HutongGames.PlayMaker.Actions.Rotate::everyFrame
	bool ___everyFrame_18;
	// System.Boolean HutongGames.PlayMaker.Actions.Rotate::lateUpdate
	bool ___lateUpdate_19;
	// System.Boolean HutongGames.PlayMaker.Actions.Rotate::fixedUpdate
	bool ___fixedUpdate_20;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_vector_12() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___vector_12)); }
	inline FsmVector3_t3996534004 * get_vector_12() const { return ___vector_12; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_12() { return &___vector_12; }
	inline void set_vector_12(FsmVector3_t3996534004 * value)
	{
		___vector_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector_12, value);
	}

	inline static int32_t get_offset_of_xAngle_13() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___xAngle_13)); }
	inline FsmFloat_t937133978 * get_xAngle_13() const { return ___xAngle_13; }
	inline FsmFloat_t937133978 ** get_address_of_xAngle_13() { return &___xAngle_13; }
	inline void set_xAngle_13(FsmFloat_t937133978 * value)
	{
		___xAngle_13 = value;
		Il2CppCodeGenWriteBarrier(&___xAngle_13, value);
	}

	inline static int32_t get_offset_of_yAngle_14() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___yAngle_14)); }
	inline FsmFloat_t937133978 * get_yAngle_14() const { return ___yAngle_14; }
	inline FsmFloat_t937133978 ** get_address_of_yAngle_14() { return &___yAngle_14; }
	inline void set_yAngle_14(FsmFloat_t937133978 * value)
	{
		___yAngle_14 = value;
		Il2CppCodeGenWriteBarrier(&___yAngle_14, value);
	}

	inline static int32_t get_offset_of_zAngle_15() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___zAngle_15)); }
	inline FsmFloat_t937133978 * get_zAngle_15() const { return ___zAngle_15; }
	inline FsmFloat_t937133978 ** get_address_of_zAngle_15() { return &___zAngle_15; }
	inline void set_zAngle_15(FsmFloat_t937133978 * value)
	{
		___zAngle_15 = value;
		Il2CppCodeGenWriteBarrier(&___zAngle_15, value);
	}

	inline static int32_t get_offset_of_space_16() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___space_16)); }
	inline int32_t get_space_16() const { return ___space_16; }
	inline int32_t* get_address_of_space_16() { return &___space_16; }
	inline void set_space_16(int32_t value)
	{
		___space_16 = value;
	}

	inline static int32_t get_offset_of_perSecond_17() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___perSecond_17)); }
	inline bool get_perSecond_17() const { return ___perSecond_17; }
	inline bool* get_address_of_perSecond_17() { return &___perSecond_17; }
	inline void set_perSecond_17(bool value)
	{
		___perSecond_17 = value;
	}

	inline static int32_t get_offset_of_everyFrame_18() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___everyFrame_18)); }
	inline bool get_everyFrame_18() const { return ___everyFrame_18; }
	inline bool* get_address_of_everyFrame_18() { return &___everyFrame_18; }
	inline void set_everyFrame_18(bool value)
	{
		___everyFrame_18 = value;
	}

	inline static int32_t get_offset_of_lateUpdate_19() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___lateUpdate_19)); }
	inline bool get_lateUpdate_19() const { return ___lateUpdate_19; }
	inline bool* get_address_of_lateUpdate_19() { return &___lateUpdate_19; }
	inline void set_lateUpdate_19(bool value)
	{
		___lateUpdate_19 = value;
	}

	inline static int32_t get_offset_of_fixedUpdate_20() { return static_cast<int32_t>(offsetof(Rotate_t177341313, ___fixedUpdate_20)); }
	inline bool get_fixedUpdate_20() const { return ___fixedUpdate_20; }
	inline bool* get_address_of_fixedUpdate_20() { return &___fixedUpdate_20; }
	inline void set_fixedUpdate_20(bool value)
	{
		___fixedUpdate_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
