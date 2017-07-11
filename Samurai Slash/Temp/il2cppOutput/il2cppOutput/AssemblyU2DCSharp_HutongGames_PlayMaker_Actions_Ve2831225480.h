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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3Subtract
struct  Vector3Subtract_t2831225480  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Subtract::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3Subtract::subtractVector
	FsmVector3_t3996534004 * ___subtractVector_12;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector3Subtract::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_vector3Variable_11() { return static_cast<int32_t>(offsetof(Vector3Subtract_t2831225480, ___vector3Variable_11)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_11() const { return ___vector3Variable_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_11() { return &___vector3Variable_11; }
	inline void set_vector3Variable_11(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_11, value);
	}

	inline static int32_t get_offset_of_subtractVector_12() { return static_cast<int32_t>(offsetof(Vector3Subtract_t2831225480, ___subtractVector_12)); }
	inline FsmVector3_t3996534004 * get_subtractVector_12() const { return ___subtractVector_12; }
	inline FsmVector3_t3996534004 ** get_address_of_subtractVector_12() { return &___subtractVector_12; }
	inline void set_subtractVector_12(FsmVector3_t3996534004 * value)
	{
		___subtractVector_12 = value;
		Il2CppCodeGenWriteBarrier(&___subtractVector_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(Vector3Subtract_t2831225480, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
