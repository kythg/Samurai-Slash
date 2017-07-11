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

// HutongGames.PlayMaker.Actions.GetScale
struct  GetScale_t179239356  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetScale::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetScale::vector
	FsmVector3_t3996534004 * ___vector_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetScale::xScale
	FsmFloat_t937133978 * ___xScale_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetScale::yScale
	FsmFloat_t937133978 * ___yScale_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetScale::zScale
	FsmFloat_t937133978 * ___zScale_15;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.GetScale::space
	int32_t ___space_16;
	// System.Boolean HutongGames.PlayMaker.Actions.GetScale::everyFrame
	bool ___everyFrame_17;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_vector_12() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___vector_12)); }
	inline FsmVector3_t3996534004 * get_vector_12() const { return ___vector_12; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_12() { return &___vector_12; }
	inline void set_vector_12(FsmVector3_t3996534004 * value)
	{
		___vector_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector_12, value);
	}

	inline static int32_t get_offset_of_xScale_13() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___xScale_13)); }
	inline FsmFloat_t937133978 * get_xScale_13() const { return ___xScale_13; }
	inline FsmFloat_t937133978 ** get_address_of_xScale_13() { return &___xScale_13; }
	inline void set_xScale_13(FsmFloat_t937133978 * value)
	{
		___xScale_13 = value;
		Il2CppCodeGenWriteBarrier(&___xScale_13, value);
	}

	inline static int32_t get_offset_of_yScale_14() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___yScale_14)); }
	inline FsmFloat_t937133978 * get_yScale_14() const { return ___yScale_14; }
	inline FsmFloat_t937133978 ** get_address_of_yScale_14() { return &___yScale_14; }
	inline void set_yScale_14(FsmFloat_t937133978 * value)
	{
		___yScale_14 = value;
		Il2CppCodeGenWriteBarrier(&___yScale_14, value);
	}

	inline static int32_t get_offset_of_zScale_15() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___zScale_15)); }
	inline FsmFloat_t937133978 * get_zScale_15() const { return ___zScale_15; }
	inline FsmFloat_t937133978 ** get_address_of_zScale_15() { return &___zScale_15; }
	inline void set_zScale_15(FsmFloat_t937133978 * value)
	{
		___zScale_15 = value;
		Il2CppCodeGenWriteBarrier(&___zScale_15, value);
	}

	inline static int32_t get_offset_of_space_16() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___space_16)); }
	inline int32_t get_space_16() const { return ___space_16; }
	inline int32_t* get_address_of_space_16() { return &___space_16; }
	inline void set_space_16(int32_t value)
	{
		___space_16 = value;
	}

	inline static int32_t get_offset_of_everyFrame_17() { return static_cast<int32_t>(offsetof(GetScale_t179239356, ___everyFrame_17)); }
	inline bool get_everyFrame_17() const { return ___everyFrame_17; }
	inline bool* get_address_of_everyFrame_17() { return &___everyFrame_17; }
	inline void set_everyFrame_17(bool value)
	{
		___everyFrame_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
