﻿#pragma once

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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimatorStopRecording
struct  AnimatorStopRecording_t2353550856  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AnimatorStopRecording::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorStopRecording::recorderStartTime
	FsmFloat_t937133978 * ___recorderStartTime_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AnimatorStopRecording::recorderStopTime
	FsmFloat_t937133978 * ___recorderStopTime_13;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AnimatorStopRecording_t2353550856, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_recorderStartTime_12() { return static_cast<int32_t>(offsetof(AnimatorStopRecording_t2353550856, ___recorderStartTime_12)); }
	inline FsmFloat_t937133978 * get_recorderStartTime_12() const { return ___recorderStartTime_12; }
	inline FsmFloat_t937133978 ** get_address_of_recorderStartTime_12() { return &___recorderStartTime_12; }
	inline void set_recorderStartTime_12(FsmFloat_t937133978 * value)
	{
		___recorderStartTime_12 = value;
		Il2CppCodeGenWriteBarrier(&___recorderStartTime_12, value);
	}

	inline static int32_t get_offset_of_recorderStopTime_13() { return static_cast<int32_t>(offsetof(AnimatorStopRecording_t2353550856, ___recorderStopTime_13)); }
	inline FsmFloat_t937133978 * get_recorderStopTime_13() const { return ___recorderStopTime_13; }
	inline FsmFloat_t937133978 ** get_address_of_recorderStopTime_13() { return &___recorderStopTime_13; }
	inline void set_recorderStopTime_13(FsmFloat_t937133978 * value)
	{
		___recorderStopTime_13 = value;
		Il2CppCodeGenWriteBarrier(&___recorderStopTime_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
