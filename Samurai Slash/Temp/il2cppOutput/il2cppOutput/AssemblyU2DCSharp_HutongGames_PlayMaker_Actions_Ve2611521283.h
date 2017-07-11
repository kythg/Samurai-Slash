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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3RotateTowards
struct  Vector3RotateTowards_t2611521283  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3RotateTowards::currentDirection
	FsmVector3_t3996534004 * ___currentDirection_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3RotateTowards::targetDirection
	FsmVector3_t3996534004 * ___targetDirection_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3RotateTowards::rotateSpeed
	FsmFloat_t937133978 * ___rotateSpeed_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3RotateTowards::maxMagnitude
	FsmFloat_t937133978 * ___maxMagnitude_14;

public:
	inline static int32_t get_offset_of_currentDirection_11() { return static_cast<int32_t>(offsetof(Vector3RotateTowards_t2611521283, ___currentDirection_11)); }
	inline FsmVector3_t3996534004 * get_currentDirection_11() const { return ___currentDirection_11; }
	inline FsmVector3_t3996534004 ** get_address_of_currentDirection_11() { return &___currentDirection_11; }
	inline void set_currentDirection_11(FsmVector3_t3996534004 * value)
	{
		___currentDirection_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentDirection_11, value);
	}

	inline static int32_t get_offset_of_targetDirection_12() { return static_cast<int32_t>(offsetof(Vector3RotateTowards_t2611521283, ___targetDirection_12)); }
	inline FsmVector3_t3996534004 * get_targetDirection_12() const { return ___targetDirection_12; }
	inline FsmVector3_t3996534004 ** get_address_of_targetDirection_12() { return &___targetDirection_12; }
	inline void set_targetDirection_12(FsmVector3_t3996534004 * value)
	{
		___targetDirection_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetDirection_12, value);
	}

	inline static int32_t get_offset_of_rotateSpeed_13() { return static_cast<int32_t>(offsetof(Vector3RotateTowards_t2611521283, ___rotateSpeed_13)); }
	inline FsmFloat_t937133978 * get_rotateSpeed_13() const { return ___rotateSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_rotateSpeed_13() { return &___rotateSpeed_13; }
	inline void set_rotateSpeed_13(FsmFloat_t937133978 * value)
	{
		___rotateSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotateSpeed_13, value);
	}

	inline static int32_t get_offset_of_maxMagnitude_14() { return static_cast<int32_t>(offsetof(Vector3RotateTowards_t2611521283, ___maxMagnitude_14)); }
	inline FsmFloat_t937133978 * get_maxMagnitude_14() const { return ___maxMagnitude_14; }
	inline FsmFloat_t937133978 ** get_address_of_maxMagnitude_14() { return &___maxMagnitude_14; }
	inline void set_maxMagnitude_14(FsmFloat_t937133978 * value)
	{
		___maxMagnitude_14 = value;
		Il2CppCodeGenWriteBarrier(&___maxMagnitude_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
