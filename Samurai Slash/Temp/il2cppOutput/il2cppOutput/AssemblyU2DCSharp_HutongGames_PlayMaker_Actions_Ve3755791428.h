#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2RotateTowards
struct  Vector2RotateTowards_t3755791428  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2RotateTowards::currentDirection
	FsmVector2_t2430450063 * ___currentDirection_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2RotateTowards::targetDirection
	FsmVector2_t2430450063 * ___targetDirection_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2RotateTowards::rotateSpeed
	FsmFloat_t937133978 * ___rotateSpeed_13;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.Vector2RotateTowards::current
	Vector3_t2243707580  ___current_14;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.Vector2RotateTowards::target
	Vector3_t2243707580  ___target_15;

public:
	inline static int32_t get_offset_of_currentDirection_11() { return static_cast<int32_t>(offsetof(Vector2RotateTowards_t3755791428, ___currentDirection_11)); }
	inline FsmVector2_t2430450063 * get_currentDirection_11() const { return ___currentDirection_11; }
	inline FsmVector2_t2430450063 ** get_address_of_currentDirection_11() { return &___currentDirection_11; }
	inline void set_currentDirection_11(FsmVector2_t2430450063 * value)
	{
		___currentDirection_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentDirection_11, value);
	}

	inline static int32_t get_offset_of_targetDirection_12() { return static_cast<int32_t>(offsetof(Vector2RotateTowards_t3755791428, ___targetDirection_12)); }
	inline FsmVector2_t2430450063 * get_targetDirection_12() const { return ___targetDirection_12; }
	inline FsmVector2_t2430450063 ** get_address_of_targetDirection_12() { return &___targetDirection_12; }
	inline void set_targetDirection_12(FsmVector2_t2430450063 * value)
	{
		___targetDirection_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetDirection_12, value);
	}

	inline static int32_t get_offset_of_rotateSpeed_13() { return static_cast<int32_t>(offsetof(Vector2RotateTowards_t3755791428, ___rotateSpeed_13)); }
	inline FsmFloat_t937133978 * get_rotateSpeed_13() const { return ___rotateSpeed_13; }
	inline FsmFloat_t937133978 ** get_address_of_rotateSpeed_13() { return &___rotateSpeed_13; }
	inline void set_rotateSpeed_13(FsmFloat_t937133978 * value)
	{
		___rotateSpeed_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotateSpeed_13, value);
	}

	inline static int32_t get_offset_of_current_14() { return static_cast<int32_t>(offsetof(Vector2RotateTowards_t3755791428, ___current_14)); }
	inline Vector3_t2243707580  get_current_14() const { return ___current_14; }
	inline Vector3_t2243707580 * get_address_of_current_14() { return &___current_14; }
	inline void set_current_14(Vector3_t2243707580  value)
	{
		___current_14 = value;
	}

	inline static int32_t get_offset_of_target_15() { return static_cast<int32_t>(offsetof(Vector2RotateTowards_t3755791428, ___target_15)); }
	inline Vector3_t2243707580  get_target_15() const { return ___target_15; }
	inline Vector3_t2243707580 * get_address_of_target_15() { return &___target_15; }
	inline void set_target_15(Vector3_t2243707580  value)
	{
		___target_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
